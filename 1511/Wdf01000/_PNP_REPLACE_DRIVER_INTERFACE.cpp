struct _PNP_REPLACE_DRIVER_INTERFACE// Size=0x60 (Id=3576)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    void  ( * Unload)();// Offset=0x10 Size=0x8
    long  ( * BeginReplace)(struct _PNP_REPLACE_PARAMETERS * ,void ** );// Offset=0x18 Size=0x8
    long  ( * EndReplace)(void * );// Offset=0x20 Size=0x8
    long  ( * MirrorPhysicalMemory)(void * ,union _LARGE_INTEGER ,union _LARGE_INTEGER );// Offset=0x28 Size=0x8
    long  ( * SetProcessorId)(void * ,unsigned long ,unsigned char );// Offset=0x30 Size=0x8
    long  ( * Swap)(void * );// Offset=0x38 Size=0x8
    long  ( * InitiateHardwareMirror)(void * );// Offset=0x40 Size=0x8
    long  ( * MirrorPlatformMemory)(void * );// Offset=0x48 Size=0x8
    long  ( * GetMemoryDestination)(void * ,union _LARGE_INTEGER ,union _LARGE_INTEGER * );// Offset=0x50 Size=0x8
    long  ( * EnableDisableHardwareQuiesce)(void * ,unsigned char );// Offset=0x58 Size=0x8
};
