struct _unnamed_871// Size=0x4 (Id=871)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_872// Size=0x4 (Id=872)
{
    struct _unnamed_871 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_873// Size=0x4 (Id=873)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_874// Size=0x4 (Id=874)
{
    struct _unnamed_873 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID32// Size=0x8 (Id=1188)
{
    unsigned long UniqueProcess;// Offset=0x0 Size=0x4
    unsigned long UniqueThread;// Offset=0x4 Size=0x4
};

struct _PORT_MESSAGE32// Size=0x18 (Id=901)
{
    union _unnamed_872 u1;// Offset=0x0 Size=0x4
    union _unnamed_874 u2;// Offset=0x4 Size=0x4
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
