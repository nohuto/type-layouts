struct _unnamed_348// Size=0x8 (Id=348)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_349// Size=0x1 (Id=349)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_339// Size=0x8 (Id=339)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_350// Size=0x8 (Id=350)
{
    struct _unnamed_348 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_349 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_339 Urb;// Offset=0x0 Size=0x8
};
