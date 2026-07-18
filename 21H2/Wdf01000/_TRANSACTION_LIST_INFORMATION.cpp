struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TRANSACTION_LIST_ENTRY// Size=0x10 (Id=2906)
{
    struct _GUID UOW;// Offset=0x0 Size=0x10
};

struct _TRANSACTION_LIST_INFORMATION// Size=0x14 (Id=3045)
{
    unsigned long NumberOfTransactions;// Offset=0x0 Size=0x4
    struct _TRANSACTION_LIST_ENTRY TransactionInformation[1];// Offset=0x4 Size=0x10
};
