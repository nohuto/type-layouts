enum _WWAN_REGISTER_ACTION
{
    WwanRegisterActionAutomatic=0,
    WwanRegisterActionManual=1,
    WwanRegisterActionMax=2
};

struct _WWAN_SET_REGISTER_STATE// Size=0x18 (Id=999)
{
    wchar_t ProviderId[7];// Offset=0x0 Size=0xe
    enum _WWAN_REGISTER_ACTION RegisterAction;// Offset=0x10 Size=0x4
    unsigned long WwanDataClass;// Offset=0x14 Size=0x4
};
