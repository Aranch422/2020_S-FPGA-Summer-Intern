// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv_CfgInitialize(XConv *InstancePtr, XConv_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv_Set_ifmap_0(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_0_DATA, Data);
}

u32 XConv_Get_ifmap_0(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_0_DATA);
    return Data;
}

void XConv_Set_ifmap_1(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_1_DATA, Data);
}

u32 XConv_Get_ifmap_1(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_1_DATA);
    return Data;
}

void XConv_Set_ifmap_2(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_2_DATA, Data);
}

u32 XConv_Get_ifmap_2(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_2_DATA);
    return Data;
}

void XConv_Set_ifmap_3(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_3_DATA, Data);
}

u32 XConv_Get_ifmap_3(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_3_DATA);
    return Data;
}

void XConv_Set_ifmap_4(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_4_DATA, Data);
}

u32 XConv_Get_ifmap_4(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_4_DATA);
    return Data;
}

void XConv_Set_ifmap_5(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_5_DATA, Data);
}

u32 XConv_Get_ifmap_5(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_5_DATA);
    return Data;
}

void XConv_Set_ifmap_6(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_6_DATA, Data);
}

u32 XConv_Get_ifmap_6(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_6_DATA);
    return Data;
}

void XConv_Set_ifmap_7(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_7_DATA, Data);
}

u32 XConv_Get_ifmap_7(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_7_DATA);
    return Data;
}

void XConv_Set_ifmap_8(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_8_DATA, Data);
}

u32 XConv_Get_ifmap_8(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_8_DATA);
    return Data;
}

void XConv_Set_ifmap_9(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_9_DATA, Data);
}

u32 XConv_Get_ifmap_9(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_9_DATA);
    return Data;
}

void XConv_Set_ifmap_10(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_10_DATA, Data);
}

u32 XConv_Get_ifmap_10(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_10_DATA);
    return Data;
}

void XConv_Set_ifmap_11(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_11_DATA, Data);
}

u32 XConv_Get_ifmap_11(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_11_DATA);
    return Data;
}

void XConv_Set_ifmap_12(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_12_DATA, Data);
}

u32 XConv_Get_ifmap_12(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_12_DATA);
    return Data;
}

void XConv_Set_ifmap_13(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_13_DATA, Data);
}

u32 XConv_Get_ifmap_13(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_13_DATA);
    return Data;
}

void XConv_Set_ifmap_14(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_14_DATA, Data);
}

u32 XConv_Get_ifmap_14(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_14_DATA);
    return Data;
}

void XConv_Set_ifmap_15(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_15_DATA, Data);
}

u32 XConv_Get_ifmap_15(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_15_DATA);
    return Data;
}

void XConv_Set_ifmap_16(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_16_DATA, Data);
}

u32 XConv_Get_ifmap_16(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_16_DATA);
    return Data;
}

void XConv_Set_ifmap_17(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_17_DATA, Data);
}

u32 XConv_Get_ifmap_17(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_17_DATA);
    return Data;
}

void XConv_Set_ifmap_18(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_18_DATA, Data);
}

u32 XConv_Get_ifmap_18(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_18_DATA);
    return Data;
}

void XConv_Set_ifmap_19(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_19_DATA, Data);
}

u32 XConv_Get_ifmap_19(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_19_DATA);
    return Data;
}

void XConv_Set_ifmap_20(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_20_DATA, Data);
}

u32 XConv_Get_ifmap_20(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_20_DATA);
    return Data;
}

void XConv_Set_ifmap_21(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_21_DATA, Data);
}

u32 XConv_Get_ifmap_21(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_21_DATA);
    return Data;
}

void XConv_Set_ifmap_22(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_22_DATA, Data);
}

u32 XConv_Get_ifmap_22(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_22_DATA);
    return Data;
}

void XConv_Set_ifmap_23(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_23_DATA, Data);
}

u32 XConv_Get_ifmap_23(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_23_DATA);
    return Data;
}

void XConv_Set_ifmap_24(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_24_DATA, Data);
}

u32 XConv_Get_ifmap_24(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_24_DATA);
    return Data;
}

void XConv_Set_ifmap_25(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_25_DATA, Data);
}

u32 XConv_Get_ifmap_25(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_25_DATA);
    return Data;
}

void XConv_Set_ifmap_26(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_26_DATA, Data);
}

u32 XConv_Get_ifmap_26(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_26_DATA);
    return Data;
}

void XConv_Set_ifmap_27(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_27_DATA, Data);
}

u32 XConv_Get_ifmap_27(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_27_DATA);
    return Data;
}

void XConv_Set_ifmap_28(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_28_DATA, Data);
}

u32 XConv_Get_ifmap_28(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_28_DATA);
    return Data;
}

void XConv_Set_ifmap_29(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_29_DATA, Data);
}

u32 XConv_Get_ifmap_29(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_29_DATA);
    return Data;
}

void XConv_Set_ifmap_30(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_30_DATA, Data);
}

u32 XConv_Get_ifmap_30(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_30_DATA);
    return Data;
}

void XConv_Set_ifmap_31(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_31_DATA, Data);
}

u32 XConv_Get_ifmap_31(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_31_DATA);
    return Data;
}

void XConv_Set_ifmap_32(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_32_DATA, Data);
}

u32 XConv_Get_ifmap_32(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_32_DATA);
    return Data;
}

void XConv_Set_ifmap_33(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_33_DATA, Data);
}

u32 XConv_Get_ifmap_33(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_33_DATA);
    return Data;
}

void XConv_Set_ifmap_34(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_34_DATA, Data);
}

u32 XConv_Get_ifmap_34(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_34_DATA);
    return Data;
}

void XConv_Set_ifmap_35(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_35_DATA, Data);
}

u32 XConv_Get_ifmap_35(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_35_DATA);
    return Data;
}

void XConv_Set_ifmap_36(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_36_DATA, Data);
}

u32 XConv_Get_ifmap_36(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_36_DATA);
    return Data;
}

void XConv_Set_ifmap_37(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_37_DATA, Data);
}

u32 XConv_Get_ifmap_37(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_37_DATA);
    return Data;
}

void XConv_Set_ifmap_38(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_38_DATA, Data);
}

u32 XConv_Get_ifmap_38(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_38_DATA);
    return Data;
}

void XConv_Set_ifmap_39(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_39_DATA, Data);
}

u32 XConv_Get_ifmap_39(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_39_DATA);
    return Data;
}

void XConv_Set_ifmap_40(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_40_DATA, Data);
}

u32 XConv_Get_ifmap_40(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_40_DATA);
    return Data;
}

void XConv_Set_ifmap_41(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_41_DATA, Data);
}

