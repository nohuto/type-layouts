struct _anonymous_378// Size=0x8 (Id=378)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _anonymous_379// Size=0x1 (Id=379)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _anonymous_369// Size=0x8 (Id=369)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _anonymous_380// Size=0x8 (Id=380)
{
    struct _anonymous_378 Descriptor;// Offset=0x0 Size=0x8
    struct _anonymous_379 Interface;// Offset=0x0 Size=0x1
    struct _anonymous_369 Urb;// Offset=0x0 Size=0x8
};
