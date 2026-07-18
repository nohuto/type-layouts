struct _WDF_POWER_FRAMEWORK_SETTINGS// Size=0x48 (Id=227)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceWdmPostPoFxRegisterDevice)(struct WDFDEVICE__ * ,struct POHANDLE__ * );// Offset=0x8 Size=0x8
    void  ( * EvtDeviceWdmPrePoFxUnregisterDevice)(struct WDFDEVICE__ * ,struct POHANDLE__ * );// Offset=0x10 Size=0x8
    struct _PO_FX_COMPONENT_V1 * Component;// Offset=0x18 Size=0x8
    void  ( * ComponentActiveConditionCallback)(void * ,unsigned long );// Offset=0x20 Size=0x8
    void  ( * ComponentIdleConditionCallback)(void * ,unsigned long );// Offset=0x28 Size=0x8
    void  ( * ComponentIdleStateCallback)(void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * PowerControlCallback)(void * ,struct _GUID * ,void * ,unsigned long long ,void * ,unsigned long long ,unsigned long long * );// Offset=0x38 Size=0x8
    void * PoFxDeviceContext;// Offset=0x40 Size=0x8
};
