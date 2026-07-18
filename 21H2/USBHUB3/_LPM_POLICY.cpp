union _LPM_POLICY// Size=0x4 (Id=559)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long AsUlong32;// Offset=0x0 Size=0x4
        struct // Size=0x1 (Id=0)
        {
            unsigned char U1EnabledForUSPort:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char U2EnabledForUSPort:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char U1TimeoutAcceptTransitions:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char U2TimeoutAcceptTransitions:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char U1TimeoutInitiateTransitions:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char U2TimeoutInitiateTransitions:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char ForceConservativeTimeoutValues:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ForceAggressiveTimeoutValues:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
};
