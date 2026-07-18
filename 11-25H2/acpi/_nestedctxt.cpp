struct _framehdr// Size=0x20 (Id=377)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    struct _framehdr * PreviousFrame;// Offset=0x8 Size=0x8
    unsigned long dwfFrame;// Offset=0x10 Size=0x4
    long  ( * pfnParse)(struct _ctxt * ,void * ,long );// Offset=0x18 Size=0x8
};

struct _ObjData// Size=0x28 (Id=385)
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

struct _nestedctxt// Size=0x80 (Id=646)
{
    struct _framehdr FrameHdr;// Offset=0x0 Size=0x20
    struct _NSObj * pnsObj;// Offset=0x20 Size=0x8
    struct _NSObj * pnsScope;// Offset=0x28 Size=0x8
    struct _ObjData Result;// Offset=0x30 Size=0x28
    void  ( * pfnAsyncCallBack)(struct _NSObjRef * ,long ,struct _ObjData * ,void * );// Offset=0x58 Size=0x8
    struct _ObjData * pdataCallBack;// Offset=0x60 Size=0x8
    void * pvContext;// Offset=0x68 Size=0x8
    unsigned long dwfPrevCtxt;// Offset=0x70 Size=0x4
    struct _nestedctxt * pnctxtPrev;// Offset=0x78 Size=0x8
};