u32 XConv_Get_ifmap_41(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_41_DATA);
    return Data;
}

void XConv_Set_ifmap_42(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_42_DATA, Data);
}

u32 XConv_Get_ifmap_42(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_42_DATA);
    return Data;
}

void XConv_Set_ifmap_43(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_43_DATA, Data);
}

u32 XConv_Get_ifmap_43(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_43_DATA);
    return Data;
}

void XConv_Set_ifmap_44(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_44_DATA, Data);
}

u32 XConv_Get_ifmap_44(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_44_DATA);
    return Data;
}

void XConv_Set_ifmap_45(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_45_DATA, Data);
}

u32 XConv_Get_ifmap_45(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_45_DATA);
    return Data;
}

void XConv_Set_ifmap_46(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_46_DATA, Data);
}

u32 XConv_Get_ifmap_46(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_46_DATA);
    return Data;
}

void XConv_Set_ifmap_47(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_47_DATA, Data);
}

u32 XConv_Get_ifmap_47(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_47_DATA);
    return Data;
}

void XConv_Set_ifmap_48(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_48_DATA, Data);
}

u32 XConv_Get_ifmap_48(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_48_DATA);
    return Data;
}

void XConv_Set_ifmap_49(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_49_DATA, Data);
}

u32 XConv_Get_ifmap_49(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_49_DATA);
    return Data;
}

void XConv_Set_ifmap_50(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_50_DATA, Data);
}

u32 XConv_Get_ifmap_50(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_50_DATA);
    return Data;
}

void XConv_Set_ifmap_51(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_51_DATA, Data);
}

u32 XConv_Get_ifmap_51(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_51_DATA);
    return Data;
}

void XConv_Set_ifmap_52(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_52_DATA, Data);
}

u32 XConv_Get_ifmap_52(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_52_DATA);
    return Data;
}

void XConv_Set_ifmap_53(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_53_DATA, Data);
}

u32 XConv_Get_ifmap_53(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_53_DATA);
    return Data;
}

void XConv_Set_ifmap_54(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_54_DATA, Data);
}

u32 XConv_Get_ifmap_54(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_54_DATA);
    return Data;
}

void XConv_Set_ifmap_55(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_55_DATA, Data);
}

u32 XConv_Get_ifmap_55(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_55_DATA);
    return Data;
}

void XConv_Set_ifmap_56(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_56_DATA, Data);
}

u32 XConv_Get_ifmap_56(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_56_DATA);
    return Data;
}

void XConv_Set_ifmap_57(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_57_DATA, Data);
}

u32 XConv_Get_ifmap_57(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_57_DATA);
    return Data;
}

void XConv_Set_ifmap_58(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_58_DATA, Data);
}

u32 XConv_Get_ifmap_58(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_58_DATA);
    return Data;
}

void XConv_Set_ifmap_59(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_59_DATA, Data);
}

u32 XConv_Get_ifmap_59(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_59_DATA);
    return Data;
}

void XConv_Set_ifmap_60(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_60_DATA, Data);
}

u32 XConv_Get_ifmap_60(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_60_DATA);
    return Data;
}

void XConv_Set_ifmap_61(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_61_DATA, Data);
}

u32 XConv_Get_ifmap_61(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_61_DATA);
    return Data;
}

void XConv_Set_ifmap_62(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_62_DATA, Data);
}

u32 XConv_Get_ifmap_62(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_62_DATA);
    return Data;
}

void XConv_Set_ifmap_63(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_63_DATA, Data);
}

u32 XConv_Get_ifmap_63(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_63_DATA);
    return Data;
}

void XConv_Set_ifmap_64(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_64_DATA, Data);
}

u32 XConv_Get_ifmap_64(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_64_DATA);
    return Data;
}

void XConv_Set_ifmap_65(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_65_DATA, Data);
}

u32 XConv_Get_ifmap_65(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_65_DATA);
    return Data;
}

void XConv_Set_ifmap_66(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_66_DATA, Data);
}

u32 XConv_Get_ifmap_66(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_66_DATA);
    return Data;
}

void XConv_Set_ifmap_67(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_67_DATA, Data);
}

u32 XConv_Get_ifmap_67(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_67_DATA);
    return Data;
}

void XConv_Set_ifmap_68(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_68_DATA, Data);
}

u32 XConv_Get_ifmap_68(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_68_DATA);
    return Data;
}

void XConv_Set_ifmap_69(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_69_DATA, Data);
}

u32 XConv_Get_ifmap_69(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_69_DATA);
    return Data;
}

void XConv_Set_ifmap_70(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_70_DATA, Data);
}

u32 XConv_Get_ifmap_70(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_70_DATA);
    return Data;
}

void XConv_Set_ifmap_71(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_71_DATA, Data);
}

u32 XConv_Get_ifmap_71(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_71_DATA);
    return Data;
}

void XConv_Set_ifmap_72(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_72_DATA, Data);
}

u32 XConv_Get_ifmap_72(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_72_DATA);
    return Data;
}

void XConv_Set_ifmap_73(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_73_DATA, Data);
}

u32 XConv_Get_ifmap_73(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_73_DATA);
    return Data;
}

void XConv_Set_ifmap_74(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_74_DATA, Data);
}

u32 XConv_Get_ifmap_74(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_74_DATA);
    return Data;
}

void XConv_Set_ifmap_75(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_75_DATA, Data);
}

u32 XConv_Get_ifmap_75(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_75_DATA);
    return Data;
}

void XConv_Set_ifmap_76(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_76_DATA, Data);
}

u32 XConv_Get_ifmap_76(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_76_DATA);
    return Data;
}

void XConv_Set_ifmap_77(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_77_DATA, Data);
}

u32 XConv_Get_ifmap_77(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_77_DATA);
    return Data;
}

void XConv_Set_ifmap_78(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_78_DATA, Data);
}

u32 XConv_Get_ifmap_78(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_78_DATA);
    return Data;
}

void XConv_Set_ifmap_79(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_79_DATA, Data);
}

u32 XConv_Get_ifmap_79(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_79_DATA);
    return Data;
}

void XConv_Set_ifmap_80(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_80_DATA, Data);
}

u32 XConv_Get_ifmap_80(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_80_DATA);
    return Data;
}

void XConv_Set_ifmap_81(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_81_DATA, Data);
}

u32 XConv_Get_ifmap_81(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_81_DATA);
    return Data;
}

void XConv_Set_ifmap_82(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_82_DATA, Data);
}

u32 XConv_Get_ifmap_82(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_82_DATA);
    return Data;
}

void XConv_Set_ifmap_83(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_83_DATA, Data);
}

u32 XConv_Get_ifmap_83(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_83_DATA);
    return Data;
}

void XConv_Set_ifmap_84(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_84_DATA, Data);
}

