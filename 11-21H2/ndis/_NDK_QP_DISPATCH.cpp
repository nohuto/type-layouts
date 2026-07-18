struct _NDK_QP_DISPATCH// Size=0x58 (Id=2024)
{
    long  ( * NdkCloseQp)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    void  ( * NdkFlush)(struct _NDK_QP * );// Offset=0x10 Size=0x8
    long  ( * NdkSend)(struct _NDK_QP * ,void * ,struct _NDK_SGE * ,unsigned long ,unsigned long );// Offset=0x18 Size=0x8
    long  ( * NdkReceive)(struct _NDK_QP * ,void * ,struct _NDK_SGE * ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * NdkBind)(struct _NDK_QP * ,void * ,struct _NDK_MR * ,struct _NDK_MW * ,void * ,unsigned long long ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * NdkFastRegister)(struct _NDK_QP * ,void * ,struct _NDK_MR * ,unsigned long ,union _LARGE_INTEGER * ,unsigned long ,unsigned long long ,void * ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * NdkInvalidate)(struct _NDK_QP * ,void * ,struct _NDK_OBJECT_HEADER * ,unsigned long );// Offset=0x38 Size=0x8
    long  ( * NdkRead)(struct _NDK_QP * ,void * ,struct _NDK_SGE * ,unsigned long ,unsigned long long ,unsigned int ,unsigned long );// Offset=0x40 Size=0x8
    long  ( * NdkWrite)(struct _NDK_QP * ,void * ,struct _NDK_SGE * ,unsigned long ,unsigned long long ,unsigned int ,unsigned long );// Offset=0x48 Size=0x8
    long  ( * NdkSendAndInvalidate)(struct _NDK_QP * ,void * ,struct _NDK_SGE * ,unsigned long ,unsigned long ,unsigned int );// Offset=0x50 Size=0x8
};
