struct _GUID// Size=0x10 (Id=132)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _USB_HUB_DEVICE_UXD_SETTINGS// Size=0x44 (Id=311)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _GUID PnpGuid;// Offset=0x4 Size=0x10
    struct _GUID OwnerGuid;// Offset=0x14 Size=0x10
    unsigned long DeleteOnShutdown;// Offset=0x24 Size=0x4
    unsigned long DeleteOnReload;// Offset=0x28 Size=0x4
    unsigned long DeleteOnDisconnect;// Offset=0x2c Size=0x4
    unsigned long Reserved[5];// Offset=0x30 Size=0x14
};
