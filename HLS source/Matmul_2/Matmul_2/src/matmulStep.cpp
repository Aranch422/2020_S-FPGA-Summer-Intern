#include <hls_stream.h>

void matmulStep(hls::stream<int> &input, hls::stream<int> &output) {
#pragma HLS INTERFACE axis port=input
#pragma HLS INTERFACE axis port=output
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS

	int rowA[1024];
	int colB[1024];
	for(int i=0;i<1024;i++){
#pragma HLS PIPELINE
	  rowA[i]=input.read();
	}
	int sum=0;
	for(int i=0;i<1024;i++){

	  for(int j=0;j<1024;j++){
		  colB[j]=input.read();
		  sum+=rowA[j]*colB[j];
	  }
	  output.write(sum);
	  sum=0;
	}
}
