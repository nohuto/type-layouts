struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_QOS_PARAMETERS// Size=0x34 (Id=1050)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long NumTrafficClasses;// Offset=0x8 Size=0x4
    unsigned char PriorityAssignmentTable[8];// Offset=0xc Size=0x8
    unsigned char TcBandwidthAssignmentTable[8];// Offset=0x14 Size=0x8
    unsigned char TsaAssignmentTable[8];// Offset=0x1c Size=0x8
    unsigned long PfcEnable;// Offset=0x24 Size=0x4
    unsigned long NumClassificationElements;// Offset=0x28 Size=0x4
    unsigned long ClassificationElementSize;// Offset=0x2c Size=0x4
    unsigned long FirstClassificationElementOffset;// Offset=0x30 Size=0x4
};
