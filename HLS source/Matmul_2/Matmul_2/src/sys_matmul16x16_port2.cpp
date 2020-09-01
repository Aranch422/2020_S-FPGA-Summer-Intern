void sys_matmul16x16_2port(int matA[16][1031],int matB[16][1031],int (&result)[256]){
#pragma HLS INTERFACE s_axilite port=matA
#pragma HLS INTERFACE s_axilite port=matB
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS INLINE off

	int a[16][16];
	int b[16][16];

#pragma HLS array_partition variable=matA complete
#pragma HLS array_partition variable=matB complete
#pragma HLS array_partition variable=a complete
#pragma HLS array_partition variable=b complete
#pragma HLS array_partition variable=result complete

	//initialize a b
	for(int i=0;i<16;i++){
	#pragma HLS PIPELINE
		for(int j=0;j<16;j++){
	#pragma HLS UNROLL
			a[i][j]=0;
			b[i][j]=0;
		}
	}

//start calculate
	for(int k=1038;k>=-16;k--){
	#pragma HLS PIPELINE
		//update factors
		for(int i=15;i>0;i--){
			for(int j=15;j>0;j--){
				a[i][j]=a[i][j-1];
				b[i][j]=b[i-1][j];
			}
		}
		if(k<0){
			for(int i=0;i<16;i++){
			//#pragma HLS UNROLL
				a[i][0]=0;
				b[0][i]=0;
			}
		}
		else{
			for(int i=0;i<16;i++){
			//#pragma HLS UNROLL
				a[i][0]=matA[i][k];
				b[0][i]=matB[i][k];
			}
		}

		//calculate first
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				result[i*16+j]+=a[i][j]*b[i][j];
			}
		}
	}
}
