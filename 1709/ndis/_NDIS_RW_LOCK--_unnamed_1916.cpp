union _NDIS_RW_LOCK_REFCOUNT// Size=0x10 (Id=1810)
{
    unsigned long RefCount;// Offset=0x0 Size=0x4
    unsigned char cacheLine[16];// Offset=0x0 Size=0x10
};

union _NDIS_RW_LOCK::_unnamed_1916// Size=0x400 (Id=1916)
{
    union // Size=0x400 (Id=0)
    {
        union _NDIS_RW_LOCK_REFCOUNT RefCount[64];// Offset=0x0 Size=0x400
        unsigned long RefCountEx[256];// Offset=0x0 Size=0x400
        unsigned long long RefCountLock;// Offset=0x0 Size=0x8
        unsigned long SharedRefCount;// Offset=0x8 Size=0x4
        unsigned char WriterWaiting;// Offset=0xc Size=0x1
    };
};
