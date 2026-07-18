struct _NEC_READ_CDDA// Size=0xa (Id=477)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved0;// Offset=0x1 Size=0x1
    unsigned char LogicalBlockByte0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockByte1;// Offset=0x3 Size=0x1
    unsigned char LogicalBlockByte2;// Offset=0x4 Size=0x1
    unsigned char LogicalBlockByte3;// Offset=0x5 Size=0x1
    unsigned char Reserved1;// Offset=0x6 Size=0x1
    unsigned char TransferBlockByte0;// Offset=0x7 Size=0x1
    unsigned char TransferBlockByte1;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};
