struct _unnamed_721// Size=0x8 (Id=721)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_722// Size=0x8 (Id=722)
{
    struct _unnamed_721 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=723)
{
    union _unnamed_722 Policy;// Offset=0x0 Size=0x8
};
