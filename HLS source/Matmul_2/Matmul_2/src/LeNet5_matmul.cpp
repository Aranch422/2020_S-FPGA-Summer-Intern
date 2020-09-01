void LeNetMatmul(int mat[784][25],int filter[25],int (&result)[784]){
#pragma HLS INTERFACE s_axilite port=mat
#pragma HLS INTERFACE s_axilite port=filter
#pragma HLS INTERFACE s_axilite port=result
#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS array_partition variable=mat factor=25 dim=2
#pragma HLS array_partition variable=filter complete
#pragma HLS array_partition variable=result complete
	int sum=0;

	for(int i=0;i<784;i++){
#pragma HLS PIPELINE
		for(int j=0;j<25;j++){
			sum+=mat[i][j]*filter[j];
		}
		result[i]=sum;
		sum=0;
	}
}
