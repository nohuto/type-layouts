struct _unnamed_338// Size=0x18 (Id=338)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_339// Size=0x8 (Id=339)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_340// Size=0x10 (Id=340)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_341// Size=0x18 (Id=341)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_342// Size=0x18 (Id=342)
{
    struct _unnamed_338 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_339 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_340 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_341 MultiInterface;// Offset=0x0 Size=0x18
};
