struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION// Size=0x30 (Id=3185)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct _GUID Event;// Offset=0x4 Size=0x10
    struct _GUID InterfaceClassGuid;// Offset=0x14 Size=0x10
    struct _UNICODE_STRING * SymbolicLinkName;// Offset=0x28 Size=0x8
};
