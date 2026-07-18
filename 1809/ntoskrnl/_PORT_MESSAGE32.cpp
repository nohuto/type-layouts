struct _unnamed_484// Size=0x4 (Id=484)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_485// Size=0x4 (Id=485)
{
    struct _unnamed_484 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_486// Size=0x4 (Id=486)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_487// Size=0x4 (Id=487)
{
    struct _unnamed_486 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID32// Size=0x8 (Id=764)
{
    unsigned long UniqueProcess;// Offset=0x0 Size=0x4
    unsigned long UniqueThread;// Offset=0x4 Size=0x4
};

struct _PORT_MESSAGE32// Size=0x18 (Id=514)
{
    union _unnamed_485 u1;// Offset=0x0 Size=0x4
    union _unnamed_487 u2;// Offset=0x4 Size=0x4
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
