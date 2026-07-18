struct _unnamed_994// Size=0x4 (Id=994)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_995// Size=0x4 (Id=995)
{
    struct _unnamed_994 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_996// Size=0x4 (Id=996)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_997// Size=0x4 (Id=997)
{
    struct _unnamed_996 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID32// Size=0x8 (Id=1331)
{
    unsigned long UniqueProcess;// Offset=0x0 Size=0x4
    unsigned long UniqueThread;// Offset=0x4 Size=0x4
};

struct _PORT_MESSAGE32// Size=0x18 (Id=1028)
{
    union _unnamed_995 u1;// Offset=0x0 Size=0x4
    union _unnamed_997 u2;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _CLIENT_ID32 ClientId;// Offset=0x8 Size=0x8
        float DoNotUseThisField;// Offset=0x8 Size=0x8
    };
    unsigned long MessageId;// Offset=0x10 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ClientViewSize;// Offset=0x14 Size=0x4
        unsigned long CallbackId;// Offset=0x14 Size=0x4
    };
};
