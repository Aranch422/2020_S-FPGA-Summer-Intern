
void matmul8x8_2(int rowA[1024],
					int rowB[1024],
					int rowC[1024],
					int rowD[1024],
					int rowE[1024],
					int rowF[1024],
					int rowG[1024],
					int rowH[1024],
					int colA[1024],
					int colB[1024],
					int colC[1024],
					int colD[1024],
					int colE[1024],
					int colF[1024],
					int colG[1024],
					int colH[1024],
					int (&result)[64]){
#pragma HLS INTERFACE s_axilite port=rowA
#pragma HLS INTERFACE s_axilite port=rowB
#pragma HLS INTERFACE s_axilite port=rowC
#pragma HLS INTERFACE s_axilite port=rowD
#pragma HLS INTERFACE s_axilite port=rowE
#pragma HLS INTERFACE s_axilite port=rowF
#pragma HLS INTERFACE s_axilite port=rowG
#pragma HLS INTERFACE s_axilite port=rowH
#pragma HLS INTERFACE s_axilite port=colA
#pragma HLS INTERFACE s_axilite port=colB
#pragma HLS INTERFACE s_axilite port=colC
#pragma HLS INTERFACE s_axilite port=colD
#pragma HLS INTERFACE s_axilite port=colE
#pragma HLS INTERFACE s_axilite port=colF
#pragma HLS INTERFACE s_axilite port=colG
#pragma HLS INTERFACE s_axilite port=colH


#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

	int sum[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i][j]=0;
		}
	}
	for(int k=0;k<1024;k++){
#pragma HLS PIPELINE

		sum[0][0]+=rowA[k]*colA[k];
		sum[0][1]+=rowA[k]*colB[k];
		sum[0][2]+=rowA[k]*colC[k];
		sum[0][3]+=rowA[k]*colD[k];
		sum[0][4]+=rowA[k]*colE[k];
		sum[0][5]+=rowA[k]*colF[k];
		sum[0][6]+=rowA[k]*colG[k];
		sum[0][7]+=rowA[k]*colH[k];

		sum[1][0]+=rowB[k]*colA[k];
		sum[1][1]+=rowB[k]*colB[k];
		sum[1][2]+=rowB[k]*colC[k];
		sum[1][3]+=rowB[k]*colD[k];
		sum[1][4]+=rowB[k]*colE[k];
		sum[1][5]+=rowB[k]*colF[k];
		sum[1][6]+=rowB[k]*colG[k];
		sum[1][7]+=rowB[k]*colH[k];

		sum[2][0]+=rowC[k]*colA[k];
		sum[2][1]+=rowC[k]*colB[k];
		sum[2][2]+=rowC[k]*colC[k];
		sum[2][3]+=rowC[k]*colD[k];
		sum[2][4]+=rowC[k]*colE[k];
		sum[2][5]+=rowC[k]*colF[k];
		sum[2][6]+=rowC[k]*colG[k];
		sum[2][7]+=rowC[k]*colH[k];

		sum[3][0]+=rowD[k]*colA[k];
		sum[3][1]+=rowD[k]*colB[k];
		sum[3][2]+=rowD[k]*colC[k];
		sum[3][3]+=rowD[k]*colD[k];
		sum[3][4]+=rowD[k]*colE[k];
		sum[3][5]+=rowD[k]*colF[k];
		sum[3][6]+=rowD[k]*colG[k];
		sum[3][7]+=rowD[k]*colH[k];

		sum[4][0]+=rowE[k]*colA[k];
		sum[4][1]+=rowE[k]*colB[k];
		sum[4][2]+=rowE[k]*colC[k];
		sum[4][3]+=rowE[k]*colD[k];
		sum[4][4]+=rowE[k]*colE[k];
		sum[4][5]+=rowE[k]*colF[k];
		sum[4][6]+=rowE[k]*colG[k];
		sum[4][7]+=rowE[k]*colH[k];

		sum[5][0]+=rowF[k]*colA[k];
		sum[5][1]+=rowF[k]*colB[k];
		sum[5][2]+=rowF[k]*colC[k];
		sum[5][3]+=rowF[k]*colD[k];
		sum[5][4]+=rowF[k]*colE[k];
		sum[5][5]+=rowF[k]*colF[k];
		sum[5][6]+=rowF[k]*colG[k];
		sum[5][7]+=rowF[k]*colH[k];

		sum[6][0]+=rowG[k]*colA[k];
		sum[6][1]+=rowG[k]*colB[k];
		sum[6][2]+=rowG[k]*colC[k];
		sum[6][3]+=rowG[k]*colD[k];
		sum[6][4]+=rowG[k]*colE[k];
		sum[6][5]+=rowG[k]*colF[k];
		sum[6][6]+=rowG[k]*colG[k];
		sum[6][7]+=rowG[k]*colH[k];

		sum[7][0]+=rowH[k]*colA[k];
		sum[7][1]+=rowH[k]*colB[k];
		sum[7][2]+=rowH[k]*colC[k];
		sum[7][3]+=rowH[k]*colD[k];
		sum[7][4]+=rowH[k]*colE[k];
		sum[7][5]+=rowH[k]*colF[k];
		sum[7][6]+=rowH[k]*colG[k];
		sum[7][7]+=rowH[k]*colH[k];
	}

	for(int i=0;i<8;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		for(int j=0;j<8;j++){
			result[i*8+j]=sum[i][j];
		}
	}
}
