struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _NDIS_FILTERLIST_ITEM// Size=0x12 (Id=1331)
{
    struct _GUID FilterUniqueName;// Offset=0x0 Size=0x10
    unsigned short FilterIndex;// Offset=0x10 Size=0x2
};
