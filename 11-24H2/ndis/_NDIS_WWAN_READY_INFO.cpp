struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_READY_STATE
{
    WwanReadyStateOff=0,
    WwanReadyStateInitialized=1,
    WwanReadyStateSimNotInserted=2,
    WwanReadyStateBadSim=3,
    WwanReadyStateFailure=4,
    WwanReadyStateNotActivated=5,
    WwanReadyStateDeviceLocked=6,
    WwanReadyStateNoEsimProfile=7,
    WwanReadyStateMax=8
};

enum _WWAN_EMERGENCY_MODE
{
    WwanEmergencyModeOff=0,
    WwanEmergencyModeOn=1,
    WwanEmergencyModeMax=2
};

enum _WWAN_STRUCT_TYPE
{
    WwanStructTN=0,
    WwanStructContext=1,
    WwanStructProvider=2,
    WwanStructSmsPdu=3,
    WwanStructReserved0=4,
    WwanStructReserved1=5,
    WwanStructReserved2=6,
    WwanStructSmsCdma=7,
    WwanStructReserved3=8,
    WwanStructDeviceServiceEntry=9,
    WwanStructProvider2=10,
    WwanStructDeviceServiceGuid=11,
    WwanStructDeviceServiceCommandId=12,
    WwanStructCellularClass=13,
    WwanStructDeviceSlotMap=14,
    WwanStructUiccApplication=15,
    WwanStructRegisterAcquisitionOrder=16,
    WwanStructRegistrationState=17,
    WwanStructSignalState=18,
    WwanStructUiccTerminalCapability=19,
    WwanStructSarConfig=20,
    WwanStructContextV2=21,
    WwanStructNetworkBlacklistProvider=22,
    WwanStructMPDPChildInterface=23,
    WwanStructSNSSAI=24,
    WwanStructRejectedSNSSAI=25,
    WwanStructProvisionedContextV2=26,
    WwanStructTaiSinglePlmnNonConsecutive=27,
    WwanStructTaiSinglePlmnConsecutive=28,
    WwanStructTaiMultiPlmn=29,
    WwanStructMax=30
};

struct _WWAN_LIST_HEADER// Size=0x8 (Id=888)
{
    enum _WWAN_STRUCT_TYPE ElementType;// Offset=0x0 Size=0x4
    unsigned long ElementCount;// Offset=0x4 Size=0x4
};

struct _WWAN_READY_INFO// Size=0x64 (Id=1477)
{
    enum _WWAN_READY_STATE ReadyState;// Offset=0x0 Size=0x4
    enum _WWAN_EMERGENCY_MODE EmergencyMode;// Offset=0x4 Size=0x4
    wchar_t SubscriberId[16];// Offset=0x8 Size=0x20
    wchar_t SimIccId[21];// Offset=0x28 Size=0x2a
    unsigned char CdmaShortMsgSize;// Offset=0x52 Size=0x1
    unsigned long StatusFlags;// Offset=0x54 Size=0x4
    unsigned long SlotId;// Offset=0x58 Size=0x4
    struct _WWAN_LIST_HEADER TNListHeader;// Offset=0x5c Size=0x8
};

struct _NDIS_WWAN_READY_INFO// Size=0x68 (Id=1405)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_READY_INFO ReadyInfo;// Offset=0x4 Size=0x64
};
