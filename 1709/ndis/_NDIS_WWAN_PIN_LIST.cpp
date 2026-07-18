struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

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

struct _WWAN_PIN_DESC// Size=0x10 (Id=1147)
{
    enum _WWAN_PIN_MODE PinMode;// Offset=0x0 Size=0x4
    enum _WWAN_PIN_FORMAT PinFormat;// Offset=0x4 Size=0x4
    unsigned long PinLengthMin;// Offset=0x8 Size=0x4
    unsigned long PinLengthMax;// Offset=0xc Size=0x4
};

struct _WWAN_PIN_LIST// Size=0xa0 (Id=1054)
{
    struct _WWAN_PIN_DESC WwanPinDescPin1;// Offset=0x0 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescPin2;// Offset=0x10 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescDeviceSimPin;// Offset=0x20 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescDeviceFirstSimPin;// Offset=0x30 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescNetworkPin;// Offset=0x40 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescNetworkSubsetPin;// Offset=0x50 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescSvcProviderPin;// Offset=0x60 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescCorporatePin;// Offset=0x70 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescSubsidyLock;// Offset=0x80 Size=0x10
    struct _WWAN_PIN_DESC WwanPinDescCustom;// Offset=0x90 Size=0x10
};

struct _NDIS_WWAN_PIN_LIST// Size=0xa8 (Id=700)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uStatus;// Offset=0x4 Size=0x4
    struct _WWAN_PIN_LIST PinList;// Offset=0x8 Size=0xa0
};
