struct _unnamed_727// Size=0x8 (Id=727)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_728// Size=0x8 (Id=728)
{
    struct _unnamed_727 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=729)
{
    union _unnamed_728 Policy;// Offset=0x0 Size=0x8
};
