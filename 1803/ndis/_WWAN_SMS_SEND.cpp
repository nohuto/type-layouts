enum _WWAN_SMS_FORMAT
{
    WwanSmsFormatPdu=0,
    WwanSmsFormatReserved0=1,
    WwanSmsFormatReserved1=2,
    WwanSmsFormatReserved2=3,
    WwanSmsFormatCdma=4,
    WwanSmsFormatMax=5
};

struct _WWAN_SMS_SEND_PDU// Size=0x16f (Id=1505)
{
    unsigned char Size;// Offset=0x0 Size=0x1
    char PduData[366];// Offset=0x1 Size=0x16e
};

enum _WWAN_SMS_CDMA_ENCODING
{
    WwanSmsCdmaEncodingOctet=0,
    WwanSmsCdmaEncodingEpm=1,
    WwanSmsCdmaEncoding7BitAscii=2,
    WwanSmsCdmaEncodingIa5=3,
    WwanSmsCdmaEncodingUnicode=4,
    WwanSmsCdmaEncodingShiftJis=5,
    WwanSmsCdmaEncodingKorean=6,
    WwanSmsCdmaEncodingLatinHebrew=7,
    WwanSmsCdmaEncodingLatin=8,
    WwanSmsCdmaEncodingGsm7Bit=9,
    WwanSmsCdmaEncodingMax=10
};

enum _WWAN_SMS_CDMA_LANG
{
    WwanSmsCdmaLangUnknown=0,
    WwanSmsCdmaLangEnglish=1,
    WwanSmsCdmaLangFrench=2,
    WwanSmsCdmaLangSpanish=3,
    WwanSmsCdmaLangJapanese=4,
    WwanSmsCdmaLangKorean=5,
    WwanSmsCdmaLangChinese=6,
    WwanSmsCdmaLangHebrew=7,
    WwanSmsCdmaLangMax=8
};

struct _WWAN_SMS_SEND_CDMA// Size=0xe0 (Id=1125)
{
    enum _WWAN_SMS_CDMA_ENCODING EncodingId;// Offset=0x0 Size=0x4
    enum _WWAN_SMS_CDMA_LANG LanguageId;// Offset=0x4 Size=0x4
    char Address[50];// Offset=0x8 Size=0x32
    unsigned short SizeInBytes;// Offset=0x3a Size=0x2
    unsigned char SizeInCharacters;// Offset=0x3c Size=0x1
    unsigned char EncodedMsg[160];// Offset=0x3d Size=0xa0
};

struct _WWAN_SMS_SEND// Size=0x174 (Id=977)
{
    union // Size=0x4 (Id=0)
    {
        enum _WWAN_SMS_FORMAT SmsFormat;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x170 (Id=14529)
        {
            struct _WWAN_SMS_SEND_PDU Pdu;// Offset=0x0 Size=0x16f
            struct _WWAN_SMS_SEND_CDMA Cdma;// Offset=0x0 Size=0xe0
        };
    };
    union _WWAN_SMS_SEND::<unnamed-type-u> u;// Offset=0x4 Size=0x170
};
