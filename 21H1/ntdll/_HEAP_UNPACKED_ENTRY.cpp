struct _HEAP_UNPACKED_ENTRY// Size=0x8 (Id=631)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short Size;// Offset=0x0 Size=0x2
        unsigned char Flags;// Offset=0x2 Size=0x1
        unsigned char SmallTagIndex;// Offset=0x3 Size=0x1
        unsigned long SubSegmentCode;// Offset=0x0 Size=0x4
    };
    unsigned short PreviousSize;// Offset=0x4 Size=0x2
    union // Size=0x1 (Id=0)
    {
        unsigned char SegmentOffset;// Offset=0x6 Size=0x1
        unsigned char LFHFlags;// Offset=0x6 Size=0x1
    };
    unsigned char UnusedBytes;// Offset=0x7 Size=0x1
};
