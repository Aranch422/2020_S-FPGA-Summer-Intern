#include "ap_int.h"


struct myInt{
	int data;
	ap_int<1> last;
};

void matmul128(myInt input[128*128*2],myInt output[128*128]){
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS
#pragma HLS INTERFACE axis port = input
#pragma HLS INTERFACE axis port = output
	int sum=0;
	int c;
	int row[128];
	for (int i = 0; i < 128; i++) {
		for(int r=0;r<128;r++){
#pragma HLS UNROLL
			row[r]=input[i*128+r].data;
		}

		for (int j = 0; j < 128; j++) {
			for (int k = 0; k < 128; k++) {
				c=input[128*128+k*128+j].data;
				sum+=row[k]*c;
			}
			output[i*128+j].data=sum;
			output[i*128+j].last=input[i*128+j].last;
			sum=0;
		}
	}
}
