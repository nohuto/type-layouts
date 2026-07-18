struct _INTERFACE// Size=0x20 (Id=183)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
};

struct _WDF_DSF_INTERFACE// Size=0x40 (Id=5741)
{
    struct _INTERFACE Interface;// Offset=0x0 Size=0x20
    void  ( * IoReportInterruptActive)(struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS * );// Offset=0x20 Size=0x8
    void  ( * IoReportInterruptInactive)(struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS * );// Offset=0x28 Size=0x8
    long  ( * IoConnectInterruptEx)(struct _IO_CONNECT_INTERRUPT_PARAMETERS * );// Offset=0x30 Size=0x8
    long  ( * IoDisconnectInterruptEx)(struct _IO_DISCONNECT_INTERRUPT_PARAMETERS * );// Offset=0x38 Size=0x8
};
