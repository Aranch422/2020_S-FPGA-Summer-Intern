void Max_Pooling_10x10(int ifmap[10][10],int (&result)[25]){
#pragma HLS INTERFACE s_axilite port=ifmap
#pragma HLS INTERFACE s_axilite port=result

#pragma HLS INTERFACE ap_ctrl_none port=return

#pragma HLS array_partition variable=ifmap complete

	int idx=0;
	for(int i=0;i<10;i=i+2){
#pragma HLS pipeline
		for(int j=0;j<10;j=j+2){
			int max=ifmap[i][j];
			if(max<ifmap[i][j+1]) max=ifmap[i][j+1];
			if(max<ifmap[i+1][j]) max=ifmap[i+1][j];
			if(max<ifmap[i+1][j+1]) max=ifmap[i+1][j+1];
			result[idx++]=max;
		}
	}
}
