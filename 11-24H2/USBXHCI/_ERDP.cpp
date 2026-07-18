union _ERDP// Size=0x8 (Id=633)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DequeueErstSegmentIndex:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long EventHandlerBusy:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long DequeuePointer:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};
