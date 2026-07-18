struct _anonymous_942// Size=0x8 (Id=942)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_943// Size=0x8 (Id=943)
{
    struct _anonymous_942 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=944)
{
    union _anonymous_943 Policy;// Offset=0x0 Size=0x8
};
