struct _GUID// Size=0x10 (Id=78)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _KCRM_TRANSACTION_BLOB// Size=0xac (Id=2598)
{
    struct _GUID UOW;// Offset=0x0 Size=0x10
    struct _GUID TmIdentity;// Offset=0x10 Size=0x10
    unsigned long IsolationLevel;// Offset=0x20 Size=0x4
    unsigned long IsolationFlags;// Offset=0x24 Size=0x4
    unsigned long Timeout;// Offset=0x28 Size=0x4
    wchar_t Description[64];// Offset=0x2c Size=0x80
};
