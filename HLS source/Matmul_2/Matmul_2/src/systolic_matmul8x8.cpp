
void sys_matmul8x8(int rowA[1031],
					int rowB[1031],
					int rowC[1031],
					int rowD[1031],
					int rowE[1031],
					int rowF[1031],
					int rowG[1031],
					int rowH[1031],
					int colA[1031],
					int colB[1031],
					int colC[1031],
					int colD[1031],
					int colE[1031],
					int colF[1031],
					int colG[1031],
					int colH[1031],
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
#pragma HLS array_partition variable=sum complete
	int a[64];
	int b[64];
	for(int i=0;i<64;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		sum[i]=0;
		a[i]=0;
		b[i]=0;

	}
	
	
	for(int k=1030;k>=0;k--){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i*8+j]=a[i*8+j-1];
				b[i*8+j]=b[(i-1)*8+j];
			}
		}

		a[0]=rowA[k];
		a[8]=rowB[k];
		a[16]=rowC[k];
		a[24]=rowD[k];
		a[32]=rowE[k];
		a[40]=rowF[k];
		a[48]=rowG[k];
		a[56]=rowH[k];

		b[0]=colA[k];
		b[1]=colB[k];
		b[2]=colC[k];
		b[3]=colD[k];
		b[4]=colE[k];
		b[5]=colF[k];
		b[6]=colG[k];
		b[7]=colH[k];
		//calculate
		for(int i=0;i<64;i++){
#pragma HLS UNROLL
//#pragma HLS DEPENDENCE variable=sum inter false
			sum[i]+=a[i]*b[i];
		}
	}

	//rest of loop
	for(int k=0;k<7;k++){
#pragma HLS PIPELINE
		//update factors
		for(int i=7;i>0;i--){
			for(int j=7;j>0;j--){
				a[i*8+j]=a[i*8+j-1];
				b[i*8+j]=b[(i-1)*8+j];
			}
		}

		a[0]=0;
		a[8]=0;
		a[16]=0;
		a[24]=0;
		a[32]=0;
		a[40]=0;
		a[48]=0;
		a[56]=0;

		b[0]=0;
		b[1]=0;
		b[2]=0;
		b[3]=0;
		b[4]=0;
		b[5]=0;
		b[6]=0;
		b[7]=0;

		//calculate
		for(int i=0;i<64;i++){
#pragma HLS UNROLL
//#pragma HLS DEPENDENCE variable=sum inter false
			sum[i]+=a[i]*b[i];
		}
	}
	
//result write
	for(int i=0;i<8;i++){
#pragma HLS PIPELINE
#pragma HLS UNROLL
		for(int j=0;j<8;j++){
			result[i*8+j]=sum[i*8+j];
		}
	}
}
