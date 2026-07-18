struct _KCLOCK_TIMER_DEADLINE_ENTRY// Size=0x10 (Id=1304)
{
    unsigned long long DueTime;// Offset=0x0 Size=0x8
    unsigned long TolerableDelay;// Offset=0x8 Size=0x4
    union // Size=0x1 (Id=0)
    {
        unsigned char TypeFlags;// Offset=0xc Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Valid:1;// Offset=0xc Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char NoWake:1;// Offset=0xc Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Unused:6;// Offset=0xc Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
};
