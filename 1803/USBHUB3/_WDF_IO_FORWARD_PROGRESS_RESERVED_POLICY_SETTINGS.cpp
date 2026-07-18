struct _unnamed_665// Size=0x8 (Id=665)
{
    enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
};

union _unnamed_666// Size=0x8 (Id=666)
{
    struct _unnamed_665 ExaminePolicy;// Offset=0x0 Size=0x8
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=667)
{
    union _unnamed_666 Policy;// Offset=0x0 Size=0x8
};
