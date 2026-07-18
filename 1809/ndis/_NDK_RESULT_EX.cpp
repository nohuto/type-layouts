enum _NDK_OPERATION_TYPE
{
    NdkOperationTypeReceive=1,
    NdkOperationTypeReceiveAndInvalidate=32769,
    NdkOperationTypeSend=2,
    NdkOperationTypeFastRegister=4,
    NdkOperationTypeBind=8,
    NdkOperationTypeInvalidate=16,
    NdkOperationTypeRead=32,
    NdkOperationTypeWrite=64
};

struct _NDK_RESULT_EX// Size=0x28 (Id=2019)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned long BytesTransferred;// Offset=0x4 Size=0x4
    void * QPContext;// Offset=0x8 Size=0x8
    void * RequestContext;// Offset=0x10 Size=0x8
    enum _NDK_OPERATION_TYPE Type;// Offset=0x18 Size=0x4
    unsigned long long TypeSpecificCompletionOutput;// Offset=0x20 Size=0x8
};
