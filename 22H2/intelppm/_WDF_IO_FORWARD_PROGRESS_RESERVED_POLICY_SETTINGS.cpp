struct _anonymous_681// Size=0x8 (Id=681)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_682// Size=0x8 (Id=682)
{
    struct _anonymous_681 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=683)
{
    union _anonymous_682 Policy;// Offset=0x0 Size=0x8
};
