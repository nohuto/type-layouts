struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT// Size=0x20 (Id=2391)
{
    struct _GUID EnlistmentId;// Offset=0x0 Size=0x10
    struct _GUID UOW;// Offset=0x10 Size=0x10
};
