struct _D3COLD_AUX_POWER_AND_TIMING_INTERFACE// Size=0x38 (Id=1443)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * RequestCorePowerRail)(void * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * RequestAuxPower)(void * ,unsigned long ,unsigned long * );// Offset=0x28 Size=0x8
    long  ( * RequestPerstDelay)(void * ,unsigned long );// Offset=0x30 Size=0x8
};
