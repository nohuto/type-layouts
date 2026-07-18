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

struct _SRBEX_DATA_SCSI_CDB32// Size=0x38 (Id=207)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char ScsiStatus;// Offset=0x8 Size=0x1
    unsigned char SenseInfoBufferLength;// Offset=0x9 Size=0x1
    unsigned char CdbLength;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
    unsigned long Reserved1;// Offset=0xc Size=0x4
    void * SenseInfoBuffer;// Offset=0x10 Size=0x8
    unsigned char Cdb[32];// Offset=0x18 Size=0x20
};
