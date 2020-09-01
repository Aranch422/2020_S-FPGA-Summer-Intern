void sys_matmul16x16_2port(int matA[8][1031],int matB[8][1031],int (&result)[64]){
#pragma HLS INTERFACE s_axilite port=matA
#pragma HLS INTERFACE s_axilite port=matB
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

	int sum[64];
	int a[64];
	int b[64];
#pragma HLS array_partition variable=sum complete
#pragma HLS array_partition variable=matA complete
#pragma HLS array_partition variable=matB complete
#pragma HLS array_partition variable=a complete
#pragma HLS array_partition variable=b complete
#pragma HLS array_partition variable=result complete
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
		a[i]=0;
		b[i]=0;
	}


//start calculate
	for(int k=1030;k>=0;k--){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i*8+j]=a[i*8+j-1];
				b[i*8+j]=b[(i-1)*8+j];
			}
		}

		for(int i=0;i<8;i++){
#pragma HLS UNROLL
			a[i*8]=matA[i][k];
			b[i]=matB[i][k];
		}

		//calculate first
		for(int i=0;i<64;i++){
#pragma HLS UNROLL
			sum[i]+=a[i]*b[i];
		}
	}

//rest of loop
	for(int k=0;k<7;k++){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i*8+j]=a[i*8+j-1];
				b[i*8+j]=b[(i-1)*8+j];
			}
		}

		for(int i=0;i<8;i++){
#pragma HLS UNROLL
			a[i*8]=0;
			b[i]=0;
		}

		//calculate
		for(int i=0;i<64;i++){
#pragma HLS UNROLL
			sum[i]+=a[i]*b[i];
		}
	}

//result write
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		result[i]=sum[i];
	}
}
