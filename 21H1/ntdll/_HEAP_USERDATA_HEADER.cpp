struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _HEAP_USERDATA_OFFSETS// Size=0x4 (Id=571)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short FirstAllocationOffset;// Offset=0x0 Size=0x2
        unsigned short BlockStride;// Offset=0x2 Size=0x2
        unsigned long StrideAndOffset;// Offset=0x0 Size=0x4
    };
};

struct _RTL_BITMAP// Size=0x8 (Id=358)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x4 Size=0x4
};

struct _HEAP_USERDATA_HEADER// Size=0x20 (Id=240)
{
    union // Size=0x4 (Id=0)
    {
        struct _SINGLE_LIST_ENTRY SFreeListEntry;// Offset=0x0 Size=0x4
        struct _HEAP_SUBSEGMENT * SubSegment;// Offset=0x0 Size=0x4
    };
    void * Reserved;// Offset=0x4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long SizeIndexAndPadding;// Offset=0x8 Size=0x4
        unsigned char SizeIndex;// Offset=0x8 Size=0x1
    };
    unsigned char GuardPagePresent;// Offset=0x9 Size=0x1
    unsigned short PaddingBytes;// Offset=0xa Size=0x2
    unsigned long Signature;// Offset=0xc Size=0x4
    struct _HEAP_USERDATA_OFFSETS EncodedOffsets;// Offset=0x10 Size=0x4
    struct _RTL_BITMAP BusyBitmap;// Offset=0x14 Size=0x8
    unsigned long BitmapData[1];// Offset=0x1c Size=0x4
};
