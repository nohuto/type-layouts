enum _NPI_MODULEID_TYPE
{
    MIT_GUID=1,
    MIT_IF_LUID=2
};

struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LUID// Size=0x8 (Id=166)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _NPI_MODULEID// Size=0x18 (Id=164)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    enum _NPI_MODULEID_TYPE Type;// Offset=0x4 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _GUID Guid;// Offset=0x8 Size=0x10
        struct _LUID IfLuid;// Offset=0x8 Size=0x8
    };
};
