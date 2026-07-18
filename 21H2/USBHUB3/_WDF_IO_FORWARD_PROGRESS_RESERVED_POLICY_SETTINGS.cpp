struct _anonymous_711// Size=0x8 (Id=711)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_712// Size=0x8 (Id=712)
{
    struct _anonymous_711 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=713)
{
    union _anonymous_712 Policy;// Offset=0x0 Size=0x8
};
