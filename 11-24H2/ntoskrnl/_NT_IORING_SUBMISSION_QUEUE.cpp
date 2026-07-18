enum _NT_IORING_SQ_FLAGS
{
    NT_IORING_SQ_FLAG_NONE=0
};

enum _NT_IORING_SQE_FLAGS
{
    NT_IORING_SQE_FLAG_NONE=0,
    NT_IORING_SQE_FLAG_DRAIN_PRECEDING_OPS=1
};

enum _NT_IORING_OP_FLAGS
{
    NT_IORING_OP_FLAG_NONE=0,
    NT_IORING_OP_FLAG_REGISTERED_FILE_0=1,
    NT_IORING_OP_FLAG_REGISTERED_FILE=1,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER_0=2,
    NT_IORING_OP_FLAG_REGISTERED_BUFFER=2
};

union _NT_IORING_HANDLEREF// Size=0x8 (Id=2327)
{
    union // Size=0x8 (Id=0)
    {
        void * Handle;// Offset=0x0 Size=0x8
        unsigned int HandleIndex;// Offset=0x0 Size=0x4
    };
};

union _NT_IORING_BUFFERREF// Size=0x8 (Id=2385)
{
    void * Address;// Offset=0x0 Size=0x8
    struct IORING_REGISTERED_BUFFER FixedBuffer;// Offset=0x0 Size=0x8
};

struct _NT_IORING_OP_READ// Size=0x28 (Id=2297)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    unsigned int Padding;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    union _NT_IORING_BUFFERREF Buffer;// Offset=0x10 Size=0x8
    unsigned long long Offset;// Offset=0x18 Size=0x8
    unsigned int Length;// Offset=0x20 Size=0x4
    unsigned int Key;// Offset=0x24 Size=0x4
};

enum _NT_IORING_REG_FILES_REQ_FLAGS
{
    NT_IORING_REG_FILES_REQ_FLAG_NONE=0
};

enum _NT_IORING_REG_FILES_ADV_FLAGS
{
    NT_IORING_REG_FILES_ADV_FLAG_NONE=0
};

struct _NT_IORING_REG_FILES_FLAGS// Size=0x8 (Id=2417)
{
    enum _NT_IORING_REG_FILES_REQ_FLAGS Required;// Offset=0x0 Size=0x4
    enum _NT_IORING_REG_FILES_ADV_FLAGS Advisory;// Offset=0x4 Size=0x4
};

struct _NT_IORING_OP_REGISTER_FILES// Size=0x18 (Id=2301)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    struct _NT_IORING_REG_FILES_FLAGS Flags;// Offset=0x4 Size=0x8
    unsigned int Count;// Offset=0xc Size=0x4
    void ** Handles;// Offset=0x10 Size=0x8
};

enum _NT_IORING_REG_BUFFERS_REQ_FLAGS
{
    NT_IORING_REG_BUFFERS_REQ_FLAG_NONE=0
};

enum _NT_IORING_REG_BUFFERS_ADV_FLAGS
{
    NT_IORING_REG_BUFFERS_ADV_FLAG_NONE=0
};

struct _NT_IORING_REG_BUFFERS_FLAGS// Size=0x8 (Id=2485)
{
    enum _NT_IORING_REG_BUFFERS_REQ_FLAGS Required;// Offset=0x0 Size=0x4
    enum _NT_IORING_REG_BUFFERS_ADV_FLAGS Advisory;// Offset=0x4 Size=0x4
};

struct _NT_IORING_OP_REGISTER_BUFFERS// Size=0x18 (Id=2406)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    struct _NT_IORING_REG_BUFFERS_FLAGS Flags;// Offset=0x4 Size=0x8
    unsigned int Count;// Offset=0xc Size=0x4
    struct IORING_BUFFER_INFO * Buffers;// Offset=0x10 Size=0x8
};

struct _NT_IORING_OP_CANCEL// Size=0x18 (Id=2492)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    unsigned long long CancelId;// Offset=0x10 Size=0x8
};

