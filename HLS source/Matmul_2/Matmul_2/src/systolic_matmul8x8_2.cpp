
void sys_matmul8x8_2(int rowA[1038],
					int rowB[1038],
					int rowC[1038],
					int rowD[1038],
					int rowE[1038],
					int rowF[1038],
					int rowG[1038],
					int rowH[1038],
					int colA[1038],
					int colB[1038],
					int colC[1038],
					int colD[1038],
					int colE[1038],
					int colF[1038],
					int colG[1038],
					int colH[1038],
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

//initialize
	int sum[64];
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
	}


	for(int k=1030;k>=0;k--){
#pragma HLS PIPELINE

		//calculate
		sum[0]+=rowA[k]*colA[k];
		sum[1]+=rowA[k+1]*colB[k];
		sum[2]+=rowA[k+2]*colC[k];
		sum[3]+=rowA[k+3]*colD[k];
		sum[4]+=rowA[k+4]*colE[k];
		sum[5]+=rowA[k+5]*colF[k];
		sum[6]+=rowA[k+6]*colG[k];
		sum[7]+=rowA[k+7]*colH[k];

		sum[8]+=rowB[k]*colA[k+1];
		sum[9]+=rowB[k+1]*colB[k+1];
		sum[10]+=rowB[k+2]*colC[k+1];
		sum[11]+=rowB[k+3]*colD[k+1];
		sum[12]+=rowB[k+4]*colE[k+1];
		sum[13]+=rowB[k+5]*colF[k+1];
		sum[14]+=rowB[k+6]*colG[k+1];
		sum[15]+=rowB[k+7]*colH[k+1];

		sum[16]+=rowC[k]*colA[k+2];
		sum[17]+=rowC[k+1]*colB[k+2];
		sum[18]+=rowC[k+2]*colC[k+2];
		sum[19]+=rowC[k+3]*colD[k+2];
		sum[20]+=rowC[k+4]*colE[k+2];
		sum[21]+=rowC[k+5]*colF[k+2];
		sum[22]+=rowC[k+6]*colG[k+2];
		sum[23]+=rowC[k+7]*colH[k+2];

		sum[24]+=rowD[k]*colA[k+3];
		sum[25]+=rowD[k+1]*colB[k+3];
		sum[26]+=rowD[k+2]*colC[k+3];
		sum[27]+=rowD[k+3]*colD[k+3];
		sum[28]+=rowD[k+4]*colE[k+3];
		sum[29]+=rowD[k+5]*colF[k+3];
		sum[30]+=rowD[k+6]*colG[k+3];
		sum[31]+=rowD[k+7]*colH[k+3];

		sum[32]+=rowE[k]*colA[k+4];
		sum[33]+=rowE[k+1]*colB[k+4];
		sum[34]+=rowE[k+2]*colC[k+4];
		sum[35]+=rowE[k+3]*colD[k+4];
		sum[36]+=rowE[k+4]*colE[k+4];
		sum[37]+=rowE[k+5]*colF[k+4];
		sum[38]+=rowE[k+6]*colG[k+4];
		sum[39]+=rowE[k+7]*colH[k+4];

		sum[40]+=rowF[k]*colA[k+5];
		sum[41]+=rowF[k+1]*colB[k+5];
		sum[42]+=rowF[k+2]*colC[k+5];
		sum[43]+=rowF[k+3]*colD[k+5];
		sum[44]+=rowF[k+4]*colE[k+5];
		sum[45]+=rowF[k+5]*colF[k+5];
		sum[46]+=rowF[k+6]*colG[k+5];
		sum[47]+=rowF[k+7]*colH[k+5];

		sum[48]+=rowG[k]*colA[k+6];
		sum[49]+=rowG[k+1]*colB[k+6];
		sum[50]+=rowG[k+2]*colC[k+6];
		sum[51]+=rowG[k+3]*colD[k+6];
		sum[52]+=rowG[k+4]*colE[k+6];
		sum[53]+=rowG[k+5]*colF[k+6];
		sum[54]+=rowG[k+6]*colG[k+6];
		sum[55]+=rowG[k+7]*colH[k+6];

		sum[56]+=rowH[k]*colA[k+7];
		sum[57]+=rowH[k+1]*colB[k+7];
		sum[58]+=rowH[k+2]*colC[k+7];
		sum[59]+=rowH[k+3]*colD[k+7];
		sum[60]+=rowH[k+4]*colE[k+7];
		sum[61]+=rowH[k+5]*colF[k+7];
		sum[62]+=rowH[k+6]*colG[k+7];
		sum[63]+=rowH[k+7]*colH[k+7];

	}
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
			result[i]=sum[i];
	}
}
