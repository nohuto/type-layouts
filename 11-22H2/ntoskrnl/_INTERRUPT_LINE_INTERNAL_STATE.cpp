struct _INTERRUPT_LINE_INTERNAL_STATE// Size=0x10 (Id=329)
{
    unsigned char Fixed;// Offset=0x0 Size=0x1
    unsigned char Irql;// Offset=0x1 Size=0x1
    unsigned char Swapping;// Offset=0x2 Size=0x1
    unsigned long OldClusterId;// Offset=0x4 Size=0x4
    unsigned long OldClusterMask;// Offset=0x8 Size=0x4
    unsigned char LineStateDetermined;// Offset=0xc Size=0x1
};
