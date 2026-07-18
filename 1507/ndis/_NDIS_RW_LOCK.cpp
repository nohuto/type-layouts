union _NDIS_RW_LOCK_REFCOUNT// Size=0x10 (Id=758)
{
    unsigned long RefCount;// Offset=0x0 Size=0x4
    unsigned char cacheLine[16];// Offset=0x0 Size=0x10
};

struct _NDIS_RW_LOCK// Size=0x410 (Id=508)
{
    union // Size=0x10 (Id=0)
    {
        unsigned long long SpinLock;// Offset=0x0 Size=0x8
        void * Context;// Offset=0x8 Size=0x8
        unsigned char Reserved[16];// Offset=0x0 Size=0x10
    };
    union // Size=0x410 (Id=0)
    {
        union _NDIS_RW_LOCK_REFCOUNT RefCount[64];// Offset=0x10 Size=0x400
        unsigned long RefCountEx[256];// Offset=0x10 Size=0x400
        unsigned long long RefCountLock;// Offset=0x10 Size=0x8
        unsigned long SharedRefCount;// Offset=0x18 Size=0x4
        unsigned char WriterWaiting;// Offset=0x1c Size=0x1
    };
};
