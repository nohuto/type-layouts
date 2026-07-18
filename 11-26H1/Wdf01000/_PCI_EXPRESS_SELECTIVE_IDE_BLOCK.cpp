union _PCI_EXPRESS_SELECTIVE_IDE_CAPABILITY_REGISTER// Size=0x4 (Id=4141)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NumAddrAssocBlocks:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Rsvd:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_SELECTIVE_IDE_CONTROL_REGISTER// Size=0x4 (Id=2871)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long XtEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TxAggregationModeNpr:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long TxAggregationModePr:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long TxAggregationModeCpl:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long PcrcEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ConfigRequestEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PartialHeaderEncryptionMode:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long SelectedAlgorithm:5;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x5
        unsigned long Tc:3;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x3
        unsigned long DefaultStream:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long TeeLimitedStream:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long StreamId:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_SELECTIVE_IDE_STATUS_REGISTER// Size=0x4 (Id=3485)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Rsvd:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned long ReceivedIdeFailMsg:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_IDE_RID_ASSOCIATION_REGISTER_1// Size=0x4 (Id=2504)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RidLimit:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long Rsvd1:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_IDE_RID_ASSOCIATION_REGISTER_2// Size=0x4 (Id=3994)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Valid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:7;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x7
        unsigned long RidBase:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long SegmentBase:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_SELECTIVE_IDE_BLOCK// Size=0x14 (Id=2912)
{
    union _PCI_EXPRESS_SELECTIVE_IDE_CAPABILITY_REGISTER Capability;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_SELECTIVE_IDE_CONTROL_REGISTER Control;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_SELECTIVE_IDE_STATUS_REGISTER Status;// Offset=0x8 Size=0x4
    union _PCI_EXPRESS_IDE_RID_ASSOCIATION_REGISTER_1 RidAssociation1;// Offset=0xc Size=0x4
    union _PCI_EXPRESS_IDE_RID_ASSOCIATION_REGISTER_2 RidAssociation2;// Offset=0x10 Size=0x4
};
