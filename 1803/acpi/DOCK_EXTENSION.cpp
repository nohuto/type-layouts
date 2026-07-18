struct DOCK_EXTENSION// Size=0x30 (Id=445)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    struct _DEVICE_EXTENSION * CorrospondingAcpiDevice;// Offset=0x18 Size=0x8
    enum PROFILE_DEPARTURE_STYLE ProfileDepartureStyle;// Offset=0x20 Size=0x4
    unsigned long InterfaceReferenceCount;// Offset=0x24 Size=0x4
    enum ISOLATION_STATE IsolationState;// Offset=0x28 Size=0x4
};
