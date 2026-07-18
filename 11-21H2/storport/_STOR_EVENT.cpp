struct _unnamed_729// Size=0x4 (Id=729)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Flags;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Inserted;// Offset=0x3 Size=0x1
        unsigned char DebugActive;// Offset=0x3 Size=0x1
    };
};

struct _STOR_LIST_ENTRY// Size=0x10 (Id=179)
{
    struct _STOR_LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _STOR_LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_DISPATCHER_HEADER// Size=0x18 (Id=730)
{
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_729 Data;// Offset=0x0 Size=0x4
        long Lock;// Offset=0x0 Size=0x4
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _STOR_LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _STOR_EVENT// Size=0x18 (Id=189)
{
    struct _STOR_DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};
