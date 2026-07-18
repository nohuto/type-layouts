struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct WMIREGGUIDW// Size=0x20 (Id=2064)
{
    struct _GUID Guid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long InstanceCount;// Offset=0x14 Size=0x4
    union // Size=0x20 (Id=0)
    {
        unsigned long InstanceNameList;// Offset=0x18 Size=0x4
        unsigned long BaseNameOffset;// Offset=0x18 Size=0x4
        unsigned long long Pdo;// Offset=0x18 Size=0x8
        unsigned long long InstanceInfo;// Offset=0x18 Size=0x8
    };
};