u32 XConv_Get_ifmap_84(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_84_DATA);
    return Data;
}

void XConv_Set_ifmap_85(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_85_DATA, Data);
}

u32 XConv_Get_ifmap_85(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_85_DATA);
    return Data;
}

void XConv_Set_ifmap_86(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_86_DATA, Data);
}

u32 XConv_Get_ifmap_86(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_86_DATA);
    return Data;
}

void XConv_Set_ifmap_87(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_87_DATA, Data);
}

u32 XConv_Get_ifmap_87(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_87_DATA);
    return Data;
}

void XConv_Set_ifmap_88(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_88_DATA, Data);
}

u32 XConv_Get_ifmap_88(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_88_DATA);
    return Data;
}

void XConv_Set_ifmap_89(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_89_DATA, Data);
}

u32 XConv_Get_ifmap_89(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_89_DATA);
    return Data;
}

void XConv_Set_ifmap_90(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_90_DATA, Data);
}

u32 XConv_Get_ifmap_90(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_90_DATA);
    return Data;
}

void XConv_Set_ifmap_91(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_91_DATA, Data);
}

u32 XConv_Get_ifmap_91(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_91_DATA);
    return Data;
}

void XConv_Set_ifmap_92(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_92_DATA, Data);
}

u32 XConv_Get_ifmap_92(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_92_DATA);
    return Data;
}

void XConv_Set_ifmap_93(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_93_DATA, Data);
}

u32 XConv_Get_ifmap_93(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_93_DATA);
    return Data;
}

void XConv_Set_ifmap_94(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_94_DATA, Data);
}

u32 XConv_Get_ifmap_94(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_94_DATA);
    return Data;
}

void XConv_Set_ifmap_95(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_95_DATA, Data);
}

u32 XConv_Get_ifmap_95(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_95_DATA);
    return Data;
}

void XConv_Set_ifmap_96(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_96_DATA, Data);
}

u32 XConv_Get_ifmap_96(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_96_DATA);
    return Data;
}

void XConv_Set_ifmap_97(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_97_DATA, Data);
}

u32 XConv_Get_ifmap_97(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_97_DATA);
    return Data;
}

void XConv_Set_ifmap_98(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_98_DATA, Data);
}

u32 XConv_Get_ifmap_98(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_98_DATA);
    return Data;
}

void XConv_Set_ifmap_99(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_99_DATA, Data);
}

u32 XConv_Get_ifmap_99(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_99_DATA);
    return Data;
}

void XConv_Set_ifmap_100(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_100_DATA, Data);
}

u32 XConv_Get_ifmap_100(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_100_DATA);
    return Data;
}

void XConv_Set_ifmap_101(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_101_DATA, Data);
}

u32 XConv_Get_ifmap_101(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_101_DATA);
    return Data;
}

void XConv_Set_ifmap_102(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_102_DATA, Data);
}

u32 XConv_Get_ifmap_102(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_102_DATA);
    return Data;
}

void XConv_Set_ifmap_103(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_103_DATA, Data);
}

u32 XConv_Get_ifmap_103(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_103_DATA);
    return Data;
}

void XConv_Set_ifmap_104(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_104_DATA, Data);
}

u32 XConv_Get_ifmap_104(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_104_DATA);
    return Data;
}

void XConv_Set_ifmap_105(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_105_DATA, Data);
}

u32 XConv_Get_ifmap_105(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_105_DATA);
    return Data;
}

void XConv_Set_ifmap_106(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_106_DATA, Data);
}

u32 XConv_Get_ifmap_106(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_106_DATA);
    return Data;
}

void XConv_Set_ifmap_107(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_107_DATA, Data);
}

u32 XConv_Get_ifmap_107(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_107_DATA);
    return Data;
}

void XConv_Set_ifmap_108(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_108_DATA, Data);
}

u32 XConv_Get_ifmap_108(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_108_DATA);
    return Data;
}

void XConv_Set_ifmap_109(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_109_DATA, Data);
}

u32 XConv_Get_ifmap_109(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_109_DATA);
    return Data;
}

void XConv_Set_ifmap_110(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_110_DATA, Data);
}

u32 XConv_Get_ifmap_110(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_110_DATA);
    return Data;
}

void XConv_Set_ifmap_111(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_111_DATA, Data);
}

u32 XConv_Get_ifmap_111(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_111_DATA);
    return Data;
}

void XConv_Set_ifmap_112(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_112_DATA, Data);
}

u32 XConv_Get_ifmap_112(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_112_DATA);
    return Data;
}

void XConv_Set_ifmap_113(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_113_DATA, Data);
}

u32 XConv_Get_ifmap_113(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_113_DATA);
    return Data;
}

void XConv_Set_ifmap_114(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_114_DATA, Data);
}

u32 XConv_Get_ifmap_114(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_114_DATA);
    return Data;
}

void XConv_Set_ifmap_115(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_115_DATA, Data);
}

u32 XConv_Get_ifmap_115(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_115_DATA);
    return Data;
}

void XConv_Set_ifmap_116(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_116_DATA, Data);
}

u32 XConv_Get_ifmap_116(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_116_DATA);
    return Data;
}

void XConv_Set_ifmap_117(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_117_DATA, Data);
}

u32 XConv_Get_ifmap_117(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_117_DATA);
    return Data;
}

void XConv_Set_ifmap_118(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_118_DATA, Data);
}

u32 XConv_Get_ifmap_118(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_118_DATA);
    return Data;
}

void XConv_Set_ifmap_119(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_119_DATA, Data);
}

u32 XConv_Get_ifmap_119(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_119_DATA);
    return Data;
}

void XConv_Set_ifmap_120(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_120_DATA, Data);
}

u32 XConv_Get_ifmap_120(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_120_DATA);
    return Data;
}

void XConv_Set_ifmap_121(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_121_DATA, Data);
}

u32 XConv_Get_ifmap_121(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_121_DATA);
    return Data;
}

void XConv_Set_ifmap_122(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_122_DATA, Data);
}

u32 XConv_Get_ifmap_122(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_122_DATA);
    return Data;
}

void XConv_Set_ifmap_123(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_123_DATA, Data);
}

u32 XConv_Get_ifmap_123(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_123_DATA);
    return Data;
}

void XConv_Set_ifmap_124(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_124_DATA, Data);
}

u32 XConv_Get_ifmap_124(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_124_DATA);
    return Data;
}

void XConv_Set_ifmap_125(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_125_DATA, Data);
}

u32 XConv_Get_ifmap_125(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_125_DATA);
    return Data;
}

void XConv_Set_ifmap_126(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_126_DATA, Data);
}

u32 XConv_Get_ifmap_126(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_126_DATA);
    return Data;
}

