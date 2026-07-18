struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_981// Size=0x4 (Id=981)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long WriteAccess:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long AutoRelease:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ForceUnlink:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SystemSpace:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_982// Size=0x4 (Id=982)
{
    struct _unnamed_981 s1;// Offset=0x0 Size=0x4
};

struct _KALPC_VIEW// Size=0x60 (Id=983)
{
    struct _LIST_ENTRY ViewListEntry;// Offset=0x0 Size=0x10
    struct _KALPC_REGION * Region;// Offset=0x10 Size=0x8
    struct _ALPC_PORT * OwnerPort;// Offset=0x18 Size=0x8
    struct _EPROCESS * OwnerProcess;// Offset=0x20 Size=0x8
    void * Address;// Offset=0x28 Size=0x8
    unsigned long long Size;// Offset=0x30 Size=0x8
    void * SecureViewHandle;// Offset=0x38 Size=0x8
    void * WriteAccessHandle;// Offset=0x40 Size=0x8
    union _unnamed_982 u1;// Offset=0x48 Size=0x4
    unsigned long NumberOfOwnerMessages;// Offset=0x4c Size=0x4
    struct _LIST_ENTRY ProcessViewListEntry;// Offset=0x50 Size=0x10
};
