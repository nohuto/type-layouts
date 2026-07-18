union _WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS// Size=0x4 (Id=2684)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:32;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x20
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PACKET_LOG_DATA// Size=0x68 (Id=2699)
{
    unsigned char LogData[36];// Offset=0x0 Size=0x24
    unsigned char ExtraBytes[36];// Offset=0x24 Size=0x24
    unsigned long long BcParam3;// Offset=0x48 Size=0x8
    unsigned long long BcParam4;// Offset=0x50 Size=0x8
    unsigned long LogDataLength;// Offset=0x58 Size=0x4
    unsigned short LogTag;// Offset=0x5c Size=0x2
    unsigned short Reserved;// Offset=0x5e Size=0x2
    union _WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS Flags;// Offset=0x60 Size=0x4
};
