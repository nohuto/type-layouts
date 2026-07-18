struct _INTERFACE_ALTERNATE_SETTING// Size=0x2 (Id=532)
{
    unsigned char InterfaceNumber;// Offset=0x0 Size=0x1
    unsigned char AlternateSetting;// Offset=0x1 Size=0x1
};

struct _ALTERNATE_SETTING_FILTER// Size=0x8 (Id=489)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _INTERFACE_ALTERNATE_SETTING FilterList[1];// Offset=0x4 Size=0x2
};
