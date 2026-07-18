struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_CONTEXT_TYPE
{
    WwanContextTypeNone=0,
    WwanContextTypeInternet=1,
    WwanContextTypeVpn=2,
    WwanContextTypeVoice=3,
    WwanContextTypeVideoShare=4,
    WwanContextTypeCustom=5,
    WwanContextTypePurchase=6,
    WwanContextTypeMms=7,
    WwanContextTypeIms=8,
    WwanContextTypeAdmin=9,
    WwanContextTypeApp=10,
    WwanContextTypeXcap=11,
    WwanContextTypeTethering=12,
    WwanContextTypeEmergencyCall=13,
    WwanContextTypeLteAttach=14,
    WwanContextTypeSupl=15,
    WwanContextTypeMax=16
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

struct _WWAN_SET_CONTEXT// Size=0x4ec (Id=1354)
{
    unsigned long ContextId;// Offset=0x0 Size=0x4
    enum _WWAN_CONTEXT_TYPE ContextType;// Offset=0x4 Size=0x4
    wchar_t AccessString[101];// Offset=0x8 Size=0xca
    wchar_t UserName[256];// Offset=0xd2 Size=0x200
    wchar_t Password[256];// Offset=0x2d2 Size=0x200
    enum _WWAN_COMPRESSION Compression;// Offset=0x4d4 Size=0x4
    enum _WWAN_AUTH_PROTOCOL AuthType;// Offset=0x4d8 Size=0x4
    wchar_t ProviderId[7];// Offset=0x4dc Size=0xe
};

struct _NDIS_WWAN_SET_PROVISIONED_CONTEXT// Size=0x4f0 (Id=769)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SET_CONTEXT ProvisionedContext;// Offset=0x4 Size=0x4ec
};
