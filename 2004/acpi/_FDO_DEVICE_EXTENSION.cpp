struct _anonymous_671// Size=0x4 (Id=671)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Tmr_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long Bm_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Gbl_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long PwrBtn_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SlpBtn_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Rtc_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved3:4;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x4
        unsigned long Wak_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Gpe_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved4:14;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xe
        unsigned long Dpc_Sts:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=52)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=179)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _FDO_DEVICE_EXTENSION// Size=0x80 (Id=672)
{
    struct WORK_QUEUE_CONTEXT WorkContext;// Offset=0x0 Size=0x30
    struct _KINTERRUPT * InterruptObject;// Offset=0x30 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Pm1Status;// Offset=0x38 Size=0x4
        struct _anonymous_671 UPm1Status;// Offset=0x38 Size=0x4
    };
    struct _KDPC InterruptDpc;// Offset=0x40 Size=0x40
};
