union _LARGE_INTEGER// Size=0x8 (Id=38)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5474)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _NDIS_SS_STOP_REASON
{
    NdisSSReasonUnspecified=0,
    NdisSSQueryRemove=1,
    NdisSSDeviceRemove=2,
    NdisSSDeviceSurpriseRemove=3,
    NdisSSQueryStop=4,
    NdisSSDeviceStop=5,
    NdisSSSystemPower=6,
    NdisSSNicQuiet=7,
    NdisSSPnPOp=8,
    NdisSSNotStarted=9,
    NdisSSApplyInterfaceChange=11,
    NdisSSMagicPacket=12,
    NdisSSBindChanges=13,
    NdisSSStopReasonMax=15
};

enum _NDIS_SS_BUSY_REASON
{
    NdisBusyOid=33,
    NdisBusyPause=34,
    NdisBusyRestart=35,
    NdisBusyReset=36,
    NdisBusyDevicePnPEvent=37,
    NdisBusyCheckForHang=49,
    NdisBusyDirectOid=50,
    NdisBusyCancelDirectOid=51,
    NdisBusySend=52,
    NdisBusyCancelSend=53,
    NdisBusyReceiveReturn=54,
    NdisBusyWaitWake=65
};

union _NDIS_SS_RESUME_REASON// Size=0x4 (Id=1392)
{
    enum _NDIS_SS_STOP_REASON StopReason;// Offset=0x0 Size=0x4
    enum _NDIS_SS_BUSY_REASON BusyReason;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
};

struct _NDIS_NAPS_TELEMETRY_REASON_DATA// Size=0x10 (Id=1933)
{
    unsigned short WakeCount;// Offset=0x0 Size=0x2
    unsigned short BusyCount;// Offset=0x2 Size=0x2
    union _NDIS_SS_RESUME_REASON Reason;// Offset=0x4 Size=0x4
    unsigned long long TotalTimeMs;// Offset=0x8 Size=0x8
};

struct _NDIS_NAPS_TELEMETRY_OID_DATA// Size=0xc (Id=1954)
{
    unsigned short WakeCount;// Offset=0x0 Size=0x2
    unsigned short BusyCount;// Offset=0x2 Size=0x2
    unsigned short Weight;// Offset=0x4 Size=0x2
    unsigned long Oid;// Offset=0x8 Size=0x4
};

struct _NDIS_NAPS_TELEMETRY_DATA// Size=0x390 (Id=1619)
{
    unsigned long StartingSuspendCount;// Offset=0x0 Size=0x4
    unsigned long long StartingResumeLatencyMs;// Offset=0x8 Size=0x8
    unsigned long long StartingSuspendTimeMs;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER StartTime;// Offset=0x18 Size=0x8
    struct _NDIS_NAPS_TELEMETRY_REASON_DATA Reasons[49];// Offset=0x20 Size=0x310
    struct _NDIS_NAPS_TELEMETRY_OID_DATA ReasonOids[8];// Offset=0x330 Size=0x60
};
