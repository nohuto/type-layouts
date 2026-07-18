struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS// Size=0x10 (Id=1068)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Version;// Offset=0x0 Size=0x4
        union <unnamed-type-ConnectionContext>// Size=0x8 (Id=11334)
        {
            void * Generic;// Offset=0x0 Size=0x8
            struct _KINTERRUPT * InterruptObject;// Offset=0x0 Size=0x8
            struct _IO_INTERRUPT_MESSAGE_INFO * InterruptMessageTable;// Offset=0x0 Size=0x8
        };
    };
    union _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS::<unnamed-type-ConnectionContext> ConnectionContext;// Offset=0x8 Size=0x8
};
