enum _WWAN_ACTIVATION_COMMAND
{
    WwanActivationCommandDeactivate=0,
    WwanActivationCommandActivate=1,
    WwanActivationCommandCancel=2,
    WwanActivationCommandMax=3
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
    WwanIPTypeXlat=4,
    WwanSessionTypeEthernet=5,
    WwanSessionTypeUnstructured=6,
    WwanSessionTypeMax=7
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
    WwanModemOperatorProvisioned=5,
    WwanMaxProvisionSource=6
};

enum _WWAN_ACTIVATION_OPTION
{
    WwanActivationOptionDefault=0,
    WwanActivationOptionPerNonDefaultURSPRules=1,
    WwanActivationOptionPerDefaultURSPRule=2,
    WwanActivationOptionPerURSPRules=3,
    WwanActivationOptionMax=4
};

struct _WWAN_SINGLE_NSSAI// Size=0x10 (Id=2132)
{
    unsigned int Bitmasks;// Offset=0x0 Size=0x4
    unsigned short SliceServiceType;// Offset=0x4 Size=0x2
    unsigned short MappedSliceServiceType;// Offset=0x6 Size=0x2
    unsigned int SliceDifferentiator;// Offset=0x8 Size=0x4
    unsigned int MappedSliceDifferentiator;// Offset=0xc Size=0x4
};

struct _WWAN_OFFSET_SIZE_ELEMENT// Size=0x8 (Id=2182)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _WWAN_SET_CONTEXT_STATE// Size=0x504 (Id=1814)
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
    enum _WWAN_ACTIVATION_OPTION ActivationOption;// Offset=0x4e8 Size=0x4
    struct _WWAN_SINGLE_NSSAI Snssai;// Offset=0x4ec Size=0x10
    struct _WWAN_OFFSET_SIZE_ELEMENT TrafficParameters;// Offset=0x4fc Size=0x8
};
