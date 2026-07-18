struct _unnamed_411// Size=0x8 (Id=411)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long BoundToMaster:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long BoundToScatterPool:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long OwnedByMaster:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long OwnedByScatterPool:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long TemporaryMapping:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long ZeroBuffer:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Address:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};

union _unnamed_412// Size=0x8 (Id=412)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    struct _unnamed_411 Flags;// Offset=0x0 Size=0x8
};
