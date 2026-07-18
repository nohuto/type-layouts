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

struct _WUDFMESSAGE_HEADER// Size=0x1 (Id=3727)
{
    enum _WUDFMESSAGE Message;// Offset=0x0 Size=0x1
};

struct _WUDFMESSAGE_TRANSPORT_QUERY_ID// Size=0x18 (Id=3791)
{
    struct _WUDFMESSAGE_HEADER Header;// Offset=0x0 Size=0x1
    struct WUDF_DEVNODE_CONTEXT__ * DevnodeContext;// Offset=0x8 Size=0x8
    unsigned long Id;// Offset=0x10 Size=0x4
    unsigned long BufferSize;// Offset=0x14 Size=0x4
    long Validate(void * ,unsigned long long );
};
