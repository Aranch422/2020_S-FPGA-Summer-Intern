void top( float in_1[100], float in_2[100], float output_1[100] ) {
  float reg_in_1, reg_in_2, reg_buff, reg_output = 0;
  for(int i = 0; i < 100; ++i){
#pragma HLS PIPELINE
#pragma HLS RESOURCE variable=reg_buff core=FMul_fulldsp
#pragma HLS RESOURCE variable=reg_output core=FAddSub_fulldsp
    reg_in_1 = in_1[i];
    reg_in_2 = in_2[i];
    reg_buff = reg_in_1 * reg_in_2;
    reg_output = reg_buff + reg_in_1;
    output_1[i] = reg_output;
  }

}
