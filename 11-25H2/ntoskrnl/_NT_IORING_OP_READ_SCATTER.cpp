enum _NT_IORING_OP_FLAGS
{
    NT_IORING_OP_FLAG_NONE=0,
    NT_IORING_OP_FLAG_REGISTERED_FILE_0=1,
    NT_IORING_OP_FLAG_REGISTERED_FILE=1,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER_0=2,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER=2
};

union _NT_IORING_HANDLEREF// Size=0x8 (Id=2324)
{
    union // Size=0x8 (Id=0)
    {
        void * Handle;// Offset=0x0 Size=0x8
        unsigned int HandleIndex;// Offset=0x0 Size=0x4
    };
};

struct _NT_IORING_OP_READ_SCATTER// Size=0x30 (Id=2469)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    unsigned int Padding;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    unsigned int SegmentCount;// Offset=0x10 Size=0x4
    union _FILE_SEGMENT_ELEMENT * SegmentArray;// Offset=0x18 Size=0x8
    unsigned long long Offset;// Offset=0x20 Size=0x8
    unsigned int Length;// Offset=0x28 Size=0x4
    unsigned int Key;// Offset=0x2c Size=0x4
};
