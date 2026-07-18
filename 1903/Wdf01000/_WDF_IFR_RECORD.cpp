struct _GUID// Size=0x10 (Id=120)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WDF_IFR_RECORD// Size=0x1c (Id=900)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Length;// Offset=0x2 Size=0x2
    long Sequence;// Offset=0x4 Size=0x4
    unsigned short PrevOffset;// Offset=0x8 Size=0x2
    unsigned short MessageNumber;// Offset=0xa Size=0x2
    struct _GUID MessageGuid;// Offset=0xc Size=0x10
};