void XConv_Set_ifmap_127(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_127_DATA, Data);
}

u32 XConv_Get_ifmap_127(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_127_DATA);
    return Data;
}

void XConv_Set_ifmap_128(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_128_DATA, Data);
}

u32 XConv_Get_ifmap_128(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_128_DATA);
    return Data;
}

void XConv_Set_ifmap_129(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_129_DATA, Data);
}

u32 XConv_Get_ifmap_129(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_129_DATA);
    return Data;
}

void XConv_Set_ifmap_130(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_130_DATA, Data);
}

u32 XConv_Get_ifmap_130(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_130_DATA);
    return Data;
}

void XConv_Set_ifmap_131(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_131_DATA, Data);
}

u32 XConv_Get_ifmap_131(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_131_DATA);
    return Data;
}

void XConv_Set_ifmap_132(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_132_DATA, Data);
}

u32 XConv_Get_ifmap_132(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_132_DATA);
    return Data;
}

void XConv_Set_ifmap_133(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_133_DATA, Data);
}

u32 XConv_Get_ifmap_133(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_133_DATA);
    return Data;
}

void XConv_Set_ifmap_134(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_134_DATA, Data);
}

u32 XConv_Get_ifmap_134(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_134_DATA);
    return Data;
}

void XConv_Set_ifmap_135(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_135_DATA, Data);
}

u32 XConv_Get_ifmap_135(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_135_DATA);
    return Data;
}

void XConv_Set_ifmap_136(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_136_DATA, Data);
}

u32 XConv_Get_ifmap_136(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_136_DATA);
    return Data;
}

void XConv_Set_ifmap_137(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_137_DATA, Data);
}

u32 XConv_Get_ifmap_137(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_137_DATA);
    return Data;
}

void XConv_Set_ifmap_138(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_138_DATA, Data);
}

u32 XConv_Get_ifmap_138(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_138_DATA);
    return Data;
}

void XConv_Set_ifmap_139(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_139_DATA, Data);
}

u32 XConv_Get_ifmap_139(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_139_DATA);
    return Data;
}

void XConv_Set_ifmap_140(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_140_DATA, Data);
}

u32 XConv_Get_ifmap_140(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_140_DATA);
    return Data;
}

void XConv_Set_ifmap_141(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_141_DATA, Data);
}

u32 XConv_Get_ifmap_141(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_141_DATA);
    return Data;
}

void XConv_Set_ifmap_142(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_142_DATA, Data);
}

u32 XConv_Get_ifmap_142(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_142_DATA);
    return Data;
}

void XConv_Set_ifmap_143(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_143_DATA, Data);
}

u32 XConv_Get_ifmap_143(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_143_DATA);
    return Data;
}

void XConv_Set_ifmap_144(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_144_DATA, Data);
}

u32 XConv_Get_ifmap_144(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_144_DATA);
    return Data;
}

void XConv_Set_ifmap_145(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_145_DATA, Data);
}

u32 XConv_Get_ifmap_145(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_145_DATA);
    return Data;
}

void XConv_Set_ifmap_146(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_146_DATA, Data);
}

u32 XConv_Get_ifmap_146(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_146_DATA);
    return Data;
}

void XConv_Set_ifmap_147(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_147_DATA, Data);
}

u32 XConv_Get_ifmap_147(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_147_DATA);
    return Data;
}

void XConv_Set_ifmap_148(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_148_DATA, Data);
}

u32 XConv_Get_ifmap_148(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_148_DATA);
    return Data;
}

void XConv_Set_ifmap_149(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_149_DATA, Data);
}

u32 XConv_Get_ifmap_149(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_149_DATA);
    return Data;
}

void XConv_Set_ifmap_150(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_150_DATA, Data);
}

u32 XConv_Get_ifmap_150(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_150_DATA);
    return Data;
}

void XConv_Set_ifmap_151(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_151_DATA, Data);
}

u32 XConv_Get_ifmap_151(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_151_DATA);
    return Data;
}

void XConv_Set_ifmap_152(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_152_DATA, Data);
}

u32 XConv_Get_ifmap_152(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_152_DATA);
    return Data;
}

void XConv_Set_ifmap_153(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_153_DATA, Data);
}

u32 XConv_Get_ifmap_153(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_153_DATA);
    return Data;
}

void XConv_Set_ifmap_154(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_154_DATA, Data);
}

u32 XConv_Get_ifmap_154(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_154_DATA);
    return Data;
}

void XConv_Set_ifmap_155(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_155_DATA, Data);
}

u32 XConv_Get_ifmap_155(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_155_DATA);
    return Data;
}

void XConv_Set_ifmap_156(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_156_DATA, Data);
}

u32 XConv_Get_ifmap_156(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_156_DATA);
    return Data;
}

void XConv_Set_ifmap_157(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_157_DATA, Data);
}

u32 XConv_Get_ifmap_157(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_157_DATA);
    return Data;
}

void XConv_Set_ifmap_158(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_158_DATA, Data);
}

u32 XConv_Get_ifmap_158(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_158_DATA);
    return Data;
}

void XConv_Set_ifmap_159(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_159_DATA, Data);
}

u32 XConv_Get_ifmap_159(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_159_DATA);
    return Data;
}

void XConv_Set_ifmap_160(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_160_DATA, Data);
}

u32 XConv_Get_ifmap_160(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_160_DATA);
    return Data;
}

void XConv_Set_ifmap_161(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_161_DATA, Data);
}

u32 XConv_Get_ifmap_161(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_161_DATA);
    return Data;
}

void XConv_Set_ifmap_162(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_162_DATA, Data);
}

u32 XConv_Get_ifmap_162(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_162_DATA);
    return Data;
}

void XConv_Set_ifmap_163(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_163_DATA, Data);
}

u32 XConv_Get_ifmap_163(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_163_DATA);
    return Data;
}

void XConv_Set_ifmap_164(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_164_DATA, Data);
}

u32 XConv_Get_ifmap_164(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_164_DATA);
    return Data;
}

void XConv_Set_ifmap_165(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_165_DATA, Data);
}

u32 XConv_Get_ifmap_165(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_165_DATA);
    return Data;
}

void XConv_Set_ifmap_166(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_166_DATA, Data);
}

u32 XConv_Get_ifmap_166(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_166_DATA);
    return Data;
}

void XConv_Set_ifmap_167(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_167_DATA, Data);
}

u32 XConv_Get_ifmap_167(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_167_DATA);
    return Data;
}

void XConv_Set_ifmap_168(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_168_DATA, Data);
}

u32 XConv_Get_ifmap_168(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_168_DATA);
    return Data;
}

void XConv_Set_ifmap_169(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_169_DATA, Data);
}

