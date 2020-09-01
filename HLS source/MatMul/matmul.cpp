#include "ap_int.h"

struct myInt{
	int data;
	ap_int<1> last;
};

void matmul(myInt input[1024*1024*2],myInt output[1024*1024]){
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS
#pragma HLS INTERFACE axis port = input
#pragma HLS INTERFACE axis port = output
	int sum=0;
	int c;
	int row[1024];
	for (int i = 0; i < 1024; i++) {
		for(int r=0;r<1024;r++){
#pragma HLS UNROLL
			row[r]=input[i*1024+r].data;
		}

		for (int j = 0; j < 1024; j++) {
			for (int k = 0; k < 1024; k++) {
				c=input[1024*1024+k*1024+j].data;
				sum+=row[k]*c;
			}
			output[i*1024+j].data=sum;
			output[i*1024+j].last=input[i*1024+j].last;
			sum=0;
		}
	}
}
