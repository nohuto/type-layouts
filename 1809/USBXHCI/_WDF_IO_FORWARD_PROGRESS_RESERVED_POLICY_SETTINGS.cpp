struct _unnamed_837// Size=0x8 (Id=837)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_838// Size=0x8 (Id=838)
{
    struct _unnamed_837 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=839)
{
    union _unnamed_838 Policy;// Offset=0x0 Size=0x8
};
