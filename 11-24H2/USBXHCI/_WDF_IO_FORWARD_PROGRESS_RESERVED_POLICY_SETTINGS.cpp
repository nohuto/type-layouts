struct _unnamed_999// Size=0x8 (Id=999)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_1000// Size=0x8 (Id=1000)
{
    struct _unnamed_999 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=1001)
{
    union _unnamed_1000 Policy;// Offset=0x0 Size=0x8
};
