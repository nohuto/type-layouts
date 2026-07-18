struct _GUID// Size=0x10 (Id=464)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LUID// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _NPI_MODULEID::_unnamed_558// Size=0x10 (Id=558)
{
    union // Size=0x10 (Id=0)
    {
        struct _GUID Guid;// Offset=0x0 Size=0x10
        struct _LUID IfLuid;// Offset=0x0 Size=0x8
    };
};
