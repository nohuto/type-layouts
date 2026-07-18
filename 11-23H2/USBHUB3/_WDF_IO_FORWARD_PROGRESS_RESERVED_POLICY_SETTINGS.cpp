struct _unnamed_793// Size=0x8 (Id=793)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_794// Size=0x8 (Id=794)
{
    struct _unnamed_793 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=795)
{
    union _unnamed_794 Policy;// Offset=0x0 Size=0x8
};
