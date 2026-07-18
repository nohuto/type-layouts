struct _SCSI_SENSE_DESCRIPTOR_HEADER// Size=0x2 (Id=125)
{
    unsigned char DescriptorType;// Offset=0x0 Size=0x1
    unsigned char AdditionalLength;// Offset=0x1 Size=0x1
};

struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND// Size=0x4 (Id=124)
{
    struct _SCSI_SENSE_DESCRIPTOR_HEADER Header;// Offset=0x0 Size=0x2
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved2:5;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char IncorrectLength:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Reserved3:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};
