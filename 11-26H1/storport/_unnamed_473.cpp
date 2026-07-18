union _unnamed_473// Size=0x8 (Id=473)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ManuallyAdded:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long SupportsIoControllers:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SupportsDynamicControllers:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PersistControllerId:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RemovalInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
