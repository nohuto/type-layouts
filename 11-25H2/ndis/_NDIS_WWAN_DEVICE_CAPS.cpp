struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_DEVICE_TYPE
{
    WwanDeviceTypeUnknown=0,
    WwanDeviceTypeEmbedded=1,
    WwanDeviceTypeRemovable=2,
    WwanDeviceTypeRemote=3,
    WwanDeviceTypeMax=4
};

enum _WWAN_CELLULAR_CLASS
{
    WwanCellularClassUnknown=0,
    WwanCellularClassGsm=1,
    WwanCellularClassCdma=2,
    WwanCellularClassMax=3
};

enum _WWAN_VOICE_CLASS
{
    WwanVoiceClassUnknown=0,
    WwanVoiceClassNoVoice=1,
    WwanVoiceClassSeparateVoiceData=2,
    WwanVoiceClassSimultaneousVoiceData=3,
    WwanVoiceClassMax=4
};

enum _WWAN_SIM_CLASS
{
    WwanSimClassUnknown=0,
    WwanSimClassSimLogical=1,
    WwanSimClassSimRemovable=2,
    WwanSimClassSimRemote=3,
    WwanSimClassMax=4
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

struct _WWAN_LIST_HEADER// Size=0x8 (Id=865)
{
    enum _WWAN_STRUCT_TYPE ElementType;// Offset=0x0 Size=0x4
    unsigned long ElementCount;// Offset=0x4 Size=0x4
};

struct _WWAN_DEVICE_CAPS// Size=0x158 (Id=2048)
{
    enum _WWAN_DEVICE_TYPE WwanDeviceType;// Offset=0x0 Size=0x4
    enum _WWAN_CELLULAR_CLASS WwanCellularClass;// Offset=0x4 Size=0x4
    enum _WWAN_VOICE_CLASS WwanVoiceClass;// Offset=0x8 Size=0x4
    enum _WWAN_SIM_CLASS WwanSimClass;// Offset=0xc Size=0x4
    unsigned long WwanDataClass;// Offset=0x10 Size=0x4
    wchar_t CustomDataClass[12];// Offset=0x14 Size=0x18
    unsigned long WwanGsmBandClass;// Offset=0x2c Size=0x4
    unsigned long WwanCdmaBandClass;// Offset=0x30 Size=0x4
    wchar_t CustomBandClass[20];// Offset=0x34 Size=0x28
    unsigned long WwanSmsCaps;// Offset=0x5c Size=0x4
    unsigned long WwanControlCaps;// Offset=0x60 Size=0x4
    wchar_t DeviceId[18];// Offset=0x64 Size=0x24
    wchar_t Manufacturer[32];// Offset=0x88 Size=0x40
    wchar_t Model[32];// Offset=0xc8 Size=0x40
    wchar_t FirmwareInfo[32];// Offset=0x108 Size=0x40
    unsigned long MaxActivatedContexts;// Offset=0x148 Size=0x4
    unsigned long WwanAuthAlgoCaps;// Offset=0x14c Size=0x4
    struct _WWAN_LIST_HEADER CellularClassListHeader;// Offset=0x150 Size=0x8
};

struct _NDIS_WWAN_DEVICE_CAPS// Size=0x160 (Id=1436)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uStatus;// Offset=0x4 Size=0x4
    struct _WWAN_DEVICE_CAPS DeviceCaps;// Offset=0x8 Size=0x158
};
