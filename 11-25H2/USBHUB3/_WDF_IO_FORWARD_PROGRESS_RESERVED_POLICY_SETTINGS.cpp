struct _unnamed_816// Size=0x8 (Id=816)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_817// Size=0x8 (Id=817)
{
    struct _unnamed_816 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=818)
{
    union _unnamed_817 Policy;// Offset=0x0 Size=0x8
};
