struct _DEVICE_RESET_INTERFACE_STANDARD// Size=0x50 (Id=849)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * DeviceReset)(void * ,enum _DEVICE_RESET_TYPE ,unsigned long ,void * );// Offset=0x20 Size=0x8
    unsigned long SupportedResetTypes;// Offset=0x28 Size=0x4
    void * Reserved;// Offset=0x30 Size=0x8
    long  ( * QueryBusSpecificResetInfo)(void * ,unsigned long * ,struct _DEVICE_BUS_SPECIFIC_RESET_INFO * );// Offset=0x38 Size=0x8
    long  ( * DeviceBusSpecificReset)(void * ,struct _GUID * ,union _DEVICE_BUS_SPECIFIC_RESET_TYPE ,union _BUS_SPECIFIC_RESET_FLAGS * ,void * );// Offset=0x40 Size=0x8
    long  ( * GetDeviceResetStatus)(void * ,unsigned char * ,union _DEVICE_BUS_SPECIFIC_RESET_TYPE * ,union _DEVICE_RESET_STATUS_FLAGS * );// Offset=0x48 Size=0x8
};
