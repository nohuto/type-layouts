struct _REFERENCE_EX// Size=0x18 (Id=464)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned short ReferenceCount;// Offset=0x8 Size=0x2
    unsigned char Closing;// Offset=0xa Size=0x1
    unsigned char ZeroBased;// Offset=0xb Size=0x1
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x10 Size=0x8
};
