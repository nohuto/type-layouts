struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PROCESS_SYSCALL_PROVIDER_INFORMATION// Size=0x14 (Id=2597)
{
    struct _GUID ProviderId;// Offset=0x0 Size=0x10
    unsigned char Level;// Offset=0x10 Size=0x1
};
