struct _anonymous_369// Size=0x18 (Id=369)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _anonymous_370// Size=0x8 (Id=370)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _anonymous_371// Size=0x10 (Id=371)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _anonymous_372// Size=0x18 (Id=372)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _anonymous_373// Size=0x18 (Id=373)
{
    struct _anonymous_369 Descriptor;// Offset=0x0 Size=0x18
    struct _anonymous_370 Urb;// Offset=0x0 Size=0x8
    struct _anonymous_371 SingleInterface;// Offset=0x0 Size=0x10
    struct _anonymous_372 MultiInterface;// Offset=0x0 Size=0x18
};
