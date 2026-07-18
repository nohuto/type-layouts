struct _framehdr// Size=0x20 (Id=305)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    struct _framehdr * PreviousFrame;// Offset=0x8 Size=0x8
    unsigned long dwfFrame;// Offset=0x10 Size=0x4
    long  ( * pfnParse)(struct _ctxt * ,void * ,long );// Offset=0x18 Size=0x8
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

struct _AML_NATIVE_METHOD_DRIVER_CONTEXT// Size=0x50 (Id=446)
{
    void * Data[10];// Offset=0x0 Size=0x50
};

struct _call// Size=0x190 (Id=273)
{
    struct _framehdr FrameHdr;// Offset=0x0 Size=0x20
    struct _call * pcallPrev;// Offset=0x20 Size=0x8
    struct _objowner * pownerPrev;// Offset=0x28 Size=0x8
    struct _NSObj * pnsMethod;// Offset=0x30 Size=0x8
    unsigned long iArg;// Offset=0x38 Size=0x4
    unsigned long icArgs;// Offset=0x3c Size=0x4
    struct _ObjData * pdataArgs;// Offset=0x40 Size=0x8
    union // Size=0x140 (Id=0)
    {
        struct _ObjData Locals[8];// Offset=0x48 Size=0x140
        struct _AML_NATIVE_METHOD_DRIVER_CONTEXT DriverContext;// Offset=0x48 Size=0x50
        struct _ObjData * pdataResult;// Offset=0x188 Size=0x8
    };
};
