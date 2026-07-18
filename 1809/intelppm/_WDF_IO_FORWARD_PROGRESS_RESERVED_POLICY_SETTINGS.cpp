struct _unnamed_644// Size=0x8 (Id=644)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_645// Size=0x8 (Id=645)
{
    struct _unnamed_644 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=646)
{
    union _unnamed_645 Policy;// Offset=0x0 Size=0x8
};
