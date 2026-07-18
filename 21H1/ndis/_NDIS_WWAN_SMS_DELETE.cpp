struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct _WWAN_SMS_FILTER// Size=0x8 (Id=983)
{
    enum _WWAN_SMS_FLAG Flag;// Offset=0x0 Size=0x4
    unsigned long MessageIndex;// Offset=0x4 Size=0x4
};

struct _NDIS_WWAN_SMS_DELETE// Size=0xc (Id=852)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SMS_FILTER SmsFilter;// Offset=0x4 Size=0x8
};
