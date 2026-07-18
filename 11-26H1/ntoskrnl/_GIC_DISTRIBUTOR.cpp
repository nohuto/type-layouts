struct _GIC_DISTRIBUTOR// Size=0x18 (Id=286)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Reserved1;// Offset=0x2 Size=0x2
    unsigned long Identifier;// Offset=0x4 Size=0x4
    unsigned long long ControllerPhysicalAddress;// Offset=0x8 Size=0x8
    unsigned long GsivBase;// Offset=0x10 Size=0x4
    unsigned char Version;// Offset=0x14 Size=0x1
    unsigned char Reserved[3];// Offset=0x15 Size=0x3
};
