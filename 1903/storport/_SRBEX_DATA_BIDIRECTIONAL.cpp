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

struct _SRBEX_DATA_BIDIRECTIONAL// Size=0x18 (Id=311)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long DataInTransferLength;// Offset=0x8 Size=0x4
    unsigned long Reserved1;// Offset=0xc Size=0x4
    void * DataInBuffer;// Offset=0x10 Size=0x8
};
