struct _unnamed_581// Size=0x8 (Id=581)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_582// Size=0x8 (Id=582)
{
    struct _unnamed_581 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=583)
{
    union _unnamed_582 Policy;// Offset=0x0 Size=0x8
};
