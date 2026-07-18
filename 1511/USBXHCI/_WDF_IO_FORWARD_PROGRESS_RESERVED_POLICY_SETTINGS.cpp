struct _unnamed_589// Size=0x8 (Id=589)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_590// Size=0x8 (Id=590)
{
    struct _unnamed_589 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=591)
{
    union _unnamed_590 Policy;// Offset=0x0 Size=0x8
};
