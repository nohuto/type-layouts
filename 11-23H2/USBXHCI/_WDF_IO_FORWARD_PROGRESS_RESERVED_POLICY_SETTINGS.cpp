struct _unnamed_964// Size=0x8 (Id=964)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_965// Size=0x8 (Id=965)
{
    struct _unnamed_964 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=966)
{
    union _unnamed_965 Policy;// Offset=0x0 Size=0x8
};
