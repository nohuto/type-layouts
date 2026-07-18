struct _unnamed_544// Size=0x8 (Id=544)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_545// Size=0x8 (Id=545)
{
    struct _unnamed_544 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=546)
{
    union _unnamed_545 Policy;// Offset=0x0 Size=0x8
};
