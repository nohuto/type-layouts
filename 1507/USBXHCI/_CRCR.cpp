union _CRCR// Size=0x8 (Id=393)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long RingCycleState:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CommandStop:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CommandAbort:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long CommandRingRunning:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Reserved0:2;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x2
        unsigned long long CommandRingPointer:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};
