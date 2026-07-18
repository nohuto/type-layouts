struct _unnamed_445// Size=0x8 (Id=445)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_446// Size=0x1 (Id=446)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_436// Size=0x8 (Id=436)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_447// Size=0x8 (Id=447)
{
    struct _unnamed_445 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_446 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_436 Urb;// Offset=0x0 Size=0x8
};
