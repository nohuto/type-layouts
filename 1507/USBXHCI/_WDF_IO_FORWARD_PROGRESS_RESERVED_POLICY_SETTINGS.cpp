struct _unnamed_588// Size=0x8 (Id=588)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_589// Size=0x8 (Id=589)
{
    struct _unnamed_588 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=590)
{
    union _unnamed_589 Policy;// Offset=0x0 Size=0x8
};
