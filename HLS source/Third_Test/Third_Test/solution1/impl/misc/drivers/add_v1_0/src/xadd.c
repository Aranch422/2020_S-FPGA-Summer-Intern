// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xadd.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XAdd_CfgInitialize(XAdd *InstancePtr, XAdd_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XAdd_Set_a(XAdd *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdd_WriteReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_A_DATA, Data);
}

u32 XAdd_Get_a(XAdd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdd_ReadReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_A_DATA);
    return Data;
}

void XAdd_Set_b(XAdd *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdd_WriteReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_B_DATA, Data);
}

u32 XAdd_Get_b(XAdd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdd_ReadReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_B_DATA);
    return Data;
}

u32 XAdd_Get_c(XAdd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdd_ReadReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_C_DATA);
    return Data;
}

u32 XAdd_Get_c_vld(XAdd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdd_ReadReg(InstancePtr->Axilites_BaseAddress, XADD_AXILITES_ADDR_C_CTRL);
    return Data & 0x1;
}
