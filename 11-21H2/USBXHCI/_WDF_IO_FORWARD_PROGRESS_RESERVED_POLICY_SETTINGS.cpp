struct _unnamed_903// Size=0x8 (Id=903)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_904// Size=0x8 (Id=904)
{
    struct _unnamed_903 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=905)
{
    union _unnamed_904 Policy;// Offset=0x0 Size=0x8
};
