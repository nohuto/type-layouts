struct _GIC_MSIFRAME_ENTRY// Size=0x18 (Id=158)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Reserved1;// Offset=0x2 Size=0x2
    unsigned long Identifier;// Offset=0x4 Size=0x4
    unsigned long long PhysicalAddress;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned short SpiCount;// Offset=0x14 Size=0x2
    unsigned short SpiBase;// Offset=0x16 Size=0x2
};
