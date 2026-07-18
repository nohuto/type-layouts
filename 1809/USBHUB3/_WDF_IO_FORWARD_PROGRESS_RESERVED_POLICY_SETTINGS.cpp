struct _unnamed_676// Size=0x8 (Id=676)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_677// Size=0x8 (Id=677)
{
    struct _unnamed_676 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=678)
{
    union _unnamed_677 Policy;// Offset=0x0 Size=0x8
};
