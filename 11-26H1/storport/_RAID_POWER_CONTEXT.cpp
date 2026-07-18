enum _STOR_DEVICE_POWER_STATE
{
    StorPowerDeviceUnspecified=0,
    StorPowerDeviceD0=1,
    StorPowerDeviceD1=2,
    StorPowerDeviceD2=3,
    StorPowerDeviceD3=4,
    StorPowerDeviceMaximum=5
};

struct _SCSI_POWER_REQUEST_BLOCK// Size=0x58 (Id=1150)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned char SrbPowerFlags;// Offset=0x4 Size=0x1
    unsigned char PathId;// Offset=0x5 Size=0x1
    unsigned char TargetId;// Offset=0x6 Size=0x1
    unsigned char Lun;// Offset=0x7 Size=0x1
    enum _STOR_DEVICE_POWER_STATE DevicePowerState;// Offset=0x8 Size=0x4
    unsigned long SrbFlags;// Offset=0xc Size=0x4
    unsigned long DataTransferLength;// Offset=0x10 Size=0x4
    unsigned long TimeOutValue;// Offset=0x14 Size=0x4
    void * DataBuffer;// Offset=0x18 Size=0x8
    void * SenseInfoBuffer;// Offset=0x20 Size=0x8
    struct _SCSI_REQUEST_BLOCK * NextSrb;// Offset=0x28 Size=0x8
    void * OriginalRequest;// Offset=0x30 Size=0x8
    void * SrbExtension;// Offset=0x38 Size=0x8
    enum STOR_POWER_ACTION PowerAction;// Offset=0x40 Size=0x4
    unsigned long Reserved;// Offset=0x44 Size=0x4
    unsigned char Reserved5[16];// Offset=0x48 Size=0x10
};

struct _STORAGE_REQUEST_BLOCK// Size=0x80 (Id=261)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned long ReservedUlong1;// Offset=0x4 Size=0x4
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned long Version;// Offset=0xc Size=0x4
    unsigned long SrbLength;// Offset=0x10 Size=0x4
    unsigned long SrbFunction;// Offset=0x14 Size=0x4
    unsigned long SrbFlags;// Offset=0x18 Size=0x4
    unsigned long ReservedUlong2;// Offset=0x1c Size=0x4
    unsigned long RequestTag;// Offset=0x20 Size=0x4
    unsigned short RequestPriority;// Offset=0x24 Size=0x2
    unsigned short RequestAttribute;// Offset=0x26 Size=0x2
    unsigned long TimeOutValue;// Offset=0x28 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long SystemStatus;// Offset=0x2c Size=0x4
        unsigned long RequestTagHigh4Bytes;// Offset=0x2c Size=0x4
    };
    unsigned long ZeroGuard1;// Offset=0x30 Size=0x4
    unsigned long AddressOffset;// Offset=0x34 Size=0x4
    unsigned long NumSrbExData;// Offset=0x38 Size=0x4
    unsigned long DataTransferLength;// Offset=0x3c Size=0x4
    void * DataBuffer;// Offset=0x40 Size=0x8
    void * ZeroGuard2;// Offset=0x48 Size=0x8
    void * OriginalRequest;// Offset=0x50 Size=0x8
    void * ClassContext;// Offset=0x58 Size=0x8
    void * PortContext;// Offset=0x60 Size=0x8
    void * MiniportContext;// Offset=0x68 Size=0x8
    struct _STORAGE_REQUEST_BLOCK * NextSrb;// Offset=0x70 Size=0x8
    unsigned long SrbExDataOffset[1];// Offset=0x78 Size=0x4
};

struct _RAID_POWER_CONTEXT// Size=0xb8 (Id=969)
{
    union // Size=0x80 (Id=0)
    {
        struct _SCSI_POWER_REQUEST_BLOCK PowerSrb;// Offset=0x0 Size=0x58
        struct _STORAGE_REQUEST_BLOCK PowerSrbEx;// Offset=0x0 Size=0x80
        unsigned char PowerSrbExBuffer[168];// Offset=0x0 Size=0xa8
    };
    struct _IO_RESOURCE_ENTRY * IoResource;// Offset=0xa8 Size=0x8
    unsigned char InUse;// Offset=0xb0 Size=0x1
    unsigned char D3Processing;// Offset=0xb1 Size=0x1
};
