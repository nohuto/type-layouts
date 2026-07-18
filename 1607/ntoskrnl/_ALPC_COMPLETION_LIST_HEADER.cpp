struct _unnamed_1163// Size=0x8 (Id=1163)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Head:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long Tail:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long ActiveThreadCount:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

union _unnamed_1164// Size=0x8 (Id=1164)
{
    struct _unnamed_1163 s1;// Offset=0x0 Size=0x8
    long long Value;// Offset=0x0 Size=0x8
};

struct _ALPC_COMPLETION_LIST_STATE// Size=0x8 (Id=961)
{
    union _unnamed_1164 u1;// Offset=0x0 Size=0x8
};

struct _RTL_SRWLOCK// Size=0x8 (Id=1043)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _ALPC_COMPLETION_LIST_HEADER// Size=0x180 (Id=962)
{
    unsigned long long StartMagic;// Offset=0x0 Size=0x8
    unsigned long TotalSize;// Offset=0x8 Size=0x4
    unsigned long ListOffset;// Offset=0xc Size=0x4
    unsigned long ListSize;// Offset=0x10 Size=0x4
    unsigned long BitmapOffset;// Offset=0x14 Size=0x4
    unsigned long BitmapSize;// Offset=0x18 Size=0x4
    unsigned long DataOffset;// Offset=0x1c Size=0x4
    unsigned long DataSize;// Offset=0x20 Size=0x4
    unsigned long AttributeFlags;// Offset=0x24 Size=0x4
    unsigned long AttributeSize;// Offset=0x28 Size=0x4
    struct _ALPC_COMPLETION_LIST_STATE State;// Offset=0x40 Size=0x8
    unsigned long LastMessageId;// Offset=0x48 Size=0x4
    unsigned long LastCallbackId;// Offset=0x4c Size=0x4
    unsigned long PostCount;// Offset=0x80 Size=0x4
    unsigned long ReturnCount;// Offset=0xc0 Size=0x4
    unsigned long LogSequenceNumber;// Offset=0x100 Size=0x4
    struct _RTL_SRWLOCK UserLock;// Offset=0x140 Size=0x8
    unsigned long long EndMagic;// Offset=0x148 Size=0x8
};
