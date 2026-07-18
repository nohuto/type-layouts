struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_SMS_FORMAT
{
    WwanSmsFormatPdu=0,
    WwanSmsFormatReserved0=1,
    WwanSmsFormatReserved1=2,
    WwanSmsFormatReserved2=3,
    WwanSmsFormatCdma=4,
    WwanSmsFormatMax=5
};

struct _WWAN_SET_SMS_CONFIGURATION// Size=0x1c (Id=1028)
{
    char ScAddress[21];// Offset=0x0 Size=0x15
    enum _WWAN_SMS_FORMAT SmsFormat;// Offset=0x18 Size=0x4
};

struct _NDIS_WWAN_SET_SMS_CONFIGURATION// Size=0x20 (Id=842)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SET_SMS_CONFIGURATION SetSmsConfiguration;// Offset=0x4 Size=0x1c
};
