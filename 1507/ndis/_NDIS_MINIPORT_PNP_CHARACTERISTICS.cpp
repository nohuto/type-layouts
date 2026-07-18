struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_PNP_CHARACTERISTICS// Size=0x30 (Id=893)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    int  ( * MiniportAddDeviceHandler)(void * ,void * );// Offset=0x8 Size=0x8
    void  ( * MiniportRemoveDeviceHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * MiniportFilterResourceRequirementsHandler)(void * ,struct _IRP * );// Offset=0x18 Size=0x8
    int  ( * MiniportStartDeviceHandler)(void * ,struct _IRP * );// Offset=0x20 Size=0x8
    unsigned long Flags;// Offset=0x28 Size=0x4
};
