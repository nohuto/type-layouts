struct _SCSI_SENSE_DESCRIPTOR_HEADER// Size=0x2 (Id=127)
{
    unsigned char DescriptorType;// Offset=0x0 Size=0x1
    unsigned char AdditionalLength;// Offset=0x1 Size=0x1
};

struct _SCSI_SENSE_DESCRIPTOR_INFORMATION// Size=0xc (Id=125)
{
    struct _SCSI_SENSE_DESCRIPTOR_HEADER Header;// Offset=0x0 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Valid:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned char Information[8];// Offset=0x4 Size=0x8
};
