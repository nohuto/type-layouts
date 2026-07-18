struct _anonymous_647// Size=0x8 (Id=647)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_648// Size=0x8 (Id=648)
{
    struct _anonymous_647 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=649)
{
    union _anonymous_648 Policy;// Offset=0x0 Size=0x8
};
