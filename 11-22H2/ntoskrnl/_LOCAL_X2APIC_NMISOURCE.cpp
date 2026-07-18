struct _LOCAL_X2APIC_NMISOURCE// Size=0xc (Id=161)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    unsigned long ProcessorID;// Offset=0x4 Size=0x4
    unsigned char LINTIN;// Offset=0x8 Size=0x1
    unsigned char Reserved[3];// Offset=0x9 Size=0x3
};
