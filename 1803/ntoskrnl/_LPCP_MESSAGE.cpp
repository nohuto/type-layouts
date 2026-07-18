struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=509)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_445// Size=0x4 (Id=445)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_446// Size=0x4 (Id=446)
{
    struct _unnamed_445 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_447// Size=0x4 (Id=447)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_448// Size=0x4 (Id=448)
{
    struct _unnamed_447 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID// Size=0x10 (Id=592)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _PORT_MESSAGE// Size=0x28 (Id=449)
{
    union _unnamed_446 u1;// Offset=0x0 Size=0x4
    union _unnamed_448 u2;// Offset=0x4 Size=0x4
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

struct _LPCP_MESSAGE// Size=0x50 (Id=667)
{
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
        struct _SINGLE_LIST_ENTRY FreeEntry;// Offset=0x0 Size=0x8
        unsigned long Reserved0;// Offset=0x8 Size=0x4
        void * SenderPort;// Offset=0x10 Size=0x8
    };
    struct _ETHREAD * RepliedToThread;// Offset=0x18 Size=0x8
    void * PortContext;// Offset=0x20 Size=0x8
    struct _PORT_MESSAGE Request;// Offset=0x28 Size=0x28
};
