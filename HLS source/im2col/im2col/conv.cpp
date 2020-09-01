void conv(int ifmap[16*16],
		  int filter[5*5],
		  int (&ofmap)[12][12])
{
#pragma HLS INTERFACE s_axilite port=ifmap
#pragma HLS INTERFACE s_axilite port=ofmap
#pragma HLS INTERFACE s_axilite port=filter
#pragma HLS INTERFACE ap_ctrl_none port=return

	//array partition
#pragma HLS array_partition variable=ifmap factor=64 dim=1
#pragma HLS array_partition variable=filter complete
#pragma HLS array_partition variable=ofmap factor=12 dim=2

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
#pragma HLS PIPELINE
#pragma HLS UNROLL region
			ofmap[i][j]=0;
			for(int fi=0;fi<5;fi++){
				for(int fj=0;fj<5;fj++){
					ofmap[i][j]+=ifmap[(i+fi)*16+j+fj]*filter[fi*5+fj];
				}
			}
		}
	}
}
