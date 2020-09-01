//matmul 144*25, 5*5
void matmul(int (&map)[144][25],
			int filter[25],
			int (&result)[144]
			)
{

//array partition
#pragma HLS array_partition variable=map factor=25 dim=2
#pragma HLS array_partition variable=filter complete
#pragma HLS array_partition variable=result complete

	for(int i=0;i<144;i++){
#pragma HLS PIPELINE
		result[i]=0;
		for(int j=0;j<25;j++){
			result[i]+=map[i][j]*filter[j];
		}
	}
}

void im2col(int ifmap[16][16],
			int (&ofmap)[144],
			int filter[25]
			)
{
#pragma HLS INTERFACE s_axilite port=ifmap
#pragma HLS INTERFACE s_axilite port=ofmap
#pragma HLS INTERFACE s_axilite port=filter
#pragma HLS INTERFACE ap_ctrl_none port=return

	int if_1d[16*16];
	int im2col_map[144][25];

#pragma HLS array_partition variable=if_1d complete
#pragma HLS array_partition variable=ifmap factor=16 dim=2
#pragma HLS array_partition variable=im2col_map factor=25 dim=2

	for(int i=0;i<16;i++){
#pragma HLS PIPELINE
		for(int j=0;j<16;j++){
			if_1d[i*16+j]=ifmap[i][j];
		}
	}

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
#pragma HLS PIPELINE
			int Row=i*12+j;
			for(int ki=0;ki<5;ki++){
				for(int kj=0;kj<5;kj++){
					im2col_map[Row][ki*5+kj]=if_1d[(i+ki)*16+j+kj];
				}
			}
		}
	}
	matmul(im2col_map,filter,ofmap);

}
