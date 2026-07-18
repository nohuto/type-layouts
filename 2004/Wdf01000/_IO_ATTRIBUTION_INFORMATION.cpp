struct _IO_ATTRIBUTION_INFORMATION// Size=0x20 (Id=2391)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Version;// Offset=0x0 Size=0x4
        union <unnamed-type-Flags>// Size=0x4 (Id=8585)
        {
            unsigned long MajorCode:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long IoStart:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long QueueOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long IoFailed:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long VirtualDevice:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long Spare:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
            unsigned long AllFlags;// Offset=0x0 Size=0x4
        };
    };
    union _IO_ATTRIBUTION_INFORMATION::<unnamed-type-Flags> Flags;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long long ServiceStartTime;// Offset=0x10 Size=0x8
    unsigned long long CurrentTime;// Offset=0x18 Size=0x8
};
