struct _NDK_CQ_DISPATCH// Size=0x38 (Id=2034)
{
    long  ( * NdkCloseCq)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkResizeCq)(struct _NDK_CQ * ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x10 Size=0x8
    void  ( * NdkArmCq)(struct _NDK_CQ * ,unsigned long );// Offset=0x18 Size=0x8
    unsigned long  ( * NdkGetCqResults)(struct _NDK_CQ * ,struct _NDK_RESULT * ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * NdkControlCqInterruptModeration)(struct _NDK_CQ * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    unsigned long  ( * NdkGetCqResultsEx)(struct _NDK_CQ * ,struct _NDK_RESULT_EX * ,unsigned long );// Offset=0x30 Size=0x8
};
