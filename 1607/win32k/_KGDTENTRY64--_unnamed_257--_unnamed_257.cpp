union _KGDTENTRY64::_unnamed_257::_unnamed_257// Size=0x4 (Id=257)
{
    struct <unnamed-type-Bytes>// Size=0x4 (Id=3318)
    {
        unsigned char BaseMiddle;// Offset=0x0 Size=0x1
        unsigned char Flags1;// Offset=0x1 Size=0x1
        unsigned char Flags2;// Offset=0x2 Size=0x1
        unsigned char BaseHigh;// Offset=0x3 Size=0x1
    };
    struct _KGDTENTRY64::_unnamed_258::_unnamed_258::<unnamed-type-Bytes> Bytes;// Offset=0x0 Size=0x4
    struct <unnamed-type-Bits>// Size=0x4 (Id=3324)
    {
        unsigned long BaseMiddle:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Type:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Dpl:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Present:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LimitHigh:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long System:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long LongMode:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DefaultBig:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Granularity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BaseHigh:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    struct _KGDTENTRY64::_unnamed_259::_unnamed_259::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x4
};
