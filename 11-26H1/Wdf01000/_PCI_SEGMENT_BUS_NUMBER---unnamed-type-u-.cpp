union _PCI_SEGMENT_BUS_NUMBER::<unnamed-type-u>// Size=0x4 (Id=1403)
{
    struct <unnamed-type-bits>// Size=0x4 (Id=16492)
    {
        unsigned long BusNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SegmentNumber:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    struct _PCI_SEGMENT_BUS_NUMBER::<unnamed-type-u>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
