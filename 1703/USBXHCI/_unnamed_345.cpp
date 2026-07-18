struct _unnamed_341// Size=0x18 (Id=341)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_342// Size=0x8 (Id=342)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_343// Size=0x10 (Id=343)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_344// Size=0x18 (Id=344)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_345// Size=0x18 (Id=345)
{
    struct _unnamed_341 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_342 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_343 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_344 MultiInterface;// Offset=0x0 Size=0x18
};
