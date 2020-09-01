void sys_matmul4x4_2port(int matA[4][1031],int matB[4][1031],int (&result)[16]){
#pragma HLS INTERFACE s_axilite port=matA
#pragma HLS INTERFACE s_axilite port=matB
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS INLINE off

	int a[4][4];
	int b[4][4];

#pragma HLS array_partition variable=matA complete
#pragma HLS array_partition variable=matB complete
#pragma HLS array_partition variable=a complete
#pragma HLS array_partition variable=b complete
#pragma HLS array_partition variable=result complete

	//initialize a b
	for(int i=0;i<4;i++){
#pragma HLS PIPELINE
		for(int j=0;j<4;j++){
#pragma HLS UNROLL
			a[i][j]=0;
			b[i][j]=0;
		}
	}

//start calculate
	for(int k=1030;k>=-4;k--){
#pragma HLS PIPELINE
		//update factors
		for(int i=3;i>0;i--){
			for(int j=3;j>0;j--){
				a[i][j]=a[i][j-1];
				b[i][j]=b[i-1][j];
			}
		}
		if(k<0){
			for(int i=0;i<4;i++){
				#pragma HLS UNROLL
				a[i][0]=0;
				b[0][i]=0;
			}
		}
		else{
			for(int i=0;i<4;i++){
	#pragma HLS UNROLL
				a[i][0]=matA[i][k];
				b[0][i]=matB[i][k];
			}
		}

		//calculate first
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				result[i*4+j]+=a[i][j]*b[i][j];
			}
		}
	}
}
