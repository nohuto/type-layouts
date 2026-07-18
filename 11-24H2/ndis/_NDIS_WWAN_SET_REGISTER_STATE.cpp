struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_REGISTER_ACTION
{
    WwanRegisterActionAutomatic=0,
    WwanRegisterActionManual=1,
    WwanRegisterActionMax=2
};

struct _WWAN_SET_REGISTER_STATE// Size=0x18 (Id=1367)
{
    wchar_t ProviderId[7];// Offset=0x0 Size=0xe
    enum _WWAN_REGISTER_ACTION RegisterAction;// Offset=0x10 Size=0x4
    unsigned long WwanDataClass;// Offset=0x14 Size=0x4
};

struct _NDIS_WWAN_SET_REGISTER_STATE// Size=0x1c (Id=1111)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SET_REGISTER_STATE SetRegisterState;// Offset=0x4 Size=0x18
};
