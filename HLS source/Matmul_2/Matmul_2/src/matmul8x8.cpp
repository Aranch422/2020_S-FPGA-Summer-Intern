
void matmul8x8(int rowA[1024],
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

	int sum[64];
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
	}
	for(int k=0;k<1024;k++){
#pragma HLS PIPELINE

		sum[0]+=rowA[k]*colA[k];
		sum[1]+=rowA[k]*colB[k];
		sum[2]+=rowA[k]*colC[k];
		sum[3]+=rowA[k]*colD[k];
		sum[4]+=rowA[k]*colE[k];
		sum[5]+=rowA[k]*colF[k];
		sum[6]+=rowA[k]*colG[k];
		sum[7]+=rowA[k]*colH[k];

		sum[8]+=rowB[k]*colA[k];
		sum[9]+=rowB[k]*colB[k];
		sum[10]+=rowB[k]*colC[k];
		sum[11]+=rowB[k]*colD[k];
		sum[12]+=rowB[k]*colE[k];
		sum[13]+=rowB[k]*colF[k];
		sum[14]+=rowB[k]*colG[k];
		sum[15]+=rowB[k]*colH[k];

		sum[16]+=rowC[k]*colA[k];
		sum[17]+=rowC[k]*colB[k];
		sum[18]+=rowC[k]*colC[k];
		sum[19]+=rowC[k]*colD[k];
		sum[20]+=rowC[k]*colE[k];
		sum[21]+=rowC[k]*colF[k];
		sum[22]+=rowC[k]*colG[k];
		sum[23]+=rowC[k]*colH[k];

		sum[24]+=rowD[k]*colA[k];
		sum[25]+=rowD[k]*colB[k];
		sum[26]+=rowD[k]*colC[k];
		sum[27]+=rowD[k]*colD[k];
		sum[28]+=rowD[k]*colE[k];
		sum[29]+=rowD[k]*colF[k];
		sum[30]+=rowD[k]*colG[k];
		sum[31]+=rowD[k]*colH[k];

		sum[32]+=rowE[k]*colA[k];
		sum[33]+=rowE[k]*colB[k];
		sum[34]+=rowE[k]*colC[k];
		sum[35]+=rowE[k]*colD[k];
		sum[36]+=rowE[k]*colE[k];
		sum[37]+=rowE[k]*colF[k];
		sum[38]+=rowE[k]*colG[k];
		sum[39]+=rowE[k]*colH[k];

		sum[40]+=rowF[k]*colA[k];
		sum[42]+=rowF[k]*colB[k];
		sum[42]+=rowF[k]*colC[k];
		sum[43]+=rowF[k]*colD[k];
		sum[44]+=rowF[k]*colE[k];
		sum[45]+=rowF[k]*colF[k];
		sum[46]+=rowF[k]*colG[k];
		sum[47]+=rowF[k]*colH[k];

		sum[48]+=rowG[k]*colA[k];
		sum[49]+=rowG[k]*colB[k];
		sum[50]+=rowG[k]*colC[k];
		sum[51]+=rowG[k]*colD[k];
		sum[52]+=rowG[k]*colE[k];
		sum[53]+=rowG[k]*colF[k];
		sum[54]+=rowG[k]*colG[k];
		sum[55]+=rowG[k]*colH[k];

		sum[56]+=rowH[k]*colA[k];
		sum[57]+=rowH[k]*colB[k];
		sum[58]+=rowH[k]*colC[k];
		sum[59]+=rowH[k]*colD[k];
		sum[60]+=rowH[k]*colE[k];
		sum[61]+=rowH[k]*colF[k];
		sum[62]+=rowH[k]*colG[k];
		sum[63]+=rowH[k]*colH[k];
	}
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
			result[i]=sum[i];
	}
}
