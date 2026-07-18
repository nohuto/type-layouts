struct _PCI_SEGMENT_BUS_NUMBER// Size=0x4 (Id=1521)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=15512)
        {
            struct <unnamed-type-bits>// Size=0x4 (Id=15513)
            {
                unsigned long BusNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
                unsigned long SegmentNumber:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
                unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
            };
            struct _PCI_SEGMENT_BUS_NUMBER::<unnamed-type-u>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x4
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_SEGMENT_BUS_NUMBER::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};
