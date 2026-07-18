struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _MU_TELEMETRY_SECTION// Size=0x38 (Id=648)
{
    struct _GUID ComponentID;// Offset=0x0 Size=0x10
    struct _GUID SubComponentID;// Offset=0x10 Size=0x10
    unsigned int Reserved;// Offset=0x20 Size=0x4
    unsigned int ErrorStatusValue;// Offset=0x24 Size=0x4
    unsigned long long AdditionalInfo1;// Offset=0x28 Size=0x8
    unsigned long long AdditionalInfo2;// Offset=0x30 Size=0x8
};
