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

struct _SRBEX_DATA// Size=0x10 (Id=219)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Data[1];// Offset=0x8 Size=0x1
};
