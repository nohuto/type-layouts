struct _NDK_MR_DISPATCH// Size=0x38 (Id=1953)
{
    long  ( * NdkCloseMr)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkRegisterMr)(struct _NDK_MR * ,struct _MDL * ,unsigned long long ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x10 Size=0x8
    long  ( * NdkDeregisterMr)(struct _NDK_MR * ,void  ( * )(void * ,long ),void * );// Offset=0x18 Size=0x8
    long  ( * NdkInitializeFastRegisterMr)(struct _NDK_MR * ,unsigned long ,unsigned char ,void  ( * )(void * ,long ),void * );// Offset=0x20 Size=0x8
    unsigned int  ( * NdkGetRemoteTokenFromMr)(struct _NDK_MR * );// Offset=0x28 Size=0x8
    unsigned int  ( * NdkGetLocalTokenFromMr)(struct _NDK_MR * );// Offset=0x30 Size=0x8
};
