// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xmax_pooling_10x10.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMax_pooling_10x10_CfgInitialize(XMax_pooling_10x10 *InstancePtr, XMax_pooling_10x10_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

u32 XMax_pooling_10x10_Get_ifmap_0_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_0_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_0_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_0_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_0;
}

u32 XMax_pooling_10x10_Get_ifmap_0_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_0;
}

u32 XMax_pooling_10x10_Write_ifmap_0_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_0_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_0_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_0_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_1_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_1_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_1_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_1_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_1;
}

u32 XMax_pooling_10x10_Get_ifmap_1_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_1;
}

u32 XMax_pooling_10x10_Write_ifmap_1_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_1_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_1_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_1_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_2_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_2_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_2_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_2_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_2;
}

u32 XMax_pooling_10x10_Get_ifmap_2_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_2;
}

u32 XMax_pooling_10x10_Write_ifmap_2_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_2_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_2_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_2_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_3_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_3_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_3_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_3_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_3;
}

u32 XMax_pooling_10x10_Get_ifmap_3_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_3;
}

u32 XMax_pooling_10x10_Write_ifmap_3_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_3_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_3_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_3_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_4_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_4_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_4_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_4_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_4;
}

u32 XMax_pooling_10x10_Get_ifmap_4_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_4;
}

u32 XMax_pooling_10x10_Write_ifmap_4_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_4_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_4_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_4_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_5_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_5_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_5_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_5_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_5;
}

u32 XMax_pooling_10x10_Get_ifmap_5_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_5;
}

u32 XMax_pooling_10x10_Write_ifmap_5_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_5_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_5_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_5_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_6_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_6_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_6_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_6_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_6;
}

u32 XMax_pooling_10x10_Get_ifmap_6_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_6;
}

u32 XMax_pooling_10x10_Write_ifmap_6_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_6_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_6_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_6_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_7_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_7_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_7_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_7_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_7;
}

u32 XMax_pooling_10x10_Get_ifmap_7_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_7;
}

u32 XMax_pooling_10x10_Write_ifmap_7_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_7_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_7_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_7_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_8_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_8_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_8_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_8_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_8;
}

u32 XMax_pooling_10x10_Get_ifmap_8_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_8;
}

u32 XMax_pooling_10x10_Write_ifmap_8_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_8_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_8_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_8_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_ifmap_9_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE);
}

u32 XMax_pooling_10x10_Get_ifmap_9_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH);
}

u32 XMax_pooling_10x10_Get_ifmap_9_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + 1);
}

u32 XMax_pooling_10x10_Get_ifmap_9_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_9;
}

u32 XMax_pooling_10x10_Get_ifmap_9_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_9;
}

u32 XMax_pooling_10x10_Write_ifmap_9_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_9_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_ifmap_9_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_ifmap_9_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE + offset + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Get_result_BaseAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE);
}

u32 XMax_pooling_10x10_Get_result_HighAddress(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH);
}

u32 XMax_pooling_10x10_Get_result_TotalBytes(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + 1);
}

u32 XMax_pooling_10x10_Get_result_BitWidth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_WIDTH_RESULT;
}

u32 XMax_pooling_10x10_Get_result_Depth(XMax_pooling_10x10 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMAX_POOLING_10X10_AXILITES_DEPTH_RESULT;
}

u32 XMax_pooling_10x10_Write_result_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_result_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMax_pooling_10x10_Write_result_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMax_pooling_10x10_Read_result_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH - XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE + offset + i);
    }
    return length;
}

