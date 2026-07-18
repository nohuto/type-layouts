struct _NDK_MW_DISPATCH// Size=0x18 (Id=1952)
{
    long  ( * NdkCloseMw)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    unsigned int  ( * NdkGetRemoteTokenFromMw)(struct _NDK_MW * );// Offset=0x10 Size=0x8
};