u32 XConv_Get_ifmap_169(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_169_DATA);
    return Data;
}

void XConv_Set_ifmap_170(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_170_DATA, Data);
}

u32 XConv_Get_ifmap_170(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_170_DATA);
    return Data;
}

void XConv_Set_ifmap_171(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_171_DATA, Data);
}

u32 XConv_Get_ifmap_171(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_171_DATA);
    return Data;
}

void XConv_Set_ifmap_172(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_172_DATA, Data);
}

u32 XConv_Get_ifmap_172(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_172_DATA);
    return Data;
}

void XConv_Set_ifmap_173(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_173_DATA, Data);
}

u32 XConv_Get_ifmap_173(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_173_DATA);
    return Data;
}

void XConv_Set_ifmap_174(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_174_DATA, Data);
}

u32 XConv_Get_ifmap_174(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_174_DATA);
    return Data;
}

void XConv_Set_ifmap_175(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_175_DATA, Data);
}

u32 XConv_Get_ifmap_175(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_175_DATA);
    return Data;
}

void XConv_Set_ifmap_176(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_176_DATA, Data);
}

u32 XConv_Get_ifmap_176(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_176_DATA);
    return Data;
}

void XConv_Set_ifmap_177(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_177_DATA, Data);
}

u32 XConv_Get_ifmap_177(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_177_DATA);
    return Data;
}

void XConv_Set_ifmap_178(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_178_DATA, Data);
}

u32 XConv_Get_ifmap_178(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_178_DATA);
    return Data;
}

void XConv_Set_ifmap_179(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_179_DATA, Data);
}

u32 XConv_Get_ifmap_179(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_179_DATA);
    return Data;
}

void XConv_Set_ifmap_180(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_180_DATA, Data);
}

u32 XConv_Get_ifmap_180(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_180_DATA);
    return Data;
}

void XConv_Set_ifmap_181(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_181_DATA, Data);
}

u32 XConv_Get_ifmap_181(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_181_DATA);
    return Data;
}

void XConv_Set_ifmap_182(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_182_DATA, Data);
}

u32 XConv_Get_ifmap_182(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_182_DATA);
    return Data;
}

void XConv_Set_ifmap_183(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_183_DATA, Data);
}

u32 XConv_Get_ifmap_183(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_183_DATA);
    return Data;
}

void XConv_Set_ifmap_184(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_184_DATA, Data);
}

u32 XConv_Get_ifmap_184(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_184_DATA);
    return Data;
}

void XConv_Set_ifmap_185(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_185_DATA, Data);
}

u32 XConv_Get_ifmap_185(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_185_DATA);
    return Data;
}

void XConv_Set_ifmap_186(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_186_DATA, Data);
}

u32 XConv_Get_ifmap_186(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_186_DATA);
    return Data;
}

void XConv_Set_ifmap_187(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_187_DATA, Data);
}

u32 XConv_Get_ifmap_187(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_187_DATA);
    return Data;
}

void XConv_Set_ifmap_188(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_188_DATA, Data);
}

u32 XConv_Get_ifmap_188(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_188_DATA);
    return Data;
}

void XConv_Set_ifmap_189(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_189_DATA, Data);
}

u32 XConv_Get_ifmap_189(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_189_DATA);
    return Data;
}

void XConv_Set_ifmap_190(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_190_DATA, Data);
}

u32 XConv_Get_ifmap_190(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_190_DATA);
    return Data;
}

void XConv_Set_ifmap_191(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_191_DATA, Data);
}

u32 XConv_Get_ifmap_191(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_191_DATA);
    return Data;
}

void XConv_Set_ifmap_192(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_192_DATA, Data);
}

u32 XConv_Get_ifmap_192(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_192_DATA);
    return Data;
}

void XConv_Set_ifmap_193(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_193_DATA, Data);
}

u32 XConv_Get_ifmap_193(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_193_DATA);
    return Data;
}

void XConv_Set_ifmap_194(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_194_DATA, Data);
}

u32 XConv_Get_ifmap_194(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_194_DATA);
    return Data;
}

void XConv_Set_ifmap_195(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_195_DATA, Data);
}

u32 XConv_Get_ifmap_195(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_195_DATA);
    return Data;
}

void XConv_Set_ifmap_196(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_196_DATA, Data);
}

u32 XConv_Get_ifmap_196(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_196_DATA);
    return Data;
}

void XConv_Set_ifmap_197(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_197_DATA, Data);
}

u32 XConv_Get_ifmap_197(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_197_DATA);
    return Data;
}

void XConv_Set_ifmap_198(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_198_DATA, Data);
}

u32 XConv_Get_ifmap_198(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_198_DATA);
    return Data;
}

void XConv_Set_ifmap_199(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_199_DATA, Data);
}

u32 XConv_Get_ifmap_199(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_199_DATA);
    return Data;
}

void XConv_Set_ifmap_200(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_200_DATA, Data);
}

u32 XConv_Get_ifmap_200(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_200_DATA);
    return Data;
}

void XConv_Set_ifmap_201(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_201_DATA, Data);
}

u32 XConv_Get_ifmap_201(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_201_DATA);
    return Data;
}

void XConv_Set_ifmap_202(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_202_DATA, Data);
}

u32 XConv_Get_ifmap_202(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_202_DATA);
    return Data;
}

void XConv_Set_ifmap_203(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_203_DATA, Data);
}

u32 XConv_Get_ifmap_203(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_203_DATA);
    return Data;
}

void XConv_Set_ifmap_204(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_204_DATA, Data);
}

u32 XConv_Get_ifmap_204(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_204_DATA);
    return Data;
}

void XConv_Set_ifmap_205(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_205_DATA, Data);
}

u32 XConv_Get_ifmap_205(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_205_DATA);
    return Data;
}

void XConv_Set_ifmap_206(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_206_DATA, Data);
}

u32 XConv_Get_ifmap_206(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_206_DATA);
    return Data;
}

void XConv_Set_ifmap_207(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_207_DATA, Data);
}

u32 XConv_Get_ifmap_207(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_207_DATA);
    return Data;
}

void XConv_Set_ifmap_208(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_208_DATA, Data);
}

u32 XConv_Get_ifmap_208(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_208_DATA);
    return Data;
}

void XConv_Set_ifmap_209(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_209_DATA, Data);
}

u32 XConv_Get_ifmap_209(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_209_DATA);
    return Data;
}

void XConv_Set_ifmap_210(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_210_DATA, Data);
}

u32 XConv_Get_ifmap_210(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_210_DATA);
    return Data;
}

void XConv_Set_ifmap_211(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_211_DATA, Data);
}

u32 XConv_Get_ifmap_211(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_211_DATA);
    return Data;
}

