struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=51)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_USERDATA_OFFSETS// Size=0x4 (Id=591)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short FirstAllocationOffset;// Offset=0x0 Size=0x2
        unsigned short BlockStride;// Offset=0x2 Size=0x2
        unsigned long StrideAndOffset;// Offset=0x0 Size=0x4
    };
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=343)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _HEAP_USERDATA_HEADER// Size=0x38 (Id=253)
{
    union // Size=0x8 (Id=0)
    {
        struct _SINGLE_LIST_ENTRY SFreeListEntry;// Offset=0x0 Size=0x8
        struct _HEAP_SUBSEGMENT * SubSegment;// Offset=0x0 Size=0x8
    };
    void * Reserved;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long SizeIndexAndPadding;// Offset=0x10 Size=0x4
        unsigned char SizeIndex;// Offset=0x10 Size=0x1
    };
    unsigned char GuardPagePresent;// Offset=0x11 Size=0x1
    unsigned short PaddingBytes;// Offset=0x12 Size=0x2
    unsigned long Signature;// Offset=0x14 Size=0x4
    struct _HEAP_USERDATA_OFFSETS EncodedOffsets;// Offset=0x18 Size=0x4
    struct _RTL_BITMAP_EX BusyBitmap;// Offset=0x20 Size=0x10
    unsigned long long BitmapData[1];// Offset=0x30 Size=0x8
};
