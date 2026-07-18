union _KGDTENTRY64// Size=0x10 (Id=5568)
{
    unsigned short LimitLow;// Offset=0x0 Size=0x2
    unsigned short BaseLow;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _KGDTENTRY64::_unnamed_5570::_unnamed_5570::<unnamed-type-Bytes> Bytes;// Offset=0x4 Size=0x4
        struct _KGDTENTRY64::_unnamed_5569::_unnamed_5569::<unnamed-type-Bits> Bits;// Offset=0x4 Size=0x4
    };
    unsigned long BaseUpper;// Offset=0x8 Size=0x4
    unsigned long MustBeZero;// Offset=0xc Size=0x4
    long long DataLow;// Offset=0x0 Size=0x8
    long long DataHigh;// Offset=0x8 Size=0x8
};
