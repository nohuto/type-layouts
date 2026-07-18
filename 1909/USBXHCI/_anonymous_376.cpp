struct _anonymous_374// Size=0x8 (Id=374)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _anonymous_375// Size=0x1 (Id=375)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _anonymous_365// Size=0x8 (Id=365)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _anonymous_376// Size=0x8 (Id=376)
{
    struct _anonymous_374 Descriptor;// Offset=0x0 Size=0x8
    struct _anonymous_375 Interface;// Offset=0x0 Size=0x1
    struct _anonymous_365 Urb;// Offset=0x0 Size=0x8
};
