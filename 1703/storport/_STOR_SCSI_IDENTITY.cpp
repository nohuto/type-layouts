struct _STRING// Size=0x10 (Id=198)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

struct _STOR_SCSI_IDENTITY// Size=0x38 (Id=191)
{
    struct _INQUIRYDATA * InquiryData;// Offset=0x0 Size=0x8
    struct _STRING SerialNumber;// Offset=0x8 Size=0x10
    unsigned char Supports1667;// Offset=0x18 Size=0x1
    struct _VPD_IDENTIFICATION_PAGE * DeviceId;// Offset=0x20 Size=0x8
    struct _STOR_ATA_DEVICE_ID * AtaDeviceId;// Offset=0x28 Size=0x8
    struct _STOR_RICH_DEVICE_DESCRIPTION * RichDeviceDescription;// Offset=0x30 Size=0x8
};
