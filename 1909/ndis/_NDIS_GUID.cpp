struct _GUID// Size=0x10 (Id=4)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _NDIS_GUID// Size=0x1c (Id=782)
{
    struct _GUID Guid;// Offset=0x0 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long Oid;// Offset=0x10 Size=0x4
        int Status;// Offset=0x10 Size=0x4
    };
    unsigned long Size;// Offset=0x14 Size=0x4
    unsigned long Flags;// Offset=0x18 Size=0x4
};
