// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmax_pooling_10x10.h"

extern XMax_pooling_10x10_Config XMax_pooling_10x10_ConfigTable[];

XMax_pooling_10x10_Config *XMax_pooling_10x10_LookupConfig(u16 DeviceId) {
	XMax_pooling_10x10_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMAX_POOLING_10X10_NUM_INSTANCES; Index++) {
		if (XMax_pooling_10x10_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMax_pooling_10x10_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMax_pooling_10x10_Initialize(XMax_pooling_10x10 *InstancePtr, u16 DeviceId) {
	XMax_pooling_10x10_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMax_pooling_10x10_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMax_pooling_10x10_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

