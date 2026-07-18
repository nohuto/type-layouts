struct _anonymous_364// Size=0x18 (Id=364)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _anonymous_365// Size=0x8 (Id=365)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _anonymous_366// Size=0x10 (Id=366)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _anonymous_367// Size=0x18 (Id=367)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _anonymous_368// Size=0x18 (Id=368)
{
    struct _anonymous_364 Descriptor;// Offset=0x0 Size=0x18
    struct _anonymous_365 Urb;// Offset=0x0 Size=0x8
    struct _anonymous_366 SingleInterface;// Offset=0x0 Size=0x10
    struct _anonymous_367 MultiInterface;// Offset=0x0 Size=0x18
};
