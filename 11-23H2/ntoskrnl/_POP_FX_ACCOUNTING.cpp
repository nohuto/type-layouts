enum _POP_FX_ACCOUNTING_MODE
{
    PopFxAccountingModeDisabled=0,
    PopFxAccountingModeBasic=1,
    PopFxAccountingModeEnhanced=2,
    PopFxAccountingModeMax=3
};

struct _POP_FX_ACTIVE_TIME_ACCOUNTING// Size=0x60 (Id=2208)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    unsigned long long Unattributed;// Offset=0x8 Size=0x8
    unsigned long long Buckets[5];// Offset=0x10 Size=0x28
    unsigned long long PerBucket[5];// Offset=0x38 Size=0x28
};

struct _POP_FX_ACCOUNTING// Size=0xe0 (Id=1918)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char Active;// Offset=0x8 Size=0x1
    unsigned long DripsRequiredState;// Offset=0xc Size=0x4
    enum _POP_FX_ACCOUNTING_MODE AccountingMode;// Offset=0x10 Size=0x4
    unsigned long long ActiveStamp;// Offset=0x18 Size=0x8
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;// Offset=0x20 Size=0x60
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;// Offset=0x80 Size=0x60
};
