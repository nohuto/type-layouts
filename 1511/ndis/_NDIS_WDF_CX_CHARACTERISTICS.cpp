struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_WDF_CX_CHARACTERISTICS// Size=0x40 (Id=381)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    long  ( * EvtCxPowerReference)(void * );// Offset=0x8 Size=0x8
    void  ( * EvtCxPowerDereference)(void * );// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT *  ( * EvtCxGetDeviceObject)(void * );// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT *  ( * EvtCxGetNextDeviceObject)(void * );// Offset=0x20 Size=0x8
    unsigned long  ( * EvtCxGetAssignedFdoIndex)(void * );// Offset=0x28 Size=0x8
    void *  ( * EvtCxGetNdisHandleFromDeviceObject)(struct _DEVICE_OBJECT * );// Offset=0x30 Size=0x8
    void  ( * EvtCxUpdatePMParameters)(void * ,struct _NDIS_PM_PARAMETERS * );// Offset=0x38 Size=0x8
};