void XConv_Set_ifmap_212(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_212_DATA, Data);
}

u32 XConv_Get_ifmap_212(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_212_DATA);
    return Data;
}

void XConv_Set_ifmap_213(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_213_DATA, Data);
}

u32 XConv_Get_ifmap_213(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_213_DATA);
    return Data;
}

void XConv_Set_ifmap_214(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_214_DATA, Data);
}

u32 XConv_Get_ifmap_214(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_214_DATA);
    return Data;
}

void XConv_Set_ifmap_215(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_215_DATA, Data);
}

u32 XConv_Get_ifmap_215(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_215_DATA);
    return Data;
}

void XConv_Set_ifmap_216(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_216_DATA, Data);
}

u32 XConv_Get_ifmap_216(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_216_DATA);
    return Data;
}

void XConv_Set_ifmap_217(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_217_DATA, Data);
}

u32 XConv_Get_ifmap_217(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_217_DATA);
    return Data;
}

void XConv_Set_ifmap_218(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_218_DATA, Data);
}

u32 XConv_Get_ifmap_218(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_218_DATA);
    return Data;
}

void XConv_Set_ifmap_219(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_219_DATA, Data);
}

u32 XConv_Get_ifmap_219(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_219_DATA);
    return Data;
}

void XConv_Set_ifmap_220(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_220_DATA, Data);
}

u32 XConv_Get_ifmap_220(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_220_DATA);
    return Data;
}

void XConv_Set_ifmap_221(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_221_DATA, Data);
}

u32 XConv_Get_ifmap_221(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_221_DATA);
    return Data;
}

void XConv_Set_ifmap_222(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_222_DATA, Data);
}

u32 XConv_Get_ifmap_222(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_222_DATA);
    return Data;
}

void XConv_Set_ifmap_223(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_223_DATA, Data);
}

u32 XConv_Get_ifmap_223(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_223_DATA);
    return Data;
}

void XConv_Set_ifmap_224(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_224_DATA, Data);
}

u32 XConv_Get_ifmap_224(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_224_DATA);
    return Data;
}

void XConv_Set_ifmap_225(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_225_DATA, Data);
}

u32 XConv_Get_ifmap_225(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_225_DATA);
    return Data;
}

void XConv_Set_ifmap_226(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_226_DATA, Data);
}

u32 XConv_Get_ifmap_226(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_226_DATA);
    return Data;
}

void XConv_Set_ifmap_227(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_227_DATA, Data);
}

u32 XConv_Get_ifmap_227(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_227_DATA);
    return Data;
}

void XConv_Set_ifmap_228(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_228_DATA, Data);
}

u32 XConv_Get_ifmap_228(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_228_DATA);
    return Data;
}

void XConv_Set_ifmap_229(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_229_DATA, Data);
}

u32 XConv_Get_ifmap_229(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_229_DATA);
    return Data;
}

void XConv_Set_ifmap_230(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_230_DATA, Data);
}

u32 XConv_Get_ifmap_230(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_230_DATA);
    return Data;
}

void XConv_Set_ifmap_231(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_231_DATA, Data);
}

u32 XConv_Get_ifmap_231(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_231_DATA);
    return Data;
}

void XConv_Set_ifmap_232(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_232_DATA, Data);
}

u32 XConv_Get_ifmap_232(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_232_DATA);
    return Data;
}

void XConv_Set_ifmap_233(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_233_DATA, Data);
}

u32 XConv_Get_ifmap_233(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_233_DATA);
    return Data;
}

void XConv_Set_ifmap_234(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_234_DATA, Data);
}

u32 XConv_Get_ifmap_234(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_234_DATA);
    return Data;
}

void XConv_Set_ifmap_235(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_235_DATA, Data);
}

u32 XConv_Get_ifmap_235(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_235_DATA);
    return Data;
}

void XConv_Set_ifmap_236(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_236_DATA, Data);
}

u32 XConv_Get_ifmap_236(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_236_DATA);
    return Data;
}

void XConv_Set_ifmap_237(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_237_DATA, Data);
}

u32 XConv_Get_ifmap_237(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_237_DATA);
    return Data;
}

void XConv_Set_ifmap_238(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_238_DATA, Data);
}

u32 XConv_Get_ifmap_238(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_238_DATA);
    return Data;
}

void XConv_Set_ifmap_239(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_239_DATA, Data);
}

u32 XConv_Get_ifmap_239(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_239_DATA);
    return Data;
}

void XConv_Set_ifmap_240(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_240_DATA, Data);
}

u32 XConv_Get_ifmap_240(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_240_DATA);
    return Data;
}

void XConv_Set_ifmap_241(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_241_DATA, Data);
}

u32 XConv_Get_ifmap_241(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_241_DATA);
    return Data;
}

void XConv_Set_ifmap_242(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_242_DATA, Data);
}

u32 XConv_Get_ifmap_242(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_242_DATA);
    return Data;
}

void XConv_Set_ifmap_243(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_243_DATA, Data);
}

u32 XConv_Get_ifmap_243(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_243_DATA);
    return Data;
}

void XConv_Set_ifmap_244(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_244_DATA, Data);
}

u32 XConv_Get_ifmap_244(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_244_DATA);
    return Data;
}

void XConv_Set_ifmap_245(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_245_DATA, Data);
}

u32 XConv_Get_ifmap_245(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_245_DATA);
    return Data;
}

void XConv_Set_ifmap_246(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_246_DATA, Data);
}

u32 XConv_Get_ifmap_246(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_246_DATA);
    return Data;
}

void XConv_Set_ifmap_247(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_247_DATA, Data);
}

u32 XConv_Get_ifmap_247(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_247_DATA);
    return Data;
}

void XConv_Set_ifmap_248(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_248_DATA, Data);
}

u32 XConv_Get_ifmap_248(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_248_DATA);
    return Data;
}

void XConv_Set_ifmap_249(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_249_DATA, Data);
}

u32 XConv_Get_ifmap_249(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_249_DATA);
    return Data;
}

void XConv_Set_ifmap_250(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_250_DATA, Data);
}

u32 XConv_Get_ifmap_250(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_250_DATA);
    return Data;
}

void XConv_Set_ifmap_251(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_251_DATA, Data);
}

u32 XConv_Get_ifmap_251(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_251_DATA);
    return Data;
}

void XConv_Set_ifmap_252(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_252_DATA, Data);
}

u32 XConv_Get_ifmap_252(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_252_DATA);
    return Data;
}

void XConv_Set_ifmap_253(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_253_DATA, Data);
}

u32 XConv_Get_ifmap_253(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_253_DATA);
    return Data;
}

void XConv_Set_ifmap_254(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_254_DATA, Data);
}

