enum _WWAN_PIN_MODE
{
    WwanPinModeNotSupported=0,
    WwanPinModeEnabled=1,
    WwanPinModeDisabled=2,
    WwanPinModeMax=3
};

enum _WWAN_PIN_FORMAT
{
    WwanPinFormatUnknown=0,
    WwanPinFormatNumeric=1,
    WwanPinFormatAlphaNumeric=2,
    WwanPinFormatMax=3
};

struct _WWAN_PIN_DESC// Size=0x10 (Id=1317)
{
    enum _WWAN_PIN_MODE PinMode;// Offset=0x0 Size=0x4
    enum _WWAN_PIN_FORMAT PinFormat;// Offset=0x4 Size=0x4
    unsigned long PinLengthMin;// Offset=0x8 Size=0x4
    unsigned long PinLengthMax;// Offset=0xc Size=0x4
};
