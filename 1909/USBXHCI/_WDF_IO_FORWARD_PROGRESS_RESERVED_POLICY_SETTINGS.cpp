struct _anonymous_851// Size=0x8 (Id=851)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _anonymous_852// Size=0x8 (Id=852)
{
    struct _anonymous_851 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=853)
{
    union _anonymous_852 Policy;// Offset=0x0 Size=0x8
};