u32 XConv_Get_ifmap_254(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_254_DATA);
    return Data;
}

void XConv_Set_ifmap_255(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_255_DATA, Data);
}

u32 XConv_Get_ifmap_255(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IFMAP_255_DATA);
    return Data;
}

void XConv_Set_filter_0(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_0_DATA, Data);
}

u32 XConv_Get_filter_0(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_0_DATA);
    return Data;
}

void XConv_Set_filter_1(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_1_DATA, Data);
}

u32 XConv_Get_filter_1(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_1_DATA);
    return Data;
}

void XConv_Set_filter_2(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_2_DATA, Data);
}

u32 XConv_Get_filter_2(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_2_DATA);
    return Data;
}

void XConv_Set_filter_3(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_3_DATA, Data);
}

u32 XConv_Get_filter_3(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_3_DATA);
    return Data;
}

void XConv_Set_filter_4(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_4_DATA, Data);
}

u32 XConv_Get_filter_4(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_4_DATA);
    return Data;
}

void XConv_Set_filter_5(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_5_DATA, Data);
}

u32 XConv_Get_filter_5(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_5_DATA);
    return Data;
}

void XConv_Set_filter_6(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_6_DATA, Data);
}

u32 XConv_Get_filter_6(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_6_DATA);
    return Data;
}

void XConv_Set_filter_7(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_7_DATA, Data);
}

u32 XConv_Get_filter_7(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_7_DATA);
    return Data;
}

void XConv_Set_filter_8(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_8_DATA, Data);
}

u32 XConv_Get_filter_8(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_8_DATA);
    return Data;
}

void XConv_Set_filter_9(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_9_DATA, Data);
}

u32 XConv_Get_filter_9(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_9_DATA);
    return Data;
}

void XConv_Set_filter_10(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_10_DATA, Data);
}

u32 XConv_Get_filter_10(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_10_DATA);
    return Data;
}

void XConv_Set_filter_11(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_11_DATA, Data);
}

u32 XConv_Get_filter_11(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_11_DATA);
    return Data;
}

void XConv_Set_filter_12(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_12_DATA, Data);
}

u32 XConv_Get_filter_12(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_12_DATA);
    return Data;
}

void XConv_Set_filter_13(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_13_DATA, Data);
}

u32 XConv_Get_filter_13(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_13_DATA);
    return Data;
}

void XConv_Set_filter_14(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_14_DATA, Data);
}

u32 XConv_Get_filter_14(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_14_DATA);
    return Data;
}

void XConv_Set_filter_15(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_15_DATA, Data);
}

u32 XConv_Get_filter_15(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_15_DATA);
    return Data;
}

void XConv_Set_filter_16(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_16_DATA, Data);
}

u32 XConv_Get_filter_16(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_16_DATA);
    return Data;
}

void XConv_Set_filter_17(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_17_DATA, Data);
}

u32 XConv_Get_filter_17(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_17_DATA);
    return Data;
}

void XConv_Set_filter_18(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_18_DATA, Data);
}

u32 XConv_Get_filter_18(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_18_DATA);
    return Data;
}

void XConv_Set_filter_19(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_19_DATA, Data);
}

u32 XConv_Get_filter_19(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_19_DATA);
    return Data;
}

void XConv_Set_filter_20(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_20_DATA, Data);
}

u32 XConv_Get_filter_20(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_20_DATA);
    return Data;
}

void XConv_Set_filter_21(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_21_DATA, Data);
}

u32 XConv_Get_filter_21(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_21_DATA);
    return Data;
}

void XConv_Set_filter_22(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_22_DATA, Data);
}

u32 XConv_Get_filter_22(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_22_DATA);
    return Data;
}

void XConv_Set_filter_23(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_23_DATA, Data);
}

u32 XConv_Get_filter_23(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_23_DATA);
    return Data;
}

void XConv_Set_filter_24(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_24_DATA, Data);
}

u32 XConv_Get_filter_24(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FILTER_24_DATA);
    return Data;
}

u32 XConv_Get_ofmap_0_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_BASE);
}

u32 XConv_Get_ofmap_0_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_HIGH);
}

u32 XConv_Get_ofmap_0_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_0_HIGH - XCONV_AXILITES_ADDR_OFMAP_0_BASE + 1);
}

u32 XConv_Get_ofmap_0_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_0;
}

u32 XConv_Get_ofmap_0_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_0;
}

u32 XConv_Write_ofmap_0_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_0_HIGH - XCONV_AXILITES_ADDR_OFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_0_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_0_HIGH - XCONV_AXILITES_ADDR_OFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_0_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_0_HIGH - XCONV_AXILITES_ADDR_OFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_0_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_0_HIGH - XCONV_AXILITES_ADDR_OFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_0_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_1_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_BASE);
}

u32 XConv_Get_ofmap_1_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_HIGH);
}

u32 XConv_Get_ofmap_1_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_1_HIGH - XCONV_AXILITES_ADDR_OFMAP_1_BASE + 1);
}

u32 XConv_Get_ofmap_1_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_1;
}

u32 XConv_Get_ofmap_1_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_1;
}

u32 XConv_Write_ofmap_1_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_1_HIGH - XCONV_AXILITES_ADDR_OFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_1_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_1_HIGH - XCONV_AXILITES_ADDR_OFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_1_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_1_HIGH - XCONV_AXILITES_ADDR_OFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_1_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_1_HIGH - XCONV_AXILITES_ADDR_OFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_1_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_2_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_BASE);
}

u32 XConv_Get_ofmap_2_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_HIGH);
}

u32 XConv_Get_ofmap_2_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_2_HIGH - XCONV_AXILITES_ADDR_OFMAP_2_BASE + 1);
}

u32 XConv_Get_ofmap_2_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_2;
}

u32 XConv_Get_ofmap_2_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_2;
}

u32 XConv_Write_ofmap_2_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_2_HIGH - XCONV_AXILITES_ADDR_OFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_2_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_2_HIGH - XCONV_AXILITES_ADDR_OFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_2_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_2_HIGH - XCONV_AXILITES_ADDR_OFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_2_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_2_HIGH - XCONV_AXILITES_ADDR_OFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_2_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_3_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_BASE);
}

u32 XConv_Get_ofmap_3_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_HIGH);
}

u32 XConv_Get_ofmap_3_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_3_HIGH - XCONV_AXILITES_ADDR_OFMAP_3_BASE + 1);
}

u32 XConv_Get_ofmap_3_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_3;
}

u32 XConv_Get_ofmap_3_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_3;
}

