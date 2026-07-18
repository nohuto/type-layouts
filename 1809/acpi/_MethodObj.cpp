struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ObjData// Size=0x28 (Id=308)
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

struct _AML_MUTEX_DRIVER_CONTEXT// Size=0x68 (Id=568)
{
    void * Data[13];// Offset=0x0 Size=0x68
};

struct _MutexObj// Size=0xc0 (Id=334)
{
    unsigned long dwSyncLevel;// Offset=0x0 Size=0x4
    unsigned long dwcOwned;// Offset=0x4 Size=0x4
    void * hOwner;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY listWaiters;// Offset=0x10 Size=0x10
    long dwDLMState;// Offset=0x20 Size=0x4
    struct _ObjData ResourceObjData;// Offset=0x28 Size=0x28
    struct _AML_MUTEX_DRIVER_CONTEXT DriverContext;// Offset=0x50 Size=0x68
    unsigned long long SpinLock;// Offset=0xb8 Size=0x8
};

struct _MethodObj// Size=0xc8 (Id=293)
{
    struct _MutexObj Mutex;// Offset=0x0 Size=0xc0
    unsigned char ReturnsOutput;// Offset=0xc0 Size=0x1
    unsigned char bMethodFlags;// Offset=0xc1 Size=0x1
    unsigned char abCodeBuff[1];// Offset=0xc2 Size=0x1
};
