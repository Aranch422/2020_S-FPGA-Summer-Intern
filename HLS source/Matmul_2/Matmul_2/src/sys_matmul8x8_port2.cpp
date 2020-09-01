void sys_matmul8x8_2port(int matA[8][1031],int matB[8][1031],int (&result)[64]){
#pragma HLS INTERFACE s_axilite port=matA
#pragma HLS INTERFACE s_axilite port=matB
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS INLINE off

	int a[8][8];
	int b[8][8];

#pragma HLS array_partition variable=matA complete
#pragma HLS array_partition variable=matB complete
#pragma HLS array_partition variable=a complete
#pragma HLS array_partition variable=b complete
#pragma HLS array_partition variable=result complete

	//initialize a b
	for(int i=0;i<8;i++){
#pragma HLS PIPELINE
		for(int j=0;j<8;j++){
#pragma HLS UNROLL
			a[i][j]=0;
			b[i][j]=0;
		}
	}

//start calculate
	for(int k=1030;k>=-8;k--){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i][j]=a[i][j-1];
				b[i][j]=b[i-1][j];
			}
		}
		if(k<0){
			for(int i=0;i<8;i++){
				#pragma HLS UNROLL
				a[i][0]=0;
				b[0][i]=0;
			}
		}
		else{
			for(int i=0;i<8;i++){
	#pragma HLS UNROLL
				a[i][0]=matA[i][k];
				b[0][i]=matB[i][k];
			}
		}

		//calculate first
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				result[i*8+j]+=a[i][j]*b[i][j];
			}
		}
	}
}
