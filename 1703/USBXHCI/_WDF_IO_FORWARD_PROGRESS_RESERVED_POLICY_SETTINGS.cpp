struct _unnamed_755// Size=0x8 (Id=755)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_756// Size=0x8 (Id=756)
{
    struct _unnamed_755 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=757)
{
    union _unnamed_756 Policy;// Offset=0x0 Size=0x8
};
