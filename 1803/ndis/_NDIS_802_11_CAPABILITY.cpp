enum _NDIS_802_11_AUTHENTICATION_MODE
{
    Ndis802_11AuthModeOpen=0,
    Ndis802_11AuthModeShared=1,
    Ndis802_11AuthModeAutoSwitch=2,
    Ndis802_11AuthModeWPA=3,
    Ndis802_11AuthModeWPAPSK=4,
    Ndis802_11AuthModeWPANone=5,
    Ndis802_11AuthModeWPA2=6,
    Ndis802_11AuthModeWPA2PSK=7,
    Ndis802_11AuthModeMax=8
};

enum _NDIS_802_11_WEP_STATUS
{
    Ndis802_11WEPEnabled=0,
    Ndis802_11Encryption1Enabled=0,
    Ndis802_11WEPDisabled=1,
    Ndis802_11EncryptionDisabled=1,
    Ndis802_11WEPKeyAbsent=2,
    Ndis802_11Encryption1KeyAbsent=2,
    Ndis802_11WEPNotSupported=3,
    Ndis802_11EncryptionNotSupported=3,
    Ndis802_11Encryption2Enabled=4,
    Ndis802_11Encryption2KeyAbsent=5,
    Ndis802_11Encryption3Enabled=6,
    Ndis802_11Encryption3KeyAbsent=7
};

struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION// Size=0x8 (Id=816)
{
    enum _NDIS_802_11_AUTHENTICATION_MODE AuthModeSupported;// Offset=0x0 Size=0x4
    enum _NDIS_802_11_WEP_STATUS EncryptStatusSupported;// Offset=0x4 Size=0x4
};

struct _NDIS_802_11_CAPABILITY// Size=0x18 (Id=1613)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long NoOfPMKIDs;// Offset=0x8 Size=0x4
    unsigned long NoOfAuthEncryptPairsSupported;// Offset=0xc Size=0x4
    struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION AuthenticationEncryptionSupported[1];// Offset=0x10 Size=0x8
};
