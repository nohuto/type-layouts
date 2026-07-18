struct _unnamed_351// Size=0x8 (Id=351)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_352// Size=0x1 (Id=352)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_342// Size=0x8 (Id=342)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_353// Size=0x8 (Id=353)
{
    struct _unnamed_351 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_352 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_342 Urb;// Offset=0x0 Size=0x8
};
