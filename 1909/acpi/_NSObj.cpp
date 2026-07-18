struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ObjData// Size=0x28 (Id=315)
{
    unsigned short dwfData;// Offset=0x0 Size=0x2
    unsigned short dwDataType;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        long dwRefCount;// Offset=0x8 Size=0x4
        struct _ObjData * pdataBase;// Offset=0x8 Size=0x8
    };
    union // Size=0x18 (Id=0)
    {
        unsigned long dwDataValue;// Offset=0x10 Size=0x4
        unsigned long long qwDataValue;// Offset=0x10 Size=0x8
        struct _NSObj * pnsAlias;// Offset=0x10 Size=0x8
        struct _ObjData * pdataAlias;// Offset=0x10 Size=0x8
        void * powner;// Offset=0x10 Size=0x8
    };
    unsigned long dwDataLen;// Offset=0x18 Size=0x4
    unsigned char * pbDataBuff;// Offset=0x20 Size=0x8
};

struct _NSObjRef// Size=0x10 (Id=286)
{
    struct _NSObj * Object;// Offset=0x0 Size=0x8
    long ReferenceCount;// Offset=0x8 Size=0x4
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NSObj// Size=0xa0 (Id=282)
{
    struct _LIST_ENTRY list;// Offset=0x0 Size=0x10
    struct _NSObj * pnsParent;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY childListHead;// Offset=0x18 Size=0x10
    unsigned long dwNameSeg;// Offset=0x28 Size=0x4
    void * hOwner;// Offset=0x30 Size=0x8
    struct _NSObj * pnsOwnedNext;// Offset=0x38 Size=0x8
    struct _ObjData ObjData;// Offset=0x40 Size=0x28
    void * Context;// Offset=0x68 Size=0x8
    long ReferenceCount;// Offset=0x70 Size=0x4
    struct _NSObjRef Self;// Offset=0x78 Size=0x10
    struct _NSObj * NativeObject;// Offset=0x88 Size=0x8
    union _ULARGE_INTEGER StatsEvalCount;// Offset=0x90 Size=0x8
    union _ULARGE_INTEGER StatsEvalPeriod;// Offset=0x98 Size=0x8
};
