enum _CONTROLLER_TYPE
{
    ControllerTypeXhci=0,
    ControllerTypeSoftXhci=1
};

struct _HUBUCX_ROOTHUB_INFO// Size=0x28 (Id=616)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _CONTROLLER_TYPE ControllerType;// Offset=0x4 Size=0x4
    unsigned short NumberOf20Ports;// Offset=0x8 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0xa Size=0x2
    unsigned short MaxU1ExitLatency;// Offset=0xc Size=0x2
    unsigned short MaxU2ExitLatency;// Offset=0xe Size=0x2
    void * UsbdInterruptPipeHandle;// Offset=0x10 Size=0x8
    char VendorId[5];// Offset=0x18 Size=0x5
    char DeviceId[5];// Offset=0x1d Size=0x5
    char RevisionId[5];// Offset=0x22 Size=0x5
};
