struct _unnamed_574// Size=0x4 (Id=574)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Cooling:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Temp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Trip:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Mode:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Init:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Notify80:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Notify81:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Throttle:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PendIrp:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Dti:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long LogTemp:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long LogRundown:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Stop:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0xe
        unsigned long Stopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Running:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long Wait:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long Busy:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Loop:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct THERMAL_EXTENSION// Size=0x48 (Id=575)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    unsigned long long SpinLock;// Offset=0x18 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x20 Size=0x4
        struct _unnamed_574 UFlags;// Offset=0x20 Size=0x4
    };
    void * Info;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY Link;// Offset=0x30 Size=0x10
    struct _WMILIB_CONTEXT * WmilibContext;// Offset=0x40 Size=0x8
};
