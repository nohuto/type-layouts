struct _EVENT_DATA_TRB// Size=0x10 (Id=883)
{
    unsigned long long Data;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved0:22;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x16
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved1:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x3
        unsigned long BlockEventInterrupt:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
