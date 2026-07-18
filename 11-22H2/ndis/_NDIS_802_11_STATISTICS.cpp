union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5482)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_802_11_STATISTICS// Size=0xc8 (Id=1124)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    union _LARGE_INTEGER TransmittedFragmentCount;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MulticastTransmittedFrameCount;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER FailedCount;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER RetryCount;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER MultipleRetryCount;// Offset=0x28 Size=0x8
    union _LARGE_INTEGER RTSSuccessCount;// Offset=0x30 Size=0x8
    union _LARGE_INTEGER RTSFailureCount;// Offset=0x38 Size=0x8
    union _LARGE_INTEGER ACKFailureCount;// Offset=0x40 Size=0x8
    union _LARGE_INTEGER FrameDuplicateCount;// Offset=0x48 Size=0x8
    union _LARGE_INTEGER ReceivedFragmentCount;// Offset=0x50 Size=0x8
    union _LARGE_INTEGER MulticastReceivedFrameCount;// Offset=0x58 Size=0x8
    union _LARGE_INTEGER FCSErrorCount;// Offset=0x60 Size=0x8
    union _LARGE_INTEGER TKIPLocalMICFailures;// Offset=0x68 Size=0x8
    union _LARGE_INTEGER TKIPICVErrorCount;// Offset=0x70 Size=0x8
    union _LARGE_INTEGER TKIPCounterMeasuresInvoked;// Offset=0x78 Size=0x8
    union _LARGE_INTEGER TKIPReplays;// Offset=0x80 Size=0x8
    union _LARGE_INTEGER CCMPFormatErrors;// Offset=0x88 Size=0x8
    union _LARGE_INTEGER CCMPReplays;// Offset=0x90 Size=0x8
    union _LARGE_INTEGER CCMPDecryptErrors;// Offset=0x98 Size=0x8
    union _LARGE_INTEGER FourWayHandshakeFailures;// Offset=0xa0 Size=0x8
    union _LARGE_INTEGER WEPUndecryptableCount;// Offset=0xa8 Size=0x8
    union _LARGE_INTEGER WEPICVErrorCount;// Offset=0xb0 Size=0x8
    union _LARGE_INTEGER DecryptSuccessCount;// Offset=0xb8 Size=0x8
    union _LARGE_INTEGER DecryptFailureCount;// Offset=0xc0 Size=0x8
};
