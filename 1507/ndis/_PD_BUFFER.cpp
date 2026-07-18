union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=4732)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PD_BUFFER// Size=0x70 (Id=386)
{
    struct _PD_BUFFER * NextPDBuffer;// Offset=0x0 Size=0x8
    struct _PD_BUFFER * NextPartialPDBuffer;// Offset=0x8 Size=0x8
    void * PDClientReserved;// Offset=0x10 Size=0x8
    void * PDClientContext;// Offset=0x18 Size=0x8
    unsigned char * DataBufferVirtualAddress;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER DataBufferDmaLogicalAddress;// Offset=0x28 Size=0x8
    unsigned long DataBufferSize;// Offset=0x30 Size=0x4
    unsigned short PDClientContextSize;// Offset=0x34 Size=0x2
    unsigned short Attributes;// Offset=0x36 Size=0x2
    unsigned short Flags;// Offset=0x38 Size=0x2
    unsigned short DataStart;// Offset=0x3a Size=0x2
    unsigned long DataLength;// Offset=0x3c Size=0x4
    struct _PD_BUFFER::_unnamed_1462::<unnamed-type-MetaDataV0> MetaDataV0;// Offset=0x40 Size=0x30
};
