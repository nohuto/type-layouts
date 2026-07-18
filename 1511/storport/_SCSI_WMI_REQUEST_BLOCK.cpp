struct _SCSI_WMI_REQUEST_BLOCK// Size=0x58 (Id=276)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned char WMISubFunction;// Offset=0x4 Size=0x1
    unsigned char PathId;// Offset=0x5 Size=0x1
    unsigned char TargetId;// Offset=0x6 Size=0x1
    unsigned char Lun;// Offset=0x7 Size=0x1
    unsigned char Reserved1;// Offset=0x8 Size=0x1
    unsigned char WMIFlags;// Offset=0x9 Size=0x1
    unsigned char Reserved2[2];// Offset=0xa Size=0x2
    unsigned long SrbFlags;// Offset=0xc Size=0x4
    unsigned long DataTransferLength;// Offset=0x10 Size=0x4
    unsigned long TimeOutValue;// Offset=0x14 Size=0x4
    void * DataBuffer;// Offset=0x18 Size=0x8
    void * DataPath;// Offset=0x20 Size=0x8
    void * Reserved3;// Offset=0x28 Size=0x8
    void * OriginalRequest;// Offset=0x30 Size=0x8
    void * SrbExtension;// Offset=0x38 Size=0x8
    unsigned long Reserved4;// Offset=0x40 Size=0x4
    unsigned long Reserved6;// Offset=0x44 Size=0x4
    unsigned char Reserved5[16];// Offset=0x48 Size=0x10
};
