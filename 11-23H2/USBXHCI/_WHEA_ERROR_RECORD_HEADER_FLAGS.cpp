union _WHEA_ERROR_RECORD_HEADER_FLAGS// Size=0x4 (Id=717)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PreviousError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Simulated:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DeviceDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CriticalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PersistPfn:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SectionsTruncated:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RecoveryInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Throttle:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
