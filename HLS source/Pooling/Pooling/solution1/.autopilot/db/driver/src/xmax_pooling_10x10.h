// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XMAX_POOLING_10X10_H
#define XMAX_POOLING_10X10_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xmax_pooling_10x10_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XMax_pooling_10x10_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XMax_pooling_10x10;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMax_pooling_10x10_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMax_pooling_10x10_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMax_pooling_10x10_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMax_pooling_10x10_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XMax_pooling_10x10_Initialize(XMax_pooling_10x10 *InstancePtr, u16 DeviceId);
XMax_pooling_10x10_Config* XMax_pooling_10x10_LookupConfig(u16 DeviceId);
int XMax_pooling_10x10_CfgInitialize(XMax_pooling_10x10 *InstancePtr, XMax_pooling_10x10_Config *ConfigPtr);
#else
int XMax_pooling_10x10_Initialize(XMax_pooling_10x10 *InstancePtr, const char* InstanceName);
int XMax_pooling_10x10_Release(XMax_pooling_10x10 *InstancePtr);
#endif


u32 XMax_pooling_10x10_Get_ifmap_0_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_0_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_0_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_0_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_0_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_0_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_0_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_0_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_0_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_1_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_1_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_1_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_1_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_1_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_1_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_1_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_1_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_1_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_2_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_2_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_2_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_2_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_2_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_2_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_2_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_2_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_2_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_3_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_3_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_3_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_3_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_3_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_3_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_3_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_3_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_3_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_4_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_4_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_4_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_4_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_4_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_4_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_4_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_4_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_4_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_5_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_5_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_5_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_5_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_5_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_5_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_5_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_5_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_5_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_6_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_6_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_6_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_6_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_6_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_6_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_6_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_6_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_6_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_7_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_7_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_7_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_7_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_7_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_7_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_7_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_7_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_7_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_8_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_8_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_8_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_8_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_8_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_8_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_8_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_8_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_8_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_ifmap_9_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_9_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_9_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_9_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_ifmap_9_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_ifmap_9_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_9_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_ifmap_9_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_ifmap_9_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Get_result_BaseAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_result_HighAddress(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_result_TotalBytes(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_result_BitWidth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Get_result_Depth(XMax_pooling_10x10 *InstancePtr);
u32 XMax_pooling_10x10_Write_result_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Read_result_Words(XMax_pooling_10x10 *InstancePtr, int offset, int *data, int length);
u32 XMax_pooling_10x10_Write_result_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);
u32 XMax_pooling_10x10_Read_result_Bytes(XMax_pooling_10x10 *InstancePtr, int offset, char *data, int length);

#ifdef __cplusplus
}
#endif

#endif
