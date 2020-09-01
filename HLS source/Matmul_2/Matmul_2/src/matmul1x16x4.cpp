void matmul1x1(int rowA[1024],int colB[1024*16],int colC[1024*16],int colD[1024*16],int colE[1024*16],int (&result)[64]){
#pragma HLS INTERFACE s_axilite port=rowA
#pragma HLS INTERFACE s_axilite port=colB
#pragma HLS INTERFACE s_axilite port=colC
#pragma HLS INTERFACE s_axilite port=colD
#pragma HLS INTERFACE s_axilite port=colE
#pragma HLS INTERFACE s_axilite port=result
#pragma HLS INTERFACE ap_ctrl_none port=return

	int sum[64];
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
	}
	for(int i=0;i<1024;i++){
#pragma HLS PIPELINE
		for(int j=0;j<16;j++){
#pragma HLS UNROLL
			sum[j]+=rowA[i]*colB[j*1024+i];
			sum[j+16]+=rowA[i]*colC[j*1024+i];
			sum[j+32]+=rowA[i]*colD[j*1024+i];
			sum[j+48]+=rowA[i]*colE[j*1024+i];
		}
	}
	for(int i=0;i<64;i++){
	#pragma HLS PIPELINE
	#pragma HLS UNROLL
			result[i]=sum[i];
	}
}
