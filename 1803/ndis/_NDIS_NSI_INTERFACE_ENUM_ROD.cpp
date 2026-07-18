struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1089)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

enum _NET_IF_OPER_STATUS
{
    NET_IF_OPER_STATUS_UP=1,
    NET_IF_OPER_STATUS_DOWN=2,
    NET_IF_OPER_STATUS_TESTING=3,
    NET_IF_OPER_STATUS_UNKNOWN=4,
    NET_IF_OPER_STATUS_DORMANT=5,
    NET_IF_OPER_STATUS_NOT_PRESENT=6,
    NET_IF_OPER_STATUS_LOWER_LAYER_DOWN=7
};

struct _IF_PHYSICAL_ADDRESS_LH// Size=0x22 (Id=492)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Address[32];// Offset=0x2 Size=0x20
};

enum _NET_IF_ADMIN_STATUS
{
    NET_IF_ADMIN_STATUS_UP=1,
    NET_IF_ADMIN_STATUS_DOWN=2,
    NET_IF_ADMIN_STATUS_TESTING=3
};

enum _NET_IF_MEDIA_CONNECT_STATE
{
    MediaConnectStateUnknown=0,
    MediaConnectStateConnected=1,
    MediaConnectStateDisconnected=2
};

enum _NET_IF_MEDIA_DUPLEX_STATE
{
    MediaDuplexStateUnknown=0,
    MediaDuplexStateHalf=1,
    MediaDuplexStateFull=2
};

struct _NDIS_NSI_INTERFACE_ENUM_ROD// Size=0x290 (Id=422)
{
    unsigned int CompartmentId;// Offset=0x0 Size=0x4
    struct _GUID NetworkGuid;// Offset=0x4 Size=0x10
    struct _IF_COUNTED_STRING_LH ifAlias;// Offset=0x14 Size=0x204
    enum _NET_IF_OPER_STATUS ifOperStatus;// Offset=0x218 Size=0x4
    unsigned long ifOperStatusFlags;// Offset=0x21c Size=0x4
    unsigned long ifMtu;// Offset=0x220 Size=0x4
    struct _IF_PHYSICAL_ADDRESS_LH ifPhysAddress;// Offset=0x224 Size=0x22
    struct _IF_PHYSICAL_ADDRESS_LH PermanentPhysAddress;// Offset=0x246 Size=0x22
    enum _NET_IF_ADMIN_STATUS ifAdminStatus;// Offset=0x268 Size=0x4
    unsigned long long XmitLinkSpeed;// Offset=0x270 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x278 Size=0x8
    unsigned char ifPromiscuousMode;// Offset=0x280 Size=0x1
    unsigned char ifDeviceWakeUpEnable;// Offset=0x281 Size=0x1
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x284 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x288 Size=0x4
};
