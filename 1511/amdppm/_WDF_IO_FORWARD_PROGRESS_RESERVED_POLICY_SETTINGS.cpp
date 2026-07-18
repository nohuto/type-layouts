struct _unnamed_396// Size=0x8 (Id=396)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_397// Size=0x8 (Id=397)
{
    struct _unnamed_396 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=398)
{
    union _unnamed_397 Policy;// Offset=0x0 Size=0x8
};
