// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xlenetmatmul.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XLenetmatmul_CfgInitialize(XLenetmatmul *InstancePtr, XLenetmatmul_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XLenetmatmul_Set_filter_0(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_0_DATA, Data);
}

u32 XLenetmatmul_Get_filter_0(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_0_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_1(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_1_DATA, Data);
}

u32 XLenetmatmul_Get_filter_1(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_1_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_2(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_2_DATA, Data);
}

u32 XLenetmatmul_Get_filter_2(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_2_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_3(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_3_DATA, Data);
}

u32 XLenetmatmul_Get_filter_3(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_3_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_4(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_4_DATA, Data);
}

u32 XLenetmatmul_Get_filter_4(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_4_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_5(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_5_DATA, Data);
}

u32 XLenetmatmul_Get_filter_5(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_5_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_6(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_6_DATA, Data);
}

u32 XLenetmatmul_Get_filter_6(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_6_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_7(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_7_DATA, Data);
}

u32 XLenetmatmul_Get_filter_7(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_7_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_8(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_8_DATA, Data);
}

u32 XLenetmatmul_Get_filter_8(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_8_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_9(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_9_DATA, Data);
}

u32 XLenetmatmul_Get_filter_9(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_9_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_10(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_10_DATA, Data);
}

u32 XLenetmatmul_Get_filter_10(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_10_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_11(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_11_DATA, Data);
}

u32 XLenetmatmul_Get_filter_11(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_11_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_12(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_12_DATA, Data);
}

u32 XLenetmatmul_Get_filter_12(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_12_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_13(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_13_DATA, Data);
}

u32 XLenetmatmul_Get_filter_13(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_13_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_14(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_14_DATA, Data);
}

u32 XLenetmatmul_Get_filter_14(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_14_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_15(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_15_DATA, Data);
}

u32 XLenetmatmul_Get_filter_15(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_15_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_16(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_16_DATA, Data);
}

u32 XLenetmatmul_Get_filter_16(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_16_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_17(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_17_DATA, Data);
}

u32 XLenetmatmul_Get_filter_17(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_17_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_18(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_18_DATA, Data);
}

u32 XLenetmatmul_Get_filter_18(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_18_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_19(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_19_DATA, Data);
}

u32 XLenetmatmul_Get_filter_19(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_19_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_20(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_20_DATA, Data);
}

u32 XLenetmatmul_Get_filter_20(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_20_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_21(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_21_DATA, Data);
}

u32 XLenetmatmul_Get_filter_21(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_21_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_22(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_22_DATA, Data);
}

u32 XLenetmatmul_Get_filter_22(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_22_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_23(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_23_DATA, Data);
}

u32 XLenetmatmul_Get_filter_23(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_23_DATA);
    return Data;
}

void XLenetmatmul_Set_filter_24(XLenetmatmul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenetmatmul_WriteReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_24_DATA, Data);
}

