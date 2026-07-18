struct _unnamed_791// Size=0x8 (Id=791)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_792// Size=0x8 (Id=792)
{
    struct _unnamed_791 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=793)
{
    union _unnamed_792 Policy;// Offset=0x0 Size=0x8
};
