void sys_matmul8x8_2port(float matA[8][1031],float matB[8][1031],float (&result)[64]){
#pragma HLS INTERFACE s_axilite port=matA
#pragma HLS INTERFACE s_axilite port=matB
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS INLINE off
	float sum[64];

	float temp_sum,temp_mul=0;

	float a[8][8];
	float b[8][8];
#pragma HLS array_partition variable=sum complete dim=1

#pragma HLS array_partition variable=matA complete
#pragma HLS array_partition variable=matB complete
#pragma HLS array_partition variable=a complete
#pragma HLS array_partition variable=b complete
#pragma HLS array_partition variable=result complete
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
	}

	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
			a[i][j]=0;
			b[i][j]=0;
		}
	}

//start calculate
	for(int k=1030;k>=0;k--){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i][j]=a[i][j-1];
				b[i][j]=b[i-1][j];
			}
		}

		for(int i=0;i<8;i++){
#pragma HLS UNROLL
			a[i][0]=matA[i][k];
			b[0][i]=matB[i][k];
		}

		//calculate first
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
//#pragma HLS resource variable=temp_sum core=FAddSub_nodsp
#pragma HLS resource variable=temp_mul core=Fmul_nodsp
#pragma HLS UNROLL
				temp_mul=a[i][j]*b[i][j];
				sum[i*8+j]+=temp_mul;
			}
		}
	}

//rest of loop
	for(int k=0;k<7;k++){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i][j]=a[i][j-1];
				b[i][j]=b[i-1][j];
			}
		}

		for(int i=0;i<8;i++){
#pragma HLS UNROLL
			a[i][0]=0;
			b[0][i]=0;
		}

		//calculate
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
//#pragma HLS resource variable=temp_sum core=FAddSub_nodsp
#pragma HLS resource variable=temp_mul core=Fmul_nodsp
#pragma HLS UNROLL
				temp_mul=a[i][j]*b[i][j];
				sum[i*8+j]+=temp_mul;
			}
		}
	}

//result write
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		result[i]=sum[i];
	}
}
