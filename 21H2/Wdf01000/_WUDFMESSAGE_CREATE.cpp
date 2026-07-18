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

struct _WUDFMESSAGE_HEADER// Size=0x1 (Id=3280)
{
    enum _WUDFMESSAGE Message;// Offset=0x0 Size=0x1
};

struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WUDFMESSAGE_IO_HEADER// Size=0x30 (Id=3353)
{
    struct _WUDFMESSAGE_HEADER Header;// Offset=0x0 Size=0x1
    void * Irp;// Offset=0x8 Size=0x8
    unsigned long long RequestId;// Offset=0x10 Size=0x8
    unsigned long ProcessId;// Offset=0x18 Size=0x4
    unsigned char Is32bitProcess;// Offset=0x1c Size=0x1
    char RequestorMode;// Offset=0x1d Size=0x1
    unsigned char DirectMappedTransfer;// Offset=0x1e Size=0x1
    unsigned char IsActivityIdSet;// Offset=0x1f Size=0x1
    struct _GUID ActivityId;// Offset=0x20 Size=0x10
};

struct _WUDFMESSAGE_CREATE// Size=0x68 (Id=3364)
{
    union // Size=0x1 (Id=0)
    {
        struct _WUDFMESSAGE_HEADER Header;// Offset=0x0 Size=0x1
        struct _WUDFMESSAGE_IO_HEADER IoHeader;// Offset=0x0 Size=0x30
    };
    struct WUDF_DEVNODE_CONTEXT__ * DevnodeContext;// Offset=0x30 Size=0x8
    unsigned long long FileNameByteLength;// Offset=0x38 Size=0x8
    unsigned long Options;// Offset=0x40 Size=0x4
    unsigned short FileAttributes;// Offset=0x44 Size=0x2
    unsigned short ShareAccess;// Offset=0x46 Size=0x2
    unsigned long DesiredAccess;// Offset=0x48 Size=0x4
    struct WUDF_CREATE_CONTEXT__ * RelatedCreateContext;// Offset=0x50 Size=0x8
    unsigned long InitiatorProcessId;// Offset=0x58 Size=0x4
    struct RD_FILE_OBJECT_CONTEXT__ * RdFileObjectContext;// Offset=0x60 Size=0x8
    long Validate(void * );
};
