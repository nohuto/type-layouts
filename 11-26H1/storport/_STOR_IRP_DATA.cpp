struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_188// Size=0x4 (Id=188)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CmdType:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long PagingIo:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Fua:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long VolsnapKey:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long StreamKey:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};

struct _STOR_IRP_DATA// Size=0x40 (Id=189)
{
    struct _STOR_ADDRESS * Address;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER ByteOffset;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
    unsigned long Key;// Offset=0x14 Size=0x4
    struct _STOR_MINIPORT_IRP_EXTENSION * MiniportExt;// Offset=0x18 Size=0x8
    unsigned long long * Pfns;// Offset=0x20 Size=0x8
    unsigned long PfnCount;// Offset=0x28 Size=0x4
    unsigned long StartingOffset;// Offset=0x2c Size=0x4
    unsigned long InitProcessor;// Offset=0x30 Size=0x4
    unsigned long MessageId;// Offset=0x34 Size=0x4
    struct _unnamed_188 Flags;// Offset=0x38 Size=0x4
};
