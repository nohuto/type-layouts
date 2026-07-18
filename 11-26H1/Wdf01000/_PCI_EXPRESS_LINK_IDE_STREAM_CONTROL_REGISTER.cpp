union _PCI_EXPRESS_LINK_IDE_STREAM_CONTROL_REGISTER// Size=0x4 (Id=4045)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long XtEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TxAggregationModeNpr:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long TxAggregationModePr:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long TxAggregationModeCpl:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long PcrcEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Rsvd0:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PartialHeaderEncryptionMode:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long SelectedAlgorithm:5;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x5
        unsigned long Tc:3;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x3
        unsigned long Rsvd1:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
        unsigned long StreamId:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
