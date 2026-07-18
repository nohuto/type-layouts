struct _GUID// Size=0x10 (Id=475)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _RSDS// Size=0x1c (Id=2055)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    struct _GUID Guid;// Offset=0x4 Size=0x10
    unsigned long Age;// Offset=0x14 Size=0x4
    char PdbName[1];// Offset=0x18 Size=0x1
};
