struct _unnamed_349// Size=0x8 (Id=349)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_350// Size=0x1 (Id=350)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_340// Size=0x8 (Id=340)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_351// Size=0x8 (Id=351)
{
    struct _unnamed_349 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_350 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_340 Urb;// Offset=0x0 Size=0x8
};
