struct _unnamed_716// Size=0x8 (Id=716)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_717// Size=0x8 (Id=717)
{
    struct _unnamed_716 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=718)
{
    union _unnamed_717 Policy;// Offset=0x0 Size=0x8
};
