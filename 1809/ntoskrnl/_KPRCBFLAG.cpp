union _KPRCBFLAG// Size=0x4 (Id=928)
{
    long PrcbFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long BamQosLevel:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long PendingQosUpdate:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long CacheIsolationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PrcbFlagsReserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};
