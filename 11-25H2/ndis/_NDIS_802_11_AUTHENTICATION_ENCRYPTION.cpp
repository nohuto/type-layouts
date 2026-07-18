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
    Ndis802_11AuthModeWPA3=8,
    Ndis802_11AuthModeWPA3Ent192=8,
    Ndis802_11AuthModeWPA3SAE=9,
    Ndis802_11AuthModeOWE=10,
    Ndis802_11AuthModeWPA3Ent=11,
    Ndis802_11AuthModeMax=12
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

struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION// Size=0x8 (Id=1056)
{
    enum _NDIS_802_11_AUTHENTICATION_MODE AuthModeSupported;// Offset=0x0 Size=0x4
    enum _NDIS_802_11_WEP_STATUS EncryptStatusSupported;// Offset=0x4 Size=0x4
};
