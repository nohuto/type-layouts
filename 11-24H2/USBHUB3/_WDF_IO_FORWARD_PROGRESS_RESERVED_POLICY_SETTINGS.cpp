struct _unnamed_819// Size=0x8 (Id=819)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_820// Size=0x8 (Id=820)
{
    struct _unnamed_819 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=821)
{
    union _unnamed_820 Policy;// Offset=0x0 Size=0x8
};
