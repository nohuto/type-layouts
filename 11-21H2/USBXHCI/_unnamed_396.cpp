struct _unnamed_394// Size=0x8 (Id=394)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_395// Size=0x1 (Id=395)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_385// Size=0x8 (Id=385)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_396// Size=0x8 (Id=396)
{
    struct _unnamed_394 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_395 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_385 Urb;// Offset=0x0 Size=0x8
};
