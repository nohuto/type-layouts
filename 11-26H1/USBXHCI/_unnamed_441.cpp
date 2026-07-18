struct _unnamed_439// Size=0x8 (Id=439)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_440// Size=0x1 (Id=440)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_430// Size=0x8 (Id=430)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_441// Size=0x8 (Id=441)
{
    struct _unnamed_439 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_440 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_430 Urb;// Offset=0x0 Size=0x8
};
