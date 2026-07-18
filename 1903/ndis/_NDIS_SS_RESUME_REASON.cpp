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
