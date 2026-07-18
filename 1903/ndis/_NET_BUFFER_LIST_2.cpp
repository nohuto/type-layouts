union _SLIST_HEADER// Size=0x10 (Id=71)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct <unnamed-type-HeaderX64>// Size=0x10 (Id=13856)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    struct _SLIST_HEADER::<unnamed-type-HeaderX64> HeaderX64;// Offset=0x0 Size=0x10
};

struct _NET_BUFFER_LIST_DATA// Size=0x10 (Id=187)
{
    struct _NET_BUFFER_LIST * Next;// Offset=0x0 Size=0x8
    struct _NET_BUFFER * FirstNetBuffer;// Offset=0x8 Size=0x8
};

union _NET_BUFFER_LIST_HEADER// Size=0x10 (Id=186)
{
    struct _NET_BUFFER_LIST_DATA NetBufferListData;// Offset=0x0 Size=0x10
    union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
};

struct _NET_BUFFER_LIST// Size=0x180 (Id=188)
{
    union // Size=0x10 (Id=0)
    {
        struct _NET_BUFFER_LIST * Next;// Offset=0x0 Size=0x8
        struct _NET_BUFFER * FirstNetBuffer;// Offset=0x8 Size=0x8
        union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
        union _NET_BUFFER_LIST_HEADER NetBufferListHeader;// Offset=0x0 Size=0x10
    };
    struct _NET_BUFFER_LIST_CONTEXT * Context;// Offset=0x10 Size=0x8
    struct _NET_BUFFER_LIST * ParentNetBufferList;// Offset=0x18 Size=0x8
    void * NdisPoolHandle;// Offset=0x20 Size=0x8
    void * NdisReserved[2];// Offset=0x30 Size=0x10
    void * ProtocolReserved[4];// Offset=0x40 Size=0x20
    void * MiniportReserved[2];// Offset=0x60 Size=0x10
    void * Scratch;// Offset=0x70 Size=0x8
    void * SourceHandle;// Offset=0x78 Size=0x8
    unsigned long NblFlags;// Offset=0x80 Size=0x4
    long ChildRefCount;// Offset=0x84 Size=0x4
    unsigned long Flags;// Offset=0x88 Size=0x4
    union // Size=0x4 (Id=0)
    {
        int Status;// Offset=0x8c Size=0x4
        unsigned long NdisReserved2;// Offset=0x8c Size=0x4
    };
    void * NetBufferListInfo[29];// Offset=0x90 Size=0xe8
};
