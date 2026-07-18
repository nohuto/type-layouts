struct _unnamed_873// Size=0x4 (Id=873)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_874// Size=0x4 (Id=874)
{
    struct _unnamed_873 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_875// Size=0x4 (Id=875)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_876// Size=0x4 (Id=876)
{
    struct _unnamed_875 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID// Size=0x10 (Id=1045)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _PORT_MESSAGE// Size=0x28 (Id=877)
{
    union _unnamed_874 u1;// Offset=0x0 Size=0x4
    union _unnamed_876 u2;// Offset=0x4 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _CLIENT_ID ClientId;// Offset=0x8 Size=0x10
        float DoNotUseThisField;// Offset=0x8 Size=0x8
    };
    unsigned long MessageId;// Offset=0x18 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long ClientViewSize;// Offset=0x20 Size=0x8
        unsigned long CallbackId;// Offset=0x20 Size=0x4
    };
};
