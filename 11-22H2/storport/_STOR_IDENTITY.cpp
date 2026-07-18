struct _STRING// Size=0x10 (Id=237)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_229// Size=0x2 (Id=229)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Supports1667:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ZonedDevice:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short ZNSDevice:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
};

struct _STOR_IDENTITY// Size=0x38 (Id=230)
{
    struct _INQUIRYDATA * InquiryData;// Offset=0x0 Size=0x8
    struct _STRING SerialNumber;// Offset=0x8 Size=0x10
    struct _unnamed_229 Flags;// Offset=0x18 Size=0x2
    struct _VPD_IDENTIFICATION_PAGE * DeviceId;// Offset=0x20 Size=0x8
    struct _STOR_ATA_DEVICE_ID * AtaDeviceId;// Offset=0x28 Size=0x8
    struct _STOR_RICH_DEVICE_DESCRIPTION * RichDeviceDescription;// Offset=0x30 Size=0x8
};
