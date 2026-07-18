struct _LIST_ENTRY// Size=0x10 (Id=3400)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE// Size=0x28 (Id=104)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY DeviceListHead;// Offset=0x8 Size=0x10
    unsigned long long Lock;// Offset=0x18 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char Busy;// Offset=0x20 Size=0x1
        struct // Size=0x8 (Id=0)
        {
            long long Reserved:8;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x8
            long long Hint:56;// Offset=0x20 Size=0x8 BitOffset=0x8 BitSize=0x38
        };
    };
};

struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CONTROLLER_OBJECT// Size=0x48 (Id=2558)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    void * ControllerExtension;// Offset=0x8 Size=0x8
    struct _KDEVICE_QUEUE DeviceWaitQueue;// Offset=0x10 Size=0x28
    unsigned long Spare1;// Offset=0x38 Size=0x4
    union _LARGE_INTEGER Spare2;// Offset=0x40 Size=0x8
};
