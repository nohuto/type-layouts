struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=707)
{
    union // Size=0x8 (Id=0)
    {
        union <unnamed-type-Policy>// Size=0x8 (Id=16592)
        {
            struct <unnamed-type-ExaminePolicy>// Size=0x8 (Id=16593)
            {
                enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
            };
            struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS::<unnamed-type-Policy>::<unnamed-type-ExaminePolicy> ExaminePolicy;// Offset=0x0 Size=0x8
        };
        union _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS::<unnamed-type-Policy> Policy;// Offset=0x0 Size=0x8
    };
};
