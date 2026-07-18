enum _WWAN_SMS_FORMAT
{
    WwanSmsFormatPdu=0,
    WwanSmsFormatReserved0=1,
    WwanSmsFormatReserved1=2,
    WwanSmsFormatReserved2=3,
    WwanSmsFormatCdma=4,
    WwanSmsFormatMax=5
};

struct _WWAN_SET_SMS_CONFIGURATION// Size=0x14 (Id=848)
{
    char ScAddress[16];// Offset=0x0 Size=0x10
    enum _WWAN_SMS_FORMAT SmsFormat;// Offset=0x10 Size=0x4
};
