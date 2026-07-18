struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT// Size=0x28 (Id=2345)
{
    unsigned long PropagationCookie;// Offset=0x0 Size=0x4
    struct _GUID UOW;// Offset=0x4 Size=0x10
    struct _GUID TmIdentity;// Offset=0x14 Size=0x10
    unsigned long BufferLength;// Offset=0x24 Size=0x4
};
