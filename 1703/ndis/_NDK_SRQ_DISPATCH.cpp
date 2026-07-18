struct _NDK_SRQ_DISPATCH// Size=0x20 (Id=1712)
{
    long  ( * NdkCloseSrq)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkModifySrq)(struct _NDK_SRQ * ,unsigned long ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x10 Size=0x8
    long  ( * NdkSrqReceive)(struct _NDK_SRQ * ,void * ,struct _NDK_SGE * ,unsigned long );// Offset=0x18 Size=0x8
};
