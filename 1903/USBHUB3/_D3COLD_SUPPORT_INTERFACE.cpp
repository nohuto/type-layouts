struct _D3COLD_SUPPORT_INTERFACE// Size=0x48 (Id=553)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * SetD3ColdSupport)(void * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * GetIdleWakeInfo)(void * ,enum _SYSTEM_POWER_STATE ,enum _DEVICE_WAKE_DEPTH * );// Offset=0x28 Size=0x8
    long  ( * GetD3ColdCapability)(void * ,unsigned char * );// Offset=0x30 Size=0x8
    long  ( * GetBusDriverD3ColdSupport)(void * ,unsigned char * );// Offset=0x38 Size=0x8
    void  ( * GetLastTransitionStatus)(void * ,enum _D3COLD_LAST_TRANSITION_STATUS * );// Offset=0x40 Size=0x8
};
