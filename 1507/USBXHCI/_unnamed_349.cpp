struct _unnamed_347// Size=0x8 (Id=347)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_348// Size=0x1 (Id=348)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_338// Size=0x8 (Id=338)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_349// Size=0x8 (Id=349)
{
    struct _unnamed_347 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_348 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_338 Urb;// Offset=0x0 Size=0x8
};
