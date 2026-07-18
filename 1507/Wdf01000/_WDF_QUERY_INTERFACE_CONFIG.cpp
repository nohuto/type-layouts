struct _WDF_QUERY_INTERFACE_CONFIG// Size=0x30 (Id=768)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _INTERFACE * Interface;// Offset=0x8 Size=0x8
    struct _GUID * InterfaceType;// Offset=0x10 Size=0x8
    unsigned char SendQueryToParentStack;// Offset=0x18 Size=0x1
    long  ( * EvtDeviceProcessQueryInterfaceRequest)(struct WDFDEVICE__ * ,struct _GUID * ,struct _INTERFACE * ,void * );// Offset=0x20 Size=0x8
    unsigned char ImportInterface;// Offset=0x28 Size=0x1
};
