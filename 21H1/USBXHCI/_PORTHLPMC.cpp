union _PORTHLPMC// Size=0x4 (Id=584)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HostInitiatedResumeDurationMode:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long L1Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x8
        unsigned long BestEffortServiceLatencyDeep:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long Reserved0:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
};
