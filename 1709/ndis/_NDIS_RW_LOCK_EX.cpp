struct _NDIS_RW_LOCK_EX// Size=0x28 (Id=1853)
{
    void * SourceHandle;// Offset=0x0 Size=0x8
    unsigned long long WriteLock;// Offset=0x8 Size=0x8
    struct _ETHREAD * Owner;// Offset=0x10 Size=0x8
    struct PNDIS_PER_PROCESSOR_SLOT__ * RefCountSlot;// Offset=0x18 Size=0x8
    unsigned long * RefCount[1];// Offset=0x20 Size=0x8
};
