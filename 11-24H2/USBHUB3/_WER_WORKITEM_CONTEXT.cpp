enum _HUB_WER_REPORT_TYPE
{
    HubWerSuccessfulReset=0,
    HubWerFailedReset=1,
    HubWerFailedEnumeration=2
};

struct _WER_WORKITEM_CONTEXT// Size=0x18 (Id=419)
{
    struct _HUB_FDO_CONTEXT * HubFdoContext;// Offset=0x0 Size=0x8
    struct _DEVICE_CONTEXT * DeviceContext;// Offset=0x8 Size=0x8
    enum _HUB_WER_REPORT_TYPE WerReportType;// Offset=0x10 Size=0x4
    unsigned long SubReason;// Offset=0x14 Size=0x4
};
