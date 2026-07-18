struct _CM_FLOPPY_DEVICE_DATA// Size=0x24 (Id=1166)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    char Size[8];// Offset=0x4 Size=0x8
    unsigned long MaxDensity;// Offset=0xc Size=0x4
    unsigned long MountDensity;// Offset=0x10 Size=0x4
    unsigned char StepRateHeadUnloadTime;// Offset=0x14 Size=0x1
    unsigned char HeadLoadTime;// Offset=0x15 Size=0x1
    unsigned char MotorOffTime;// Offset=0x16 Size=0x1
    unsigned char SectorLengthCode;// Offset=0x17 Size=0x1
    unsigned char SectorPerTrack;// Offset=0x18 Size=0x1
    unsigned char ReadWriteGapLength;// Offset=0x19 Size=0x1
    unsigned char DataTransferLength;// Offset=0x1a Size=0x1
    unsigned char FormatGapLength;// Offset=0x1b Size=0x1
    unsigned char FormatFillCharacter;// Offset=0x1c Size=0x1
    unsigned char HeadSettleTime;// Offset=0x1d Size=0x1
    unsigned char MotorSettleTime;// Offset=0x1e Size=0x1
    unsigned char MaximumTrackValue;// Offset=0x1f Size=0x1
    unsigned char DataTransferRate;// Offset=0x20 Size=0x1
};
