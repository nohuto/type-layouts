enum _NT_IORING_OP_FLAGS
{
    NT_IORING_OP_FLAG_NONE=0,
    NT_IORING_OP_FLAG_REGISTERED_FILE_0=1,
    NT_IORING_OP_FLAG_REGISTERED_FILE=1,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER_0=2,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER=2
};

enum _NT_WRITE_FLAGS
{
    NT_WRITE_FLAG_NONE=0,
    NT_WRITE_FLAG_WRITE_THROUGH=1
};

union _NT_IORING_HANDLEREF// Size=0x8 (Id=2324)
{
    union // Size=0x8 (Id=0)
    {
        void * Handle;// Offset=0x0 Size=0x8
        unsigned int HandleIndex;// Offset=0x0 Size=0x4
    };
};

union _NT_IORING_BUFFERREF// Size=0x8 (Id=2382)
{
    void * Address;// Offset=0x0 Size=0x8
    struct IORING_REGISTERED_BUFFER FixedBuffer;// Offset=0x0 Size=0x8
};

struct _NT_IORING_OP_WRITE// Size=0x28 (Id=2253)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    enum _NT_WRITE_FLAGS Flags;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    union _NT_IORING_BUFFERREF Buffer;// Offset=0x10 Size=0x8
    unsigned long long Offset;// Offset=0x18 Size=0x8
    unsigned int Length;// Offset=0x20 Size=0x4
    unsigned int Key;// Offset=0x24 Size=0x4
};