u32 XConv_Write_ofmap_3_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_3_HIGH - XCONV_AXILITES_ADDR_OFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_3_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_3_HIGH - XCONV_AXILITES_ADDR_OFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_3_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_3_HIGH - XCONV_AXILITES_ADDR_OFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_3_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_3_HIGH - XCONV_AXILITES_ADDR_OFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_3_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_4_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_BASE);
}

u32 XConv_Get_ofmap_4_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_HIGH);
}

u32 XConv_Get_ofmap_4_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_4_HIGH - XCONV_AXILITES_ADDR_OFMAP_4_BASE + 1);
}

u32 XConv_Get_ofmap_4_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_4;
}

u32 XConv_Get_ofmap_4_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_4;
}

u32 XConv_Write_ofmap_4_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_4_HIGH - XCONV_AXILITES_ADDR_OFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_4_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_4_HIGH - XCONV_AXILITES_ADDR_OFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_4_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_4_HIGH - XCONV_AXILITES_ADDR_OFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_4_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_4_HIGH - XCONV_AXILITES_ADDR_OFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_4_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_5_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_BASE);
}

u32 XConv_Get_ofmap_5_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_HIGH);
}

u32 XConv_Get_ofmap_5_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_5_HIGH - XCONV_AXILITES_ADDR_OFMAP_5_BASE + 1);
}

u32 XConv_Get_ofmap_5_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_5;
}

u32 XConv_Get_ofmap_5_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_5;
}

u32 XConv_Write_ofmap_5_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_5_HIGH - XCONV_AXILITES_ADDR_OFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_5_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_5_HIGH - XCONV_AXILITES_ADDR_OFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_5_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_5_HIGH - XCONV_AXILITES_ADDR_OFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_5_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_5_HIGH - XCONV_AXILITES_ADDR_OFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_5_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_6_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_BASE);
}

u32 XConv_Get_ofmap_6_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_HIGH);
}

u32 XConv_Get_ofmap_6_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_6_HIGH - XCONV_AXILITES_ADDR_OFMAP_6_BASE + 1);
}

u32 XConv_Get_ofmap_6_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_6;
}

u32 XConv_Get_ofmap_6_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_6;
}

u32 XConv_Write_ofmap_6_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_6_HIGH - XCONV_AXILITES_ADDR_OFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_6_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_6_HIGH - XCONV_AXILITES_ADDR_OFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_6_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_6_HIGH - XCONV_AXILITES_ADDR_OFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_6_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_6_HIGH - XCONV_AXILITES_ADDR_OFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_6_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_7_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_BASE);
}

u32 XConv_Get_ofmap_7_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_HIGH);
}

u32 XConv_Get_ofmap_7_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_7_HIGH - XCONV_AXILITES_ADDR_OFMAP_7_BASE + 1);
}

u32 XConv_Get_ofmap_7_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_7;
}

u32 XConv_Get_ofmap_7_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_7;
}

u32 XConv_Write_ofmap_7_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_7_HIGH - XCONV_AXILITES_ADDR_OFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_7_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_7_HIGH - XCONV_AXILITES_ADDR_OFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_7_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_7_HIGH - XCONV_AXILITES_ADDR_OFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_7_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_7_HIGH - XCONV_AXILITES_ADDR_OFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_7_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_8_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_BASE);
}

u32 XConv_Get_ofmap_8_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_HIGH);
}

u32 XConv_Get_ofmap_8_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_8_HIGH - XCONV_AXILITES_ADDR_OFMAP_8_BASE + 1);
}

u32 XConv_Get_ofmap_8_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_8;
}

u32 XConv_Get_ofmap_8_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_8;
}

u32 XConv_Write_ofmap_8_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_8_HIGH - XCONV_AXILITES_ADDR_OFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_8_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_8_HIGH - XCONV_AXILITES_ADDR_OFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_8_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_8_HIGH - XCONV_AXILITES_ADDR_OFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_8_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_8_HIGH - XCONV_AXILITES_ADDR_OFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_8_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_9_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_BASE);
}

u32 XConv_Get_ofmap_9_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_HIGH);
}

u32 XConv_Get_ofmap_9_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_9_HIGH - XCONV_AXILITES_ADDR_OFMAP_9_BASE + 1);
}

u32 XConv_Get_ofmap_9_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_9;
}

u32 XConv_Get_ofmap_9_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_9;
}

u32 XConv_Write_ofmap_9_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_9_HIGH - XCONV_AXILITES_ADDR_OFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_9_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_9_HIGH - XCONV_AXILITES_ADDR_OFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_9_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_9_HIGH - XCONV_AXILITES_ADDR_OFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_9_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_9_HIGH - XCONV_AXILITES_ADDR_OFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_9_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_10_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_BASE);
}

u32 XConv_Get_ofmap_10_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_HIGH);
}

u32 XConv_Get_ofmap_10_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_10_HIGH - XCONV_AXILITES_ADDR_OFMAP_10_BASE + 1);
}

u32 XConv_Get_ofmap_10_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_10;
}

u32 XConv_Get_ofmap_10_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_10;
}

u32 XConv_Write_ofmap_10_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_10_HIGH - XCONV_AXILITES_ADDR_OFMAP_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_10_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_10_HIGH - XCONV_AXILITES_ADDR_OFMAP_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_10_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_10_HIGH - XCONV_AXILITES_ADDR_OFMAP_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_10_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_10_HIGH - XCONV_AXILITES_ADDR_OFMAP_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_10_BASE + offset + i);
    }
    return length;
}

u32 XConv_Get_ofmap_11_BaseAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_BASE);
}

u32 XConv_Get_ofmap_11_HighAddress(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_HIGH);
}

u32 XConv_Get_ofmap_11_TotalBytes(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XCONV_AXILITES_ADDR_OFMAP_11_HIGH - XCONV_AXILITES_ADDR_OFMAP_11_BASE + 1);
}

u32 XConv_Get_ofmap_11_BitWidth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_WIDTH_OFMAP_11;
}

u32 XConv_Get_ofmap_11_Depth(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCONV_AXILITES_DEPTH_OFMAP_11;
}

u32 XConv_Write_ofmap_11_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_11_HIGH - XCONV_AXILITES_ADDR_OFMAP_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_11_Words(XConv *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XCONV_AXILITES_ADDR_OFMAP_11_HIGH - XCONV_AXILITES_ADDR_OFMAP_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_BASE + (offset + i)*4);
    }
    return length;
}

u32 XConv_Write_ofmap_11_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_11_HIGH - XCONV_AXILITES_ADDR_OFMAP_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XConv_Read_ofmap_11_Bytes(XConv *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XCONV_AXILITES_ADDR_OFMAP_11_HIGH - XCONV_AXILITES_ADDR_OFMAP_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XCONV_AXILITES_ADDR_OFMAP_11_BASE + offset + i);
    }
    return length;
}

