union _KPRCBFLAG// Size=0x4 (Id=469)
{
    long PrcbFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long BamQosLevel:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PendingQosUpdate:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long CacheIsolationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long TracepointActive:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long LongDpcRunning:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long PrcbFlagsReserved:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};
