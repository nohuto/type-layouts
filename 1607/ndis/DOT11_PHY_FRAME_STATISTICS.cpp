struct DOT11_PHY_FRAME_STATISTICS// Size=0x90 (Id=1265)
{
    unsigned long long ullTransmittedFrameCount;// Offset=0x0 Size=0x8
    unsigned long long ullMulticastTransmittedFrameCount;// Offset=0x8 Size=0x8
    unsigned long long ullFailedCount;// Offset=0x10 Size=0x8
    unsigned long long ullRetryCount;// Offset=0x18 Size=0x8
    unsigned long long ullMultipleRetryCount;// Offset=0x20 Size=0x8
    unsigned long long ullMaxTXLifetimeExceededCount;// Offset=0x28 Size=0x8
    unsigned long long ullTransmittedFragmentCount;// Offset=0x30 Size=0x8
    unsigned long long ullRTSSuccessCount;// Offset=0x38 Size=0x8
    unsigned long long ullRTSFailureCount;// Offset=0x40 Size=0x8
    unsigned long long ullACKFailureCount;// Offset=0x48 Size=0x8
    unsigned long long ullReceivedFrameCount;// Offset=0x50 Size=0x8
    unsigned long long ullMulticastReceivedFrameCount;// Offset=0x58 Size=0x8
    unsigned long long ullPromiscuousReceivedFrameCount;// Offset=0x60 Size=0x8
    unsigned long long ullMaxRXLifetimeExceededCount;// Offset=0x68 Size=0x8
    unsigned long long ullFrameDuplicateCount;// Offset=0x70 Size=0x8
    unsigned long long ullReceivedFragmentCount;// Offset=0x78 Size=0x8
    unsigned long long ullPromiscuousReceivedFragmentCount;// Offset=0x80 Size=0x8
    unsigned long long ullFCSErrorCount;// Offset=0x88 Size=0x8
};
