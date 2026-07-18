struct _PEP_PPM_IDLE_SELECT// Size=0x28 (Id=561)
{
    struct _PEP_PROCESSOR_IDLE_CONSTRAINTS * Constraints;// Offset=0x0 Size=0x8
    unsigned char AbortTransition;// Offset=0x8 Size=0x1
    unsigned long IdleStateIndex;// Offset=0xc Size=0x4
    unsigned long DependencyArrayUsed;// Offset=0x10 Size=0x4
    unsigned long DependencyArrayCount;// Offset=0x14 Size=0x4
    struct _PEP_PROCESSOR_IDLE_DEPENDENCY * DependencyArray;// Offset=0x18 Size=0x8
    unsigned long PlatformIdleStateIndex;// Offset=0x20 Size=0x4
};
