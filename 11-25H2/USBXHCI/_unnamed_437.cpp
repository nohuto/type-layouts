struct _unnamed_433// Size=0x18 (Id=433)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_434// Size=0x8 (Id=434)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_435// Size=0x10 (Id=435)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_436// Size=0x18 (Id=436)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_437// Size=0x18 (Id=437)
{
    struct _unnamed_433 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_434 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_435 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_436 MultiInterface;// Offset=0x0 Size=0x18
};
