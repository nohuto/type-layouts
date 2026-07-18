struct _PROCLOCALX2APIC// Size=0x10 (Id=172)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long APICID;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long ACPIProcessorID;// Offset=0xc Size=0x4
};
