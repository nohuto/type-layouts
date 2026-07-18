struct _unnamed_635// Size=0x8 (Id=635)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_636// Size=0x8 (Id=636)
{
    struct _unnamed_635 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=637)
{
    union _unnamed_636 Policy;// Offset=0x0 Size=0x8
};
