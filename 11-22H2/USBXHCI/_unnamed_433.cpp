struct _unnamed_431// Size=0x8 (Id=431)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_432// Size=0x1 (Id=432)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_422// Size=0x8 (Id=422)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_433// Size=0x8 (Id=433)
{
    struct _unnamed_431 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_432 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_422 Urb;// Offset=0x0 Size=0x8
};
