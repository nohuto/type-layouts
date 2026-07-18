union _LARGE_INTEGER// Size=0x8 (Id=1084)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=13869)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION// Size=0x3c (Id=2180)
{
    void * TimeTrackingHandle;// Offset=0x0 Size=0x8
    unsigned long InputFrameNumber;// Offset=0x8 Size=0x4
    unsigned long InputMicroFrameNumber;// Offset=0xc Size=0x4
    union _LARGE_INTEGER QueryPerformanceCounterAtInputFrameOrMicroFrame;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER QueryPerformanceCounterFrequency;// Offset=0x18 Size=0x8
    unsigned long PredictedAccuracyInMicroSeconds;// Offset=0x20 Size=0x4
    unsigned long CurrentGenerationID;// Offset=0x24 Size=0x4
    union _LARGE_INTEGER CurrentQueryPerformanceCounter;// Offset=0x28 Size=0x8
    unsigned long CurrentHardwareFrameNumber;// Offset=0x30 Size=0x4
    unsigned long CurrentHardwareMicroFrameNumber;// Offset=0x34 Size=0x4
    unsigned long CurrentUSBFrameNumber;// Offset=0x38 Size=0x4
};
