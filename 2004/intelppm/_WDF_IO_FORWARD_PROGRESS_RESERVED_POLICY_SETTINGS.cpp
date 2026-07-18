struct _anonymous_679// Size=0x8 (Id=679)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_680// Size=0x8 (Id=680)
{
    struct _anonymous_679 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=681)
{
    union _anonymous_680 Policy;// Offset=0x0 Size=0x8
};
