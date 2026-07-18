enum _SRBEXDATATYPE
{
    SrbExDataTypeUnknown=0,
    SrbExDataTypeBidirectional=1,
    SrbExDataTypeScsiCdb16=64,
    SrbExDataTypeScsiCdb32=65,
    SrbExDataTypeScsiCdbVar=66,
    SrbExDataTypeWmi=96,
    SrbExDataTypePower=97,
    SrbExDataTypePnP=98,
    SrbExDataTypeIoInfo=128,
    SrbExDataTypeMSReservedStart=-268435456,
    SrbExDataTypeReserved=-1
};

struct _SRBEX_DATA_WMI// Size=0x18 (Id=296)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char WMISubFunction;// Offset=0x8 Size=0x1
    unsigned char WMIFlags;// Offset=0x9 Size=0x1
    unsigned char Reserved[2];// Offset=0xa Size=0x2
    unsigned long Reserved1;// Offset=0xc Size=0x4
    void * DataPath;// Offset=0x10 Size=0x8
};
