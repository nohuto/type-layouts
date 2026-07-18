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
    SrbExDataTypePassthroughDirect=160,
    SrbExDataTypeMSReservedStart=-268435456,
    SrbExDataTypeReserved=-1
};

struct _SRBEX_DATA_SCSI_CDB_VAR// Size=0x28 (Id=250)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char ScsiStatus;// Offset=0x8 Size=0x1
    unsigned char SenseInfoBufferLength;// Offset=0x9 Size=0x1
    unsigned char Reserved[2];// Offset=0xa Size=0x2
    unsigned long CdbLength;// Offset=0xc Size=0x4
    unsigned long Reserved1[2];// Offset=0x10 Size=0x8
    void * SenseInfoBuffer;// Offset=0x18 Size=0x8
    unsigned char Cdb[1];// Offset=0x20 Size=0x1
};
