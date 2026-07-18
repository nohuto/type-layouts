struct _NDK_PD_DISPATCH// Size=0x40 (Id=1286)
{
    long  ( * NdkClosePd)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkCreateMr)(struct _NDK_PD * ,unsigned char ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_MR ** );// Offset=0x10 Size=0x8
    long  ( * NdkCreateMw)(struct _NDK_PD * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_MW ** );// Offset=0x18 Size=0x8
    long  ( * NdkCreateSrq)(struct _NDK_PD * ,unsigned long ,unsigned long ,unsigned long ,void  ( * )(void * ,long ),void * ,struct _GROUP_AFFINITY * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_SRQ ** );// Offset=0x20 Size=0x8
    long  ( * NdkCreateQp)(struct _NDK_PD * ,struct _NDK_CQ * ,struct _NDK_CQ * ,void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_QP ** );// Offset=0x28 Size=0x8
    long  ( * NdkCreateQpWithSrq)(struct _NDK_PD * ,struct _NDK_CQ * ,struct _NDK_CQ * ,struct _NDK_SRQ * ,void * ,unsigned long ,unsigned long ,unsigned long ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_QP ** );// Offset=0x30 Size=0x8
    void  ( * NdkGetPrivilegedMemoryRegionToken)(struct _NDK_PD * ,unsigned int * );// Offset=0x38 Size=0x8
};
