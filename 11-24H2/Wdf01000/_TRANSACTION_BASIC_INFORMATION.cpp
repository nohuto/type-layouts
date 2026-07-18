struct _GUID// Size=0x10 (Id=86)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TRANSACTION_BASIC_INFORMATION// Size=0x18 (Id=1044)
{
    struct _GUID TransactionId;// Offset=0x0 Size=0x10
    unsigned long State;// Offset=0x10 Size=0x4
    unsigned long Outcome;// Offset=0x14 Size=0x4
};
