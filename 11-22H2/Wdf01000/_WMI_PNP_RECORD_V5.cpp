struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WMI_PNP_RECORD_V5// Size=0x24 (Id=2658)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    unsigned long UpperFilterCount;// Offset=0x10 Size=0x4
    unsigned long LowerFilterCount;// Offset=0x14 Size=0x4
    unsigned long DevStatus;// Offset=0x18 Size=0x4
    unsigned long DevProblem;// Offset=0x1c Size=0x4
    wchar_t Strings[1];// Offset=0x20 Size=0x2
};
