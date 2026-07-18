struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS_V1_23// Size=0x8 (Id=4628)
{
    union // Size=0x8 (Id=0)
    {
        union <unnamed-type-Policy>// Size=0x8 (Id=21457)
        {
            struct <unnamed-type-ExaminePolicy>// Size=0x8 (Id=21458)
            {
                enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
            };
            struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS_V1_23::<unnamed-type-Policy>::<unnamed-type-ExaminePolicy> ExaminePolicy;// Offset=0x0 Size=0x8
        };
        union _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS_V1_23::<unnamed-type-Policy> Policy;// Offset=0x0 Size=0x8
    };
};