u32 XLenetmatmul_Get_filter_24(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_FILTER_24_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_0(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_0_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_0_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_0_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_1(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_1_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_1_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_1_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_2(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_2_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_2_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_2_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_3(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_3_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_3_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_3_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_4(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_4_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_4_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_4_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_5(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_5_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_5_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_5_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_6(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_6_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_6_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_6_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_7(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_7_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_7_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_7_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_8(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_8_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_8_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_8_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_9(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_9_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_9_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_9_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_10(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_10_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_10_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_10_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_11(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_11_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_11_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_11_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_12(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_12_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_12_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_12_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_13(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_13_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_13_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_13_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_14(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_14_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_14_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_14_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_15(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_15_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_15_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_15_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_16(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_16_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_16_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_16_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_17(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_17_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_17_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_17_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_18(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_18_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_18_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_18_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_19(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_19_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_19_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_19_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_20(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_20_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_20_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_20_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_21(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_21_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_21_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_21_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_22(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_22_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_22_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_22_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_23(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_23_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_23_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_23_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_24(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_24_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_24_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_24_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_25(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_25_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_25_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_25_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_26(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_26_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_26_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_26_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_27(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_27_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_27_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_27_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_28(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_28_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_28_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_28_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_29(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_29_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_29_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_29_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_30(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_30_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_30_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_30_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_31(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_31_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_31_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_31_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_32(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_32_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_32_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_32_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_33(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_33_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_33_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_33_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_34(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_34_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_34_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_34_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_35(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_35_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_35_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_35_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_36(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_36_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_36_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_36_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_37(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_37_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_37_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_37_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_38(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_38_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_38_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_38_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_39(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_39_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_39_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_39_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_40(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_40_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_40_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_40_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_41(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_41_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_41_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_41_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_42(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_42_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_42_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_42_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_43(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_43_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_43_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_43_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_44(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_44_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_44_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_44_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_45(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_45_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_45_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_45_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_46(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_46_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_46_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_46_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_47(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_47_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_47_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_47_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_48(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_48_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_48_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_48_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_49(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_49_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_49_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_49_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_50(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_50_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_50_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_50_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_51(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_51_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_51_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_51_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_52(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_52_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_52_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_52_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_53(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_53_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_53_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_53_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_54(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_54_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_54_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_54_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_55(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_55_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_55_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_55_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_56(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_56_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_56_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_56_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_57(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_57_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_57_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_57_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_58(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_58_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_58_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_58_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_59(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_59_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_59_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_59_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_60(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_60_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_60_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_60_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_61(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_61_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_61_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_61_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_62(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_62_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_62_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_62_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_63(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_63_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_63_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_63_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_64(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_64_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_64_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_64_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_65(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_65_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_65_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_65_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_66(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_66_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_66_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_66_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_67(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_67_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_67_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_67_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_68(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_68_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_68_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_68_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_69(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_69_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_69_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_69_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_70(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_70_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_70_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_70_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_71(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_71_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_71_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_71_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_72(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_72_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_72_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_72_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_73(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_73_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_73_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_73_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_74(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_74_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_74_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_74_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_75(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_75_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_75_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_75_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_76(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_76_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_76_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_76_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_77(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_77_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_77_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_77_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_78(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_78_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_78_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_78_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_79(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_79_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_79_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_79_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_80(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_80_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_80_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_80_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_81(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_81_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_81_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_81_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_82(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_82_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_82_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_82_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_83(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_83_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_83_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_83_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_84(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_84_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_84_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_84_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_85(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_85_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_85_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_85_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_86(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_86_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_86_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_86_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_87(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_87_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_87_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_87_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_88(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_88_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_88_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_88_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_89(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_89_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_89_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_89_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_90(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_90_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_90_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_90_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_91(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_91_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_91_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_91_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_92(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_92_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_92_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_92_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_93(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_93_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_93_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_93_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_94(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_94_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_94_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_94_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_95(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_95_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_95_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_95_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_96(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_96_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_96_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_96_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_97(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_97_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_97_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_97_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_98(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_98_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_98_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_98_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_99(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_99_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_99_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_99_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_100(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_100_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_100_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_100_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_101(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_101_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_101_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_101_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_102(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_102_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_102_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_102_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_103(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_103_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_103_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_103_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_104(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_104_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_104_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_104_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_105(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_105_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_105_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_105_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_106(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_106_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_106_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_106_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_107(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_107_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_107_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_107_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_108(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_108_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_108_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_108_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_109(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_109_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_109_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_109_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_110(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_110_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_110_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_110_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_111(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_111_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_111_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_111_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_112(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_112_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_112_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_112_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_113(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_113_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_113_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_113_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_114(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_114_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_114_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_114_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_115(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_115_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_115_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_115_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_116(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_116_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_116_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_116_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_117(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_117_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_117_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_117_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_118(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_118_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_118_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_118_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_119(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_119_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_119_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_119_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_120(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_120_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_120_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_120_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_121(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_121_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_121_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_121_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_122(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_122_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_122_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_122_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_123(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_123_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_123_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_123_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_124(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_124_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_124_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_124_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_125(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_125_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_125_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_125_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_126(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_126_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_126_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_126_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_127(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_127_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_127_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_127_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_128(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_128_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_128_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_128_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_129(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_129_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_129_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_129_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_130(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_130_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_130_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_130_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_131(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_131_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_131_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_131_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_132(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_132_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_132_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_132_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_133(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_133_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_133_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_133_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_134(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_134_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_134_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_134_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_135(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_135_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_135_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_135_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_136(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_136_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_136_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_136_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_137(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_137_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_137_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_137_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_138(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_138_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_138_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_138_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_139(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_139_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_139_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_139_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_140(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_140_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_140_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_140_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_141(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_141_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_141_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_141_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_142(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_142_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_142_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_142_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_143(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_143_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_143_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_143_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_144(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_144_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_144_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_144_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_145(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_145_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_145_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_145_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_146(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_146_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_146_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_146_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_147(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_147_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_147_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_147_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_148(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_148_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_148_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_148_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_149(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_149_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_149_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_149_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_150(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_150_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_150_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_150_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_151(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_151_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_151_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_151_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_152(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_152_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_152_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_152_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_153(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_153_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_153_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_153_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_154(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_154_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_154_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_154_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_155(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_155_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_155_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_155_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_156(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_156_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_156_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_156_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_157(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_157_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_157_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_157_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_158(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_158_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_158_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_158_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_159(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_159_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_159_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_159_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_160(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_160_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_160_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_160_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_161(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_161_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_161_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_161_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_162(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_162_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_162_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_162_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_163(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_163_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_163_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_163_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_164(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_164_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_164_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_164_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_165(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_165_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_165_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_165_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_166(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_166_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_166_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_166_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_167(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_167_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_167_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_167_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_168(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_168_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_168_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_168_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_169(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_169_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_169_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_169_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_170(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_170_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_170_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_170_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_171(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_171_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_171_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_171_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_172(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_172_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_172_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_172_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_173(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_173_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_173_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_173_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_174(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_174_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_174_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_174_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_175(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_175_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_175_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_175_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_176(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_176_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_176_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_176_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_177(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_177_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_177_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_177_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_178(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_178_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_178_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_178_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_179(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_179_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_179_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_179_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_180(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_180_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_180_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_180_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_181(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_181_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_181_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_181_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_182(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_182_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_182_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_182_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_183(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_183_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_183_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_183_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_184(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_184_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_184_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_184_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_185(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_185_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_185_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_185_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_186(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_186_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_186_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_186_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_187(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_187_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_187_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_187_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_188(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_188_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_188_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_188_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_189(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_189_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_189_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_189_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_190(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_190_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_190_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_190_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_191(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_191_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_191_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_191_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_192(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_192_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_192_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_192_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_193(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_193_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_193_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_193_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_194(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_194_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_194_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_194_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_195(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_195_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_195_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_195_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_196(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_196_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_196_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_196_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_197(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_197_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_197_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_197_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_198(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_198_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_198_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_198_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_199(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_199_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_199_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_199_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_200(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_200_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_200_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_200_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_201(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_201_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_201_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_201_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_202(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_202_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_202_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_202_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_203(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_203_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_203_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_203_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_204(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_204_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_204_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_204_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_205(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_205_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_205_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_205_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_206(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_206_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_206_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_206_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_207(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_207_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_207_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_207_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_208(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_208_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_208_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_208_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_209(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_209_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_209_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_209_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_210(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_210_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_210_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_210_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_211(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_211_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_211_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_211_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_212(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_212_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_212_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_212_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_213(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_213_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_213_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_213_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_214(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_214_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_214_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_214_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_215(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_215_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_215_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_215_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_216(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_216_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_216_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_216_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_217(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_217_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_217_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_217_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_218(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_218_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_218_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_218_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_219(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_219_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_219_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_219_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_220(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_220_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_220_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_220_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_221(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_221_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_221_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_221_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_222(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_222_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_222_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_222_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_223(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_223_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_223_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_223_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_224(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_224_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_224_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_224_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_225(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_225_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_225_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_225_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_226(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_226_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_226_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_226_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_227(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_227_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_227_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_227_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_228(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_228_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_228_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_228_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_229(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_229_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_229_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_229_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_230(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_230_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_230_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_230_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_231(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_231_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_231_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_231_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_232(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_232_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_232_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_232_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_233(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_233_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_233_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_233_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_234(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_234_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_234_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_234_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_235(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_235_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_235_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_235_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_236(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_236_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_236_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_236_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_237(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_237_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_237_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_237_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_238(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_238_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_238_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_238_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_239(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_239_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_239_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_239_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_240(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_240_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_240_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_240_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_241(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_241_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_241_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_241_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_242(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_242_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_242_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_242_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_243(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_243_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_243_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_243_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_244(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_244_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_244_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_244_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_245(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_245_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_245_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_245_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_246(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_246_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_246_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_246_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_247(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_247_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_247_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_247_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_248(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_248_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_248_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_248_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_249(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_249_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_249_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_249_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_250(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_250_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_250_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_250_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_251(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_251_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_251_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_251_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_252(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_252_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_252_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_252_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_253(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_253_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_253_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_253_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_254(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_254_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_254_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_254_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_255(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_255_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_255_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_255_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_256(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_256_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_256_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_256_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_257(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_257_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_257_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_257_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_258(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_258_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_258_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_258_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_259(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_259_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_259_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_259_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_260(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_260_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_260_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_260_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_261(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_261_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_261_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_261_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_262(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_262_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_262_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_262_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_263(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_263_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_263_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_263_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_264(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_264_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_264_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_264_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_265(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_265_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_265_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_265_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_266(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_266_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_266_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_266_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_267(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_267_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_267_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_267_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_268(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_268_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_268_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_268_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_269(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_269_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_269_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_269_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_270(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_270_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_270_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_270_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_271(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_271_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_271_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_271_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_272(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_272_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_272_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_272_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_273(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_273_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_273_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_273_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_274(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_274_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_274_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_274_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_275(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_275_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_275_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_275_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_276(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_276_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_276_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_276_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_277(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_277_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_277_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_277_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_278(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_278_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_278_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_278_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_279(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_279_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_279_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_279_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_280(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_280_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_280_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_280_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_281(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_281_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_281_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_281_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_282(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_282_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_282_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_282_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_283(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_283_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_283_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_283_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_284(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_284_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_284_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_284_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_285(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_285_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_285_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_285_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_286(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_286_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_286_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_286_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_287(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_287_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_287_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_287_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_288(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_288_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_288_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_288_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_289(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_289_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_289_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_289_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_290(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_290_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_290_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_290_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_291(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_291_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_291_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_291_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_292(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_292_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_292_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_292_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_293(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_293_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_293_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_293_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_294(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_294_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_294_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_294_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_295(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_295_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_295_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_295_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_296(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_296_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_296_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_296_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_297(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_297_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_297_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_297_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_298(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_298_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_298_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_298_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_299(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_299_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_299_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_299_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_300(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_300_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_300_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_300_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_301(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_301_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_301_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_301_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_302(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_302_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_302_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_302_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_303(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_303_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_303_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_303_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_304(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_304_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_304_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_304_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_305(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_305_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_305_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_305_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_306(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_306_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_306_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_306_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_307(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_307_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_307_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_307_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_308(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_308_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_308_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_308_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_309(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_309_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_309_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_309_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_310(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_310_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_310_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_310_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_311(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_311_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_311_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_311_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_312(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_312_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_312_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_312_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_313(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_313_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_313_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_313_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_314(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_314_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_314_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_314_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_315(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_315_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_315_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_315_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_316(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_316_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_316_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_316_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_317(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_317_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_317_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_317_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_318(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_318_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_318_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_318_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_319(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_319_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_319_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_319_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_320(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_320_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_320_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_320_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_321(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_321_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_321_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_321_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_322(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_322_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_322_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_322_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_323(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_323_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_323_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_323_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_324(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_324_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_324_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_324_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_325(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_325_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_325_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_325_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_326(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_326_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_326_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_326_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_327(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_327_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_327_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_327_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_328(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_328_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_328_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_328_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_329(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_329_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_329_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_329_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_330(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_330_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_330_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_330_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_331(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_331_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_331_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_331_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_332(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_332_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_332_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_332_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_333(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_333_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_333_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_333_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_334(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_334_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_334_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_334_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_335(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_335_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_335_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_335_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_336(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_336_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_336_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_336_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_337(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_337_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_337_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_337_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_338(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_338_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_338_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_338_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_339(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_339_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_339_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_339_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_340(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_340_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_340_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_340_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_341(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_341_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_341_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_341_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_342(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_342_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_342_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_342_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_343(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_343_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_343_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_343_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_344(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_344_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_344_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_344_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_345(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_345_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_345_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_345_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_346(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_346_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_346_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_346_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_347(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_347_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_347_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_347_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_348(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_348_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_348_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_348_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_349(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_349_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_349_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_349_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_350(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_350_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_350_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_350_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_351(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_351_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_351_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_351_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_352(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_352_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_352_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_352_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_353(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_353_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_353_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_353_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_354(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_354_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_354_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_354_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_355(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_355_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_355_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_355_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_356(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_356_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_356_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_356_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_357(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_357_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_357_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_357_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_358(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_358_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_358_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_358_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_359(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_359_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_359_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_359_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_360(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_360_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_360_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_360_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_361(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_361_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_361_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_361_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_362(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_362_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_362_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_362_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_363(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_363_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_363_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_363_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_364(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_364_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_364_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_364_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_365(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_365_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_365_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_365_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_366(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_366_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_366_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_366_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_367(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_367_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_367_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_367_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_368(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_368_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_368_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_368_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_369(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_369_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_369_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_369_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_370(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_370_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_370_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_370_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_371(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_371_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_371_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_371_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_372(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_372_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_372_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_372_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_373(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_373_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_373_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_373_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_374(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_374_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_374_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_374_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_375(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_375_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_375_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_375_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_376(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_376_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_376_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_376_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_377(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_377_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_377_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_377_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_378(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_378_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_378_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_378_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_379(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_379_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_379_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_379_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_380(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_380_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_380_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_380_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_381(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_381_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_381_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_381_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_382(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_382_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_382_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_382_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_383(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_383_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_383_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_383_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_384(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_384_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_384_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_384_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_385(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_385_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_385_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_385_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_386(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_386_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_386_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_386_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_387(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_387_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_387_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_387_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_388(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_388_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_388_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_388_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_389(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_389_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_389_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_389_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_390(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_390_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_390_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_390_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_391(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_391_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_391_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_391_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_392(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_392_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_392_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_392_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_393(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_393_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_393_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_393_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_394(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_394_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_394_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_394_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_395(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_395_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_395_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_395_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_396(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_396_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_396_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_396_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_397(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_397_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_397_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_397_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_398(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_398_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_398_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_398_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_399(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_399_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_399_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_399_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_400(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_400_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_400_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_400_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_401(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_401_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_401_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_401_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_402(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_402_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_402_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_402_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_403(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_403_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_403_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_403_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_404(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_404_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_404_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_404_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_405(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_405_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_405_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_405_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_406(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_406_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_406_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_406_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_407(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_407_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_407_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_407_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_408(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_408_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_408_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_408_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_409(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_409_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_409_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_409_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_410(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_410_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_410_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_410_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_411(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_411_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_411_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_411_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_412(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_412_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_412_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_412_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_413(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_413_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_413_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_413_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_414(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_414_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_414_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_414_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_415(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_415_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_415_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_415_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_416(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_416_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_416_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_416_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_417(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_417_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_417_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_417_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_418(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_418_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_418_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_418_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_419(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_419_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_419_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_419_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_420(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_420_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_420_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_420_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_421(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_421_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_421_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_421_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_422(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_422_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_422_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_422_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_423(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_423_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_423_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_423_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_424(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_424_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_424_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_424_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_425(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_425_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_425_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_425_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_426(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_426_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_426_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_426_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_427(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_427_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_427_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_427_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_428(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_428_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_428_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_428_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_429(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_429_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_429_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_429_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_430(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_430_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_430_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_430_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_431(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_431_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_431_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_431_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_432(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_432_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_432_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_432_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_433(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_433_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_433_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_433_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_434(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_434_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_434_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_434_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_435(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_435_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_435_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_435_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_436(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_436_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_436_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_436_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_437(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_437_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_437_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_437_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_438(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_438_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_438_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_438_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_439(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_439_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_439_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_439_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_440(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_440_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_440_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_440_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_441(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_441_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_441_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_441_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_442(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_442_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_442_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_442_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_443(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_443_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_443_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_443_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_444(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_444_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_444_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_444_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_445(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_445_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_445_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_445_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_446(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_446_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_446_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_446_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_447(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_447_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_447_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_447_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_448(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_448_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_448_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_448_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_449(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_449_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_449_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_449_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_450(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_450_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_450_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_450_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_451(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_451_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_451_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_451_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_452(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_452_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_452_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_452_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_453(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_453_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_453_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_453_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_454(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_454_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_454_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_454_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_455(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_455_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_455_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_455_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_456(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_456_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_456_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_456_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_457(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_457_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_457_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_457_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_458(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_458_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_458_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_458_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_459(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_459_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_459_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_459_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_460(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_460_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_460_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_460_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_461(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_461_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_461_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_461_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_462(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_462_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_462_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_462_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_463(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_463_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_463_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_463_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_464(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_464_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_464_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_464_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_465(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_465_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_465_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_465_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_466(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_466_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_466_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_466_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_467(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_467_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_467_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_467_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_468(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_468_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_468_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_468_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_469(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_469_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_469_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_469_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_470(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_470_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_470_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_470_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_471(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_471_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_471_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_471_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_472(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_472_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_472_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_472_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_473(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_473_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_473_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_473_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_474(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_474_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_474_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_474_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_475(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_475_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_475_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_475_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_476(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_476_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_476_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_476_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_477(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_477_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_477_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_477_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_478(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_478_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_478_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_478_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_479(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_479_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_479_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_479_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_480(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_480_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_480_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_480_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_481(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_481_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_481_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_481_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_482(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_482_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_482_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_482_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_483(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_483_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_483_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_483_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_484(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_484_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_484_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_484_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_485(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_485_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_485_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_485_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_486(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_486_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_486_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_486_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_487(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_487_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_487_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_487_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_488(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_488_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_488_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_488_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_489(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_489_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_489_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_489_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_490(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_490_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_490_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_490_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_491(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_491_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_491_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_491_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_492(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_492_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_492_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_492_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_493(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_493_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_493_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_493_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_494(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_494_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_494_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_494_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_495(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_495_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_495_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_495_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_496(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_496_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_496_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_496_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_497(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_497_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_497_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_497_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_498(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_498_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_498_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_498_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_499(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_499_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_499_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_499_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_500(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_500_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_500_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_500_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_501(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_501_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_501_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_501_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_502(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_502_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_502_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_502_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_503(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_503_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_503_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_503_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_504(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_504_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_504_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_504_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_505(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_505_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_505_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_505_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_506(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_506_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_506_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_506_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_507(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_507_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_507_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_507_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_508(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_508_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_508_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_508_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_509(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_509_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_509_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_509_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_510(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_510_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_510_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_510_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_511(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_511_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_511_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_511_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_512(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_512_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_512_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_512_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_513(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_513_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_513_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_513_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_514(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_514_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_514_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_514_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_515(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_515_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_515_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_515_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_516(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_516_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_516_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_516_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_517(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_517_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_517_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_517_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_518(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_518_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_518_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_518_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_519(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_519_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_519_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_519_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_520(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_520_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_520_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_520_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_521(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_521_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_521_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_521_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_522(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_522_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_522_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_522_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_523(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_523_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_523_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_523_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_524(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_524_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_524_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_524_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_525(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_525_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_525_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_525_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_526(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_526_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_526_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_526_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_527(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_527_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_527_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_527_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_528(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_528_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_528_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_528_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_529(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_529_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_529_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_529_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_530(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_530_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_530_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_530_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_531(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_531_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_531_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_531_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_532(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_532_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_532_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_532_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_533(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_533_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_533_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_533_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_534(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_534_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_534_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_534_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_535(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_535_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_535_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_535_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_536(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_536_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_536_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_536_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_537(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_537_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_537_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_537_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_538(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_538_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_538_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_538_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_539(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_539_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_539_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_539_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_540(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_540_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_540_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_540_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_541(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_541_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_541_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_541_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_542(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_542_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_542_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_542_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_543(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_543_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_543_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_543_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_544(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_544_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_544_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_544_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_545(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_545_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_545_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_545_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_546(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_546_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_546_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_546_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_547(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_547_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_547_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_547_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_548(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_548_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_548_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_548_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_549(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_549_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_549_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_549_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_550(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_550_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_550_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_550_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_551(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_551_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_551_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_551_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_552(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_552_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_552_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_552_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_553(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_553_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_553_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_553_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_554(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_554_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_554_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_554_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_555(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_555_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_555_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_555_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_556(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_556_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_556_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_556_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_557(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_557_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_557_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_557_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_558(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_558_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_558_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_558_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_559(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_559_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_559_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_559_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_560(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_560_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_560_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_560_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_561(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_561_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_561_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_561_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_562(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_562_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_562_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_562_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_563(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_563_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_563_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_563_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_564(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_564_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_564_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_564_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_565(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_565_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_565_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_565_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_566(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_566_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_566_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_566_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_567(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_567_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_567_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_567_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_568(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_568_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_568_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_568_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_569(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_569_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_569_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_569_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_570(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_570_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_570_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_570_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_571(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_571_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_571_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_571_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_572(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_572_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_572_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_572_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_573(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_573_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_573_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_573_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_574(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_574_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_574_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_574_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_575(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_575_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_575_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_575_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_576(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_576_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_576_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_576_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_577(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_577_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_577_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_577_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_578(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_578_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_578_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_578_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_579(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_579_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_579_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_579_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_580(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_580_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_580_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_580_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_581(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_581_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_581_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_581_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_582(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_582_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_582_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_582_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_583(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_583_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_583_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_583_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_584(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_584_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_584_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_584_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_585(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_585_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_585_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_585_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_586(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_586_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_586_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_586_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_587(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_587_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_587_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_587_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_588(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_588_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_588_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_588_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_589(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_589_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_589_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_589_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_590(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_590_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_590_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_590_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_591(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_591_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_591_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_591_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_592(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_592_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_592_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_592_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_593(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_593_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_593_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_593_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_594(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_594_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_594_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_594_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_595(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_595_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_595_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_595_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_596(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_596_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_596_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_596_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_597(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_597_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_597_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_597_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_598(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_598_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_598_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_598_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_599(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_599_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_599_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_599_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_600(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_600_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_600_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_600_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_601(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_601_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_601_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_601_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_602(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_602_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_602_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_602_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_603(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_603_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_603_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_603_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_604(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_604_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_604_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_604_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_605(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_605_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_605_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_605_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_606(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_606_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_606_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_606_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_607(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_607_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_607_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_607_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_608(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_608_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_608_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_608_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_609(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_609_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_609_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_609_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_610(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_610_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_610_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_610_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_611(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_611_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_611_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_611_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_612(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_612_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_612_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_612_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_613(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_613_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_613_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_613_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_614(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_614_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_614_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_614_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_615(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_615_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_615_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_615_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_616(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_616_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_616_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_616_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_617(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_617_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_617_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_617_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_618(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_618_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_618_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_618_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_619(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_619_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_619_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_619_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_620(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_620_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_620_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_620_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_621(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_621_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_621_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_621_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_622(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_622_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_622_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_622_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_623(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_623_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_623_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_623_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_624(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_624_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_624_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_624_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_625(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_625_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_625_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_625_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_626(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_626_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_626_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_626_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_627(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_627_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_627_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_627_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_628(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_628_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_628_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_628_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_629(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_629_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_629_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_629_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_630(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_630_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_630_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_630_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_631(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_631_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_631_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_631_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_632(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_632_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_632_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_632_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_633(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_633_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_633_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_633_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_634(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_634_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_634_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_634_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_635(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_635_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_635_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_635_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_636(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_636_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_636_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_636_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_637(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_637_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_637_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_637_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_638(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_638_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_638_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_638_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_639(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_639_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_639_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_639_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_640(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_640_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_640_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_640_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_641(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_641_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_641_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_641_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_642(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_642_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_642_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_642_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_643(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_643_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_643_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_643_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_644(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_644_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_644_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_644_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_645(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_645_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_645_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_645_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_646(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_646_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_646_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_646_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_647(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_647_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_647_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_647_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_648(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_648_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_648_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_648_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_649(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_649_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_649_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_649_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_650(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_650_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_650_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_650_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_651(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_651_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_651_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_651_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_652(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_652_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_652_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_652_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_653(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_653_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_653_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_653_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_654(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_654_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_654_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_654_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_655(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_655_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_655_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_655_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_656(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_656_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_656_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_656_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_657(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_657_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_657_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_657_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_658(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_658_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_658_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_658_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_659(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_659_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_659_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_659_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_660(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_660_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_660_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_660_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_661(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_661_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_661_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_661_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_662(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_662_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_662_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_662_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_663(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_663_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_663_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_663_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_664(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_664_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_664_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_664_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_665(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_665_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_665_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_665_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_666(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_666_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_666_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_666_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_667(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_667_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_667_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_667_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_668(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_668_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_668_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_668_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_669(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_669_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_669_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_669_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_670(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_670_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_670_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_670_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_671(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_671_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_671_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_671_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_672(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_672_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_672_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_672_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_673(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_673_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_673_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_673_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_674(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_674_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_674_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_674_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_675(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_675_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_675_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_675_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_676(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_676_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_676_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_676_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_677(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_677_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_677_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_677_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_678(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_678_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_678_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_678_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_679(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_679_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_679_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_679_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_680(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_680_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_680_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_680_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_681(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_681_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_681_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_681_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_682(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_682_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_682_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_682_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_683(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_683_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_683_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_683_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_684(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_684_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_684_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_684_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_685(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_685_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_685_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_685_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_686(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_686_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_686_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_686_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_687(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_687_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_687_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_687_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_688(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_688_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_688_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_688_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_689(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_689_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_689_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_689_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_690(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_690_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_690_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_690_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_691(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_691_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_691_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_691_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_692(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_692_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_692_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_692_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_693(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_693_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_693_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_693_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_694(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_694_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_694_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_694_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_695(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_695_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_695_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_695_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_696(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_696_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_696_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_696_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_697(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_697_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_697_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_697_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_698(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_698_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_698_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_698_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_699(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_699_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_699_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_699_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_700(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_700_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_700_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_700_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_701(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_701_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_701_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_701_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_702(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_702_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_702_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_702_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_703(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_703_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_703_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_703_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_704(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_704_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_704_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_704_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_705(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_705_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_705_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_705_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_706(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_706_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_706_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_706_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_707(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_707_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_707_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_707_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_708(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_708_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_708_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_708_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_709(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_709_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_709_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_709_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_710(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_710_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_710_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_710_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_711(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_711_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_711_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_711_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_712(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_712_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_712_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_712_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_713(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_713_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_713_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_713_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_714(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_714_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_714_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_714_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_715(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_715_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_715_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_715_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_716(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_716_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_716_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_716_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_717(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_717_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_717_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_717_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_718(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_718_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_718_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_718_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_719(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_719_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_719_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_719_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_720(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_720_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_720_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_720_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_721(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_721_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_721_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_721_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_722(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_722_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_722_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_722_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_723(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_723_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_723_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_723_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_724(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_724_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_724_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_724_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_725(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_725_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_725_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_725_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_726(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_726_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_726_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_726_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_727(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_727_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_727_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_727_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_728(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_728_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_728_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_728_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_729(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_729_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_729_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_729_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_730(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_730_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_730_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_730_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_731(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_731_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_731_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_731_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_732(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_732_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_732_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_732_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_733(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_733_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_733_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_733_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_734(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_734_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_734_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_734_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_735(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_735_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_735_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_735_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_736(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_736_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_736_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_736_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_737(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_737_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_737_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_737_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_738(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_738_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_738_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_738_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_739(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_739_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_739_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_739_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_740(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_740_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_740_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_740_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_741(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_741_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_741_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_741_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_742(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_742_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_742_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_742_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_743(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_743_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_743_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_743_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_744(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_744_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_744_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_744_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_745(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_745_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_745_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_745_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_746(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_746_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_746_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_746_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_747(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_747_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_747_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_747_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_748(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_748_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_748_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_748_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_749(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_749_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_749_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_749_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_750(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_750_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_750_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_750_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_751(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_751_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_751_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_751_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_752(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_752_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_752_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_752_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_753(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_753_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_753_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_753_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_754(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_754_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_754_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_754_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_755(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_755_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_755_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_755_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_756(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_756_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_756_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_756_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_757(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_757_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_757_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_757_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_758(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_758_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_758_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_758_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_759(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_759_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_759_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_759_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_760(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_760_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_760_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_760_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_761(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_761_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_761_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_761_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_762(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_762_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_762_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_762_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_763(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_763_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_763_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_763_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_764(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_764_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_764_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_764_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_765(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_765_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_765_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_765_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_766(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_766_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_766_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_766_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_767(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_767_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_767_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_767_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_768(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_768_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_768_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_768_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_769(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_769_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_769_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_769_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_770(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_770_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_770_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_770_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_771(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_771_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_771_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_771_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_772(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_772_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_772_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_772_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_773(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_773_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_773_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_773_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_774(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_774_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_774_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_774_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_775(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_775_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_775_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_775_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_776(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_776_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_776_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_776_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_777(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_777_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_777_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_777_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_778(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_778_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_778_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_778_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_779(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_779_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_779_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_779_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_780(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_780_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_780_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_780_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_781(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_781_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_781_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_781_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_782(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_782_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_782_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_782_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_result_783(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_783_DATA);
    return Data;
}

u32 XLenetmatmul_Get_result_783_vld(XLenetmatmul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenetmatmul_ReadReg(InstancePtr->Axilites_BaseAddress, XLENETMATMUL_AXILITES_ADDR_RESULT_783_CTRL);
    return Data & 0x1;
}

u32 XLenetmatmul_Get_mat_0_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE);
}

u32 XLenetmatmul_Get_mat_0_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH);
}

u32 XLenetmatmul_Get_mat_0_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + 1);
}

u32 XLenetmatmul_Get_mat_0_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_0;
}

u32 XLenetmatmul_Get_mat_0_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_0;
}

u32 XLenetmatmul_Write_mat_0_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_0_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_0_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_0_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_0_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_0_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_1_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE);
}

u32 XLenetmatmul_Get_mat_1_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH);
}

u32 XLenetmatmul_Get_mat_1_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + 1);
}

u32 XLenetmatmul_Get_mat_1_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_1;
}

u32 XLenetmatmul_Get_mat_1_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_1;
}

u32 XLenetmatmul_Write_mat_1_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_1_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_1_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_1_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_1_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_1_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_2_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE);
}

u32 XLenetmatmul_Get_mat_2_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH);
}

u32 XLenetmatmul_Get_mat_2_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + 1);
}

u32 XLenetmatmul_Get_mat_2_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_2;
}

u32 XLenetmatmul_Get_mat_2_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_2;
}

u32 XLenetmatmul_Write_mat_2_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_2_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_2_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_2_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_2_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_2_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_3_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE);
}

u32 XLenetmatmul_Get_mat_3_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH);
}

u32 XLenetmatmul_Get_mat_3_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + 1);
}

u32 XLenetmatmul_Get_mat_3_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_3;
}

u32 XLenetmatmul_Get_mat_3_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_3;
}

u32 XLenetmatmul_Write_mat_3_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_3_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_3_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_3_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_3_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_3_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_4_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE);
}

u32 XLenetmatmul_Get_mat_4_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH);
}

u32 XLenetmatmul_Get_mat_4_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + 1);
}

u32 XLenetmatmul_Get_mat_4_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_4;
}

u32 XLenetmatmul_Get_mat_4_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_4;
}

u32 XLenetmatmul_Write_mat_4_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_4_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_4_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_4_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_4_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_4_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_5_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE);
}

u32 XLenetmatmul_Get_mat_5_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH);
}

u32 XLenetmatmul_Get_mat_5_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + 1);
}

u32 XLenetmatmul_Get_mat_5_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_5;
}

u32 XLenetmatmul_Get_mat_5_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_5;
}

u32 XLenetmatmul_Write_mat_5_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_5_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_5_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_5_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_5_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_5_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_6_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE);
}

u32 XLenetmatmul_Get_mat_6_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH);
}

u32 XLenetmatmul_Get_mat_6_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + 1);
}

u32 XLenetmatmul_Get_mat_6_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_6;
}

u32 XLenetmatmul_Get_mat_6_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_6;
}

u32 XLenetmatmul_Write_mat_6_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_6_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_6_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_6_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_6_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_6_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_7_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE);
}

u32 XLenetmatmul_Get_mat_7_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH);
}

u32 XLenetmatmul_Get_mat_7_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + 1);
}

u32 XLenetmatmul_Get_mat_7_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_7;
}

u32 XLenetmatmul_Get_mat_7_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_7;
}

u32 XLenetmatmul_Write_mat_7_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_7_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_7_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_7_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_7_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_7_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_8_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE);
}

u32 XLenetmatmul_Get_mat_8_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH);
}

u32 XLenetmatmul_Get_mat_8_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + 1);
}

u32 XLenetmatmul_Get_mat_8_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_8;
}

u32 XLenetmatmul_Get_mat_8_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_8;
}

u32 XLenetmatmul_Write_mat_8_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_8_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_8_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_8_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_8_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_8_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_9_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE);
}

u32 XLenetmatmul_Get_mat_9_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH);
}

u32 XLenetmatmul_Get_mat_9_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + 1);
}

u32 XLenetmatmul_Get_mat_9_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_9;
}

u32 XLenetmatmul_Get_mat_9_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_9;
}

u32 XLenetmatmul_Write_mat_9_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_9_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_9_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_9_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_9_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_9_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_10_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE);
}

u32 XLenetmatmul_Get_mat_10_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH);
}

u32 XLenetmatmul_Get_mat_10_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + 1);
}

u32 XLenetmatmul_Get_mat_10_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_10;
}

u32 XLenetmatmul_Get_mat_10_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_10;
}

u32 XLenetmatmul_Write_mat_10_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_10_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_10_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_10_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_10_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_10_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_11_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE);
}

u32 XLenetmatmul_Get_mat_11_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH);
}

u32 XLenetmatmul_Get_mat_11_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + 1);
}

u32 XLenetmatmul_Get_mat_11_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_11;
}

u32 XLenetmatmul_Get_mat_11_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_11;
}

u32 XLenetmatmul_Write_mat_11_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_11_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_11_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_11_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_11_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_11_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_12_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE);
}

u32 XLenetmatmul_Get_mat_12_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH);
}

u32 XLenetmatmul_Get_mat_12_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + 1);
}

u32 XLenetmatmul_Get_mat_12_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_12;
}

u32 XLenetmatmul_Get_mat_12_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_12;
}

u32 XLenetmatmul_Write_mat_12_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_12_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_12_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_12_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_12_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_12_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_13_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE);
}

u32 XLenetmatmul_Get_mat_13_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH);
}

u32 XLenetmatmul_Get_mat_13_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + 1);
}

u32 XLenetmatmul_Get_mat_13_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_13;
}

u32 XLenetmatmul_Get_mat_13_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_13;
}

u32 XLenetmatmul_Write_mat_13_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_13_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_13_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_13_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_13_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_13_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_14_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE);
}

u32 XLenetmatmul_Get_mat_14_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH);
}

u32 XLenetmatmul_Get_mat_14_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + 1);
}

u32 XLenetmatmul_Get_mat_14_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_14;
}

u32 XLenetmatmul_Get_mat_14_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_14;
}

u32 XLenetmatmul_Write_mat_14_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_14_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_14_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_14_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_14_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_14_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_15_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE);
}

u32 XLenetmatmul_Get_mat_15_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH);
}

u32 XLenetmatmul_Get_mat_15_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + 1);
}

u32 XLenetmatmul_Get_mat_15_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_15;
}

u32 XLenetmatmul_Get_mat_15_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_15;
}

u32 XLenetmatmul_Write_mat_15_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_15_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_15_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_15_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_15_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_15_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_16_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE);
}

u32 XLenetmatmul_Get_mat_16_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH);
}

u32 XLenetmatmul_Get_mat_16_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + 1);
}

u32 XLenetmatmul_Get_mat_16_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_16;
}

u32 XLenetmatmul_Get_mat_16_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_16;
}

u32 XLenetmatmul_Write_mat_16_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_16_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_16_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_16_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_16_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_16_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_17_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE);
}

u32 XLenetmatmul_Get_mat_17_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH);
}

u32 XLenetmatmul_Get_mat_17_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + 1);
}

u32 XLenetmatmul_Get_mat_17_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_17;
}

u32 XLenetmatmul_Get_mat_17_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_17;
}

u32 XLenetmatmul_Write_mat_17_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_17_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_17_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_17_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_17_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_17_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_18_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE);
}

u32 XLenetmatmul_Get_mat_18_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH);
}

u32 XLenetmatmul_Get_mat_18_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + 1);
}

u32 XLenetmatmul_Get_mat_18_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_18;
}

u32 XLenetmatmul_Get_mat_18_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_18;
}

u32 XLenetmatmul_Write_mat_18_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_18_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_18_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_18_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_18_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_18_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_19_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE);
}

u32 XLenetmatmul_Get_mat_19_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH);
}

u32 XLenetmatmul_Get_mat_19_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + 1);
}

u32 XLenetmatmul_Get_mat_19_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_19;
}

u32 XLenetmatmul_Get_mat_19_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_19;
}

u32 XLenetmatmul_Write_mat_19_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_19_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_19_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_19_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_19_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_19_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_20_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE);
}

u32 XLenetmatmul_Get_mat_20_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH);
}

u32 XLenetmatmul_Get_mat_20_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + 1);
}

u32 XLenetmatmul_Get_mat_20_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_20;
}

u32 XLenetmatmul_Get_mat_20_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_20;
}

u32 XLenetmatmul_Write_mat_20_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_20_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_20_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_20_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_20_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_20_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_21_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE);
}

u32 XLenetmatmul_Get_mat_21_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH);
}

u32 XLenetmatmul_Get_mat_21_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + 1);
}

u32 XLenetmatmul_Get_mat_21_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_21;
}

u32 XLenetmatmul_Get_mat_21_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_21;
}

u32 XLenetmatmul_Write_mat_21_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_21_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_21_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_21_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_21_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_21_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_22_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE);
}

u32 XLenetmatmul_Get_mat_22_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH);
}

u32 XLenetmatmul_Get_mat_22_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + 1);
}

u32 XLenetmatmul_Get_mat_22_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_22;
}

u32 XLenetmatmul_Get_mat_22_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_22;
}

u32 XLenetmatmul_Write_mat_22_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_22_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_22_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_22_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_22_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_22_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_23_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE);
}

u32 XLenetmatmul_Get_mat_23_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH);
}

u32 XLenetmatmul_Get_mat_23_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + 1);
}

u32 XLenetmatmul_Get_mat_23_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_23;
}

u32 XLenetmatmul_Get_mat_23_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_23;
}

u32 XLenetmatmul_Write_mat_23_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_23_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_23_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_23_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_23_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_23_BASE + offset + i);
    }
    return length;
}

u32 XLenetmatmul_Get_mat_24_BaseAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE);
}

u32 XLenetmatmul_Get_mat_24_HighAddress(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH);
}

u32 XLenetmatmul_Get_mat_24_TotalBytes(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + 1);
}

u32 XLenetmatmul_Get_mat_24_BitWidth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_WIDTH_MAT_24;
}

u32 XLenetmatmul_Get_mat_24_Depth(XLenetmatmul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLENETMATMUL_AXILITES_DEPTH_MAT_24;
}

u32 XLenetmatmul_Write_mat_24_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_24_Words(XLenetmatmul *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + (offset + i)*4);
    }
    return length;
}

u32 XLenetmatmul_Write_mat_24_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XLenetmatmul_Read_mat_24_Bytes(XLenetmatmul *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XLENETMATMUL_AXILITES_ADDR_MAT_24_HIGH - XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XLENETMATMUL_AXILITES_ADDR_MAT_24_BASE + offset + i);
    }
    return length;
}

