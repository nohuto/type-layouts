struct DOT11_MAC_FRAME_STATISTICS// Size=0x70 (Id=1092)
{
    unsigned long long ullTransmittedFrameCount;// Offset=0x0 Size=0x8
    unsigned long long ullReceivedFrameCount;// Offset=0x8 Size=0x8
    unsigned long long ullTransmittedFailureFrameCount;// Offset=0x10 Size=0x8
    unsigned long long ullReceivedFailureFrameCount;// Offset=0x18 Size=0x8
    unsigned long long ullWEPExcludedCount;// Offset=0x20 Size=0x8
    unsigned long long ullTKIPLocalMICFailures;// Offset=0x28 Size=0x8
    unsigned long long ullTKIPReplays;// Offset=0x30 Size=0x8
    unsigned long long ullTKIPICVErrorCount;// Offset=0x38 Size=0x8
    unsigned long long ullCCMPReplays;// Offset=0x40 Size=0x8
    unsigned long long ullCCMPDecryptErrors;// Offset=0x48 Size=0x8
    unsigned long long ullWEPUndecryptableCount;// Offset=0x50 Size=0x8
    unsigned long long ullWEPICVErrorCount;// Offset=0x58 Size=0x8
    unsigned long long ullDecryptSuccessCount;// Offset=0x60 Size=0x8
    unsigned long long ullDecryptFailureCount;// Offset=0x68 Size=0x8
};
