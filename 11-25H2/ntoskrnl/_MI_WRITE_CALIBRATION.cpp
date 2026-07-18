struct _MI_WRITE_CALIBRATION// Size=0x38 (Id=2515)
{
    unsigned long MaximumNumberProcessors;// Offset=0x0 Size=0x4
    unsigned char OptimalWriteType;// Offset=0x4 Size=0x1
    unsigned char CalibrationCompleted;// Offset=0x5 Size=0x1
    unsigned char CalibrationFinal[2];// Offset=0x6 Size=0x2
    unsigned long long PerProcessorNumberOfBytes;// Offset=0x8 Size=0x8
    unsigned long long PerProcessorBandwidth[2];// Offset=0x10 Size=0x10
    unsigned long OptimalWriteProcessors[2][2];// Offset=0x20 Size=0x10
    struct _MI_WRITE_MODES * PureZeroing;// Offset=0x30 Size=0x8
};
