enum _VF_DISPATCH_TABLE_TYPE
{
    DispatchTableTypeWdm=0,
    DispatchTableTypeWdf=1,
    DispatchTableTypeNdis=2,
    DispatchTableTypeXdv=3,
    DispatchTableTypeHvci=4,
    DispatchTableTypeIov=5,
    DispatchTableTypeBios=6,
    DispatchTableTypeDomain=7,
    DispatchTableTypePlugin=8,
    MaximumDispatchTableType=9
};

struct _VF_DISPATCH_TABLE_HEADER// Size=0x8 (Id=2211)
{
    enum _VF_DISPATCH_TABLE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _DIF_HVCI_DISPATCH_TABLE// Size=0x10 (Id=3434)
{
    struct _VF_DISPATCH_TABLE_HEADER Header;// Offset=0x0 Size=0x8
    void  ( * HvciCheckPoolType)(enum _POOL_TYPE ,void * ,unsigned long );// Offset=0x8 Size=0x8
};
