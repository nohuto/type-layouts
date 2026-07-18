struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_ACTIVATION_COMMAND
{
    WwanActivationCommandDeactivate=0,
    WwanActivationCommandActivate=1,
    WwanActivationCommandMax=2
};

enum _WWAN_COMPRESSION
{
    WwanCompressionNone=0,
    WwanCompressionEnable=1,
    WwanCompressionMax=2
};

enum _WWAN_AUTH_PROTOCOL
{
    WwanAuthProtocolNone=0,
    WwanAuthProtocolPap=1,
    WwanAuthProtocolChap=2,
    WwanAuthProtocolMsChapV2=3,
    WwanAuthProtocolAuto=4,
    WwanAuthProtocolMax=5
};

enum _WWAN_IP_TYPE
{
    WwanIPTypeDefault=0,
    WwanIPTypeIPv4=1,
    WwanIPTypeIPv6=2,
    WwanIPTypeIpv4v6=3,
    WwanIPTypeXlat=4
};

enum _WWAN_PSMEDIA_PREFERENCE
{
    WwanPsMediaPreferenceNone=0,
    WwanPsMediaPreferenceCellularOnly=1,
    WwanPsMediaPreferenceCellularPreferred=2,
    WwanPsMediaPreferenceWiFiOnly=3,
    WwanPsMediaPreferenceWiFiPreferred=4,
    WwanPsMediaPreferenceMax=5
};

enum _WWAN_CONFIGURATION_SOURCE
{
    WwanUserProvisioned=0,
    WwanAdminProvisioned=1,
    WwanOperatorProvisioned=2,
    WwanDeviceProvisioned=3,
    WwanModemProvisioned=4,
    WwanMaxProvisionSource=5
};

struct _WWAN_SET_CONTEXT_STATE// Size=0x4e8 (Id=1626)
{
    unsigned long ConnectionId;// Offset=0x0 Size=0x4
    enum _WWAN_ACTIVATION_COMMAND ActivationCommand;// Offset=0x4 Size=0x4
    wchar_t AccessString[101];// Offset=0x8 Size=0xca
    wchar_t UserName[256];// Offset=0xd2 Size=0x200
    wchar_t Password[256];// Offset=0x2d2 Size=0x200
    enum _WWAN_COMPRESSION Compression;// Offset=0x4d4 Size=0x4
    enum _WWAN_AUTH_PROTOCOL AuthType;// Offset=0x4d8 Size=0x4
    enum _WWAN_IP_TYPE IPType;// Offset=0x4dc Size=0x4
    enum _WWAN_PSMEDIA_PREFERENCE MediaPreference;// Offset=0x4e0 Size=0x4
    enum _WWAN_CONFIGURATION_SOURCE ConnectionMediaSource;// Offset=0x4e4 Size=0x4
};

struct _NDIS_WWAN_SET_CONTEXT_STATE// Size=0x4ec (Id=1298)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SET_CONTEXT_STATE SetContextState;// Offset=0x4 Size=0x4e8
};
