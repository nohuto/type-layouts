struct _unnamed_578// Size=0x8 (Id=578)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_579// Size=0x8 (Id=579)
{
    struct _unnamed_578 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=580)
{
    union _unnamed_579 Policy;// Offset=0x0 Size=0x8
};
