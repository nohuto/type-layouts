struct _anonymous_881// Size=0x8 (Id=881)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_882// Size=0x8 (Id=882)
{
    struct _anonymous_881 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=883)
{
    union _anonymous_882 Policy;// Offset=0x0 Size=0x8
};
