struct _List// Size=0x10 (Id=319)
{
    struct _List * plistPrev;// Offset=0x0 Size=0x8
    struct _List * plistNext;// Offset=0x8 Size=0x8
};

struct _ObjData// Size=0x28 (Id=189)
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

struct _NSObjRef// Size=0x10 (Id=415)
{
    struct _NSObj * Object;// Offset=0x0 Size=0x8
    long ReferenceCount;// Offset=0x8 Size=0x4
};

struct _NSObj// Size=0x88 (Id=242)
{
    struct _List list;// Offset=0x0 Size=0x10
    struct _NSObj * pnsParent;// Offset=0x10 Size=0x8
    struct _NSObj * pnsFirstChild;// Offset=0x18 Size=0x8
    unsigned long dwNameSeg;// Offset=0x20 Size=0x4
    void * hOwner;// Offset=0x28 Size=0x8
    struct _NSObj * pnsOwnedNext;// Offset=0x30 Size=0x8
    struct _ObjData ObjData;// Offset=0x38 Size=0x28
    void * Context;// Offset=0x60 Size=0x8
    long ReferenceCount;// Offset=0x68 Size=0x4
    struct _NSObjRef Self;// Offset=0x70 Size=0x10
    struct _NSObj * NativeObject;// Offset=0x80 Size=0x8
};
