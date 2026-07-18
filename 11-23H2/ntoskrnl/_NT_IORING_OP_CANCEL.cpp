enum _NT_IORING_OP_FLAGS
{
    NT_IORING_OP_FLAG_NONE=0,
    NT_IORING_OP_FLAG_REGISTERED_FILE_0=1,
    NT_IORING_OP_FLAG_REGISTERED_FILE=1,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER_0=2,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER=2
};

union _NT_IORING_HANDLEREF// Size=0x8 (Id=2136)
{
    union // Size=0x8 (Id=0)
    {
        void * Handle;// Offset=0x0 Size=0x8
        unsigned int HandleIndex;// Offset=0x0 Size=0x4
    };
};

struct _NT_IORING_OP_CANCEL// Size=0x18 (Id=2287)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    unsigned long long CancelId;// Offset=0x10 Size=0x8
};
