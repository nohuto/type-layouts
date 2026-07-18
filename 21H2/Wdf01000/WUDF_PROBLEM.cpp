enum _WDF_HOST_EXIT_CODE
{
    WdfHostExit_StillActive=259,
    WdfHostExit_CodeUnknown=1879048192,
    WdfHostExit_InternalDriverStopReported=1879048193,
    WdfHostExit_InternalDriverStopReportFailed=1879048194,
    WdfHostExit_ExternalTermination=1879048195
};

enum _WUDFMESSAGE
{
    WudfMsg_Reserved=0,
    WudfMsg_IRP=1,
    WudfMsg_IRP_Completion=2,
    WudfMsg_CREATE_DEVICE_STACK=3,
    WudfMsg_ADD_DEVICE=4,
    WudfMsg_CREATE=5,
    WudfMsg_CLOSE=6,
    WudfMsg_CLEANUP=7,
    WudfMsg_READ=8,
    WudfMsg_WRITE=9,
    WudfMsg_IOCONTROL=10,
    WudfMsg_FLUSH=11,
    WudfMsg_QUERY_INFORMATION_FILE=12,
    WudfMsg_SET_INFORMATION_FILE=13,
    WudfMsg_Cancel=14,
    WudfMsg_POWER_IRP_COMPLETE=15,
    WudfMsg_USB_SS_EVENT=16,
    WudfMsg_CLOSE_DEVICE_STACK=17,
    WudfMsg_REMOTE_INTERFACE_ARRIVAL=18,
    WudfMsg_REMOTE_INTERFACE_REMOVAL=19,
    WudfMsg_TARGET_DEVICE_NOTIFICATION=20,
    WudfMsg_TRANSPORT_QUERY_ID=21,
    WudfMsg_COMPANION_ADD=22,
    WudfMsg_COMPANION_REMOVE=23,
    WudfMsg_COMPANION_SYNCHRONOUS_TASK=24,
    WudfMsg_COMPANION_EVENT=25,
    WudfMsg_FramworkMax=26,
    WudfMsg_ExitProcess=27,
    WdfProcMgmt_Message_Reserved=28,
    WdfProcMgmt_Message_ControlObjectName=29,
    WdfProcMgmt_Message_QueryProcess=30,
    WdfProcMgmt_Message_OpenProcess=31,
    WdfProcMgmt_Message_CloseProcess=32,
    WudfMsg_Connect=33,
    WudfMsg_WMI_POWER_DATA=34,
    WudfMsg_POFX_EVENT=35,
    WudfMsg_Max=36
};

struct WUDF_PROBLEM// Size=0x1c (Id=3297)
{
    enum WudfProblem ProblemCode;// Offset=0x0 Size=0x4
    enum WdfComponentType Detector;// Offset=0x4 Size=0x4
    enum _WDF_HOST_EXIT_CODE ExitCode;// Offset=0x8 Size=0x4
    enum WudfOperationType Operation;// Offset=0xc Size=0x4
    enum _WUDFMESSAGE Message;// Offset=0x10 Size=0x1
    unsigned short IrpInfo;// Offset=0x12 Size=0x2
    long Status;// Offset=0x14 Size=0x4
    enum WdfDeviceStartStateType DeviceStarted;// Offset=0x18 Size=0x4
    void InitReport(enum _WDF_HOST_EXIT_CODE ,enum WudfProblem ,enum WdfComponentType );
    unsigned int MessageWithIrpInfo();
    struct WUDF_PROBLEM * InitDisconnect(enum WdfComponentType );
    struct WUDF_PROBLEM * InitTimeout(enum WdfComponentType ,enum _WUDFMESSAGE );
    struct WUDF_PROBLEM * InitOperationFailure(enum WdfComponentType ,enum WudfOperationType ,enum _WUDFMESSAGE ,long );
    struct WUDF_PROBLEM * InitMessageFailure(enum WudfProblem ,enum WdfComponentType ,enum WudfOperationType ,enum _WUDFMESSAGE ,long ,unsigned short );
    struct WUDF_PROBLEM * InitFailedToExit(enum WdfComponentType ,long );
    struct WUDF_PROBLEM * InitLeakingHandle(enum WdfComponentType ,enum WudfOperationType ,enum _WUDFMESSAGE ,long );
    struct WUDF_PROBLEM * InitInvalidInterruptState(enum WdfComponentType ,enum WudfOperationType ,long );
    struct WUDF_PROBLEM * InitIsrTimedOut(enum WdfComponentType ,enum WudfOperationType ,long );
};
