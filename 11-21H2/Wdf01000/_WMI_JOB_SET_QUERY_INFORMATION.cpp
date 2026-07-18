struct _GUID// Size=0x10 (Id=274)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WMI_JOB_SET_QUERY_INFORMATION// Size=0x18 (Id=3180)
{
    struct _GUID ContainerId;// Offset=0x0 Size=0x10
    unsigned long JobId;// Offset=0x10 Size=0x4
    unsigned long JobObjectInformationClass;// Offset=0x14 Size=0x4
};