enum _NT_WRITE_FLAGS
{
    NT_WRITE_FLAG_NONE=0,
    NT_WRITE_FLAG_WRITE_THROUGH=1
};

struct _NT_IORING_OP_WRITE// Size=0x28 (Id=2256)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    enum _NT_WRITE_FLAGS Flags;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    union _NT_IORING_BUFFERREF Buffer;// Offset=0x10 Size=0x8
    unsigned long long Offset;// Offset=0x18 Size=0x8
    unsigned int Length;// Offset=0x20 Size=0x4
    unsigned int Key;// Offset=0x24 Size=0x4
};

struct _NT_IORING_OP_FLUSH// Size=0x10 (Id=2446)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
};

struct _NT_IORING_OP_READ_SCATTER// Size=0x30 (Id=2472)
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

struct _NT_IORING_OP_WRITE_GATHER// Size=0x30 (Id=2464)
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;// Offset=0x0 Size=0x4
    enum _NT_WRITE_FLAGS Flags;// Offset=0x4 Size=0x4
    union _NT_IORING_HANDLEREF File;// Offset=0x8 Size=0x8
    unsigned int SegmentCount;// Offset=0x10 Size=0x4
    union _FILE_SEGMENT_ELEMENT * SegmentArray;// Offset=0x18 Size=0x8
    unsigned long long Offset;// Offset=0x20 Size=0x8
    unsigned int Length;// Offset=0x28 Size=0x4
    unsigned int Key;// Offset=0x2c Size=0x4
};

struct _NT_IORING_OP_RESERVED// Size=0x30 (Id=2290)
{
    unsigned long long Argument1;// Offset=0x0 Size=0x8
    unsigned long long Argument2;// Offset=0x8 Size=0x8
    unsigned long long Argument3;// Offset=0x10 Size=0x8
    unsigned long long Argument4;// Offset=0x18 Size=0x8
    unsigned long long Argument5;// Offset=0x20 Size=0x8
    unsigned long long Argument6;// Offset=0x28 Size=0x8
};

struct _NT_IORING_SQE// Size=0x40 (Id=2225)
{
    enum IORING_OP_CODE OpCode;// Offset=0x0 Size=0x4
    enum _NT_IORING_SQE_FLAGS Flags;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long UserData;// Offset=0x8 Size=0x8
        unsigned long long PaddingUserDataForWow;// Offset=0x8 Size=0x8
    };
    union // Size=0x40 (Id=0)
    {
        struct _NT_IORING_OP_READ Read;// Offset=0x10 Size=0x28
        struct _NT_IORING_OP_REGISTER_FILES RegisterFiles;// Offset=0x10 Size=0x18
        struct _NT_IORING_OP_REGISTER_BUFFERS RegisterBuffers;// Offset=0x10 Size=0x18
        struct _NT_IORING_OP_CANCEL Cancel;// Offset=0x10 Size=0x18
        struct _NT_IORING_OP_WRITE Write;// Offset=0x10 Size=0x28
        struct _NT_IORING_OP_FLUSH Flush;// Offset=0x10 Size=0x10
        struct _NT_IORING_OP_READ_SCATTER ReadScatter;// Offset=0x10 Size=0x30
        struct _NT_IORING_OP_WRITE_GATHER WriteGather;// Offset=0x10 Size=0x30
        struct _NT_IORING_OP_RESERVED ReservedMaxSizePadding;// Offset=0x10 Size=0x30
    };
};

struct _NT_IORING_SUBMISSION_QUEUE// Size=0x50 (Id=1848)
{
    unsigned int Head;// Offset=0x0 Size=0x4
    unsigned int Tail;// Offset=0x4 Size=0x4
    enum _NT_IORING_SQ_FLAGS Flags;// Offset=0x8 Size=0x4
    struct _NT_IORING_SQE Entries[1];// Offset=0x10 Size=0x40
};
