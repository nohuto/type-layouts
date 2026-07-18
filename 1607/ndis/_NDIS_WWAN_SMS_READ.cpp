struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=323)
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

enum _WWAN_SMS_FLAG
{
    WwanSmsFlagAll=0,
    WwanSmsFlagIndex=1,
    WwanSmsFlagNew=2,
    WwanSmsFlagOld=3,
    WwanSmsFlagSent=4,
    WwanSmsFlagDraft=5,
    WwanSmsFlagMax=6
};

struct _WWAN_SMS_FILTER// Size=0x8 (Id=784)
{
    enum _WWAN_SMS_FLAG Flag;// Offset=0x0 Size=0x4
    unsigned long MessageIndex;// Offset=0x4 Size=0x4
};

struct _WWAN_SMS_READ// Size=0xc (Id=615)
{
    enum _WWAN_SMS_FORMAT SmsFormat;// Offset=0x0 Size=0x4
    struct _WWAN_SMS_FILTER ReadFilter;// Offset=0x4 Size=0x8
};

struct _NDIS_WWAN_SMS_READ// Size=0x10 (Id=469)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SMS_READ SmsRead;// Offset=0x4 Size=0xc
};
