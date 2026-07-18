struct _anonymous_882// Size=0x8 (Id=882)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_883// Size=0x8 (Id=883)
{
    struct _anonymous_882 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=884)
{
    union _anonymous_883 Policy;// Offset=0x0 Size=0x8
};
