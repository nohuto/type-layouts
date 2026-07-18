struct _unnamed_692// Size=0x8 (Id=692)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_693// Size=0x8 (Id=693)
{
    struct _unnamed_692 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=694)
{
    union _unnamed_693 Policy;// Offset=0x0 Size=0x8
};
