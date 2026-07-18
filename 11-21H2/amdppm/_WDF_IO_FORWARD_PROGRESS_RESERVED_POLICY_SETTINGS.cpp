struct _unnamed_690// Size=0x8 (Id=690)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_691// Size=0x8 (Id=691)
{
    struct _unnamed_690 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=692)
{
    union _unnamed_691 Policy;// Offset=0x0 Size=0x8
};
