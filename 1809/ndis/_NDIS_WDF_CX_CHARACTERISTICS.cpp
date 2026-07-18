struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_WDF_CX_CHARACTERISTICS// Size=0x78 (Id=441)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    long  ( * EvtCxPowerReference)(void * ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * EvtCxPowerDereference)(void * );// Offset=0x10 Size=0x8
    void  ( * EvtCxPowerAoAcEngage)(void * );// Offset=0x18 Size=0x8
    long  ( * EvtCxPowerAoAcDisengage)(void * ,unsigned char );// Offset=0x20 Size=0x8
    struct _DEVICE_OBJECT *  ( * EvtCxGetDeviceObject)(void * );// Offset=0x28 Size=0x8
    struct _DEVICE_OBJECT *  ( * EvtCxGetNextDeviceObject)(void * );// Offset=0x30 Size=0x8
    long  ( * EvtCxGetAssignedFdoName)(void * ,struct _UNICODE_STRING * );// Offset=0x38 Size=0x8
    void *  ( * EvtCxGetNdisHandleFromDeviceObject)(struct _DEVICE_OBJECT * );// Offset=0x40 Size=0x8
    void  ( * EvtCxUpdatePMParameters)(void * ,struct _NDIS_PM_PARAMETERS * );// Offset=0x48 Size=0x8
    long  ( * EvtCxAllocateMiniportBlock)(void * ,unsigned long ,void ** );// Offset=0x50 Size=0x8
    void  ( * EvtCxMiniportCompleteAdd)(void * ,struct _NDIS_WDF_COMPLETE_ADD_PARAMS * );// Offset=0x58 Size=0x8
    void  ( * EvtCxDeviceStartComplete)(void * );// Offset=0x60 Size=0x8
    long  ( * EvtCxMiniportDeviceReset)(void * ,enum _NET_DEVICE_RESET_TYPE );// Offset=0x68 Size=0x8
    long  ( * EvtCxMiniportQueryDeviceResetSupport)(void * ,unsigned long * );// Offset=0x70 Size=0x8
};
