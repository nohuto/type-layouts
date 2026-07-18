union _unnamed_719// Size=0x4 (Id=719)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MajorCode:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long IoStart:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long QueueOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoFailed:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long VirtualDevice:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Spare:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
