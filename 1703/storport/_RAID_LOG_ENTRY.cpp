enum _DBG_LOG_REASON
{
    LogCallMiniportStartIo=0,
    LogMiniportCompletion=1,
    LogRequestComplete=2,
    LogSubmitRequest=3,
    LogPauseDevice=4,
    LogResumeDevice=5,
    LogPauseAdapter=6,
    LogResumeAdapter=7,
    LogRestartUnit=8,
    LogUnitTimeout=9,
    LogResetWorkitemTimeout=10,
    LogCallBusReset=11,
    LogStorPortCompleteRequest=12,
    LogStorPortCompleteRequestSrb=13,
    LogMiniportPauseAdapter=14,
    LogMiniportResumeAdapter=15,
    LogMiniportPauseDevice=16,
    LogMiniportResumeDevice=17,
    LogMiniportAdapterBusy=18,
    LogMiniportAdapterReady=19,
    LogMiniportDeviceBusy=20,
    LogMiniportDeviceReady=21,
    LogFailedAllocDeferredAction=22,
    LogUnitPnpStartReceived=23,
    LogUnitPnpStopReceived=24,
    LogUnitPnpRemoveReceived=25,
    LogUnitPnpSurpriseRemovalReceived=26,
    LogAdptPnpStartReceived=27,
    LogAdptPnpStopReceived=28,
    LogAdptPnpRemoveReceived=29,
    LogAdptPnpSurpriseRemovalReceived=30,
    LogAdptPnpQDR=31,
    LogUnitSetPowerReceived=32,
    LogUnitQueryPowerReceived=33,
    LogAdptSetPowerReceived=34,
    LogAdptQueryPowerReceived=35,
    LogCallMiniportBuildIo=36,
    LogMiniportBuildIoReturnFailure=37
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _RAID_LOG_ENTRY// Size=0x30 (Id=260)
{
    enum _DBG_LOG_REASON Reason;// Offset=0x0 Size=0x4
    unsigned long long Parameter1;// Offset=0x8 Size=0x8
    unsigned long long Parameter2;// Offset=0x10 Size=0x8
    unsigned long long Parameter3;// Offset=0x18 Size=0x8
    unsigned long long Parameter4;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER Timestamp;// Offset=0x28 Size=0x8
};
