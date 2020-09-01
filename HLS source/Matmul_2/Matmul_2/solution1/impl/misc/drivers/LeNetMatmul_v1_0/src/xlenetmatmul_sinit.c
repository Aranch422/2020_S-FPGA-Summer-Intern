// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xlenetmatmul.h"

extern XLenetmatmul_Config XLenetmatmul_ConfigTable[];

XLenetmatmul_Config *XLenetmatmul_LookupConfig(u16 DeviceId) {
	XLenetmatmul_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XLENETMATMUL_NUM_INSTANCES; Index++) {
		if (XLenetmatmul_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XLenetmatmul_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XLenetmatmul_Initialize(XLenetmatmul *InstancePtr, u16 DeviceId) {
	XLenetmatmul_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XLenetmatmul_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XLenetmatmul_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

