struct _unnamed_572// Size=0x8 (Id=572)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_573// Size=0x8 (Id=573)
{
    struct _unnamed_572 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=574)
{
    union _unnamed_573 Policy;// Offset=0x0 Size=0x8
};
