struct _PNP_REPLACE_PARAMETERS// Size=0x40 (Id=2886)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long long Target;// Offset=0x8 Size=0x8
    unsigned long long Spare;// Offset=0x10 Size=0x8
    struct _PNP_REPLACE_PROCESSOR_LIST * TargetProcessors;// Offset=0x18 Size=0x8
    struct _PNP_REPLACE_PROCESSOR_LIST * SpareProcessors;// Offset=0x20 Size=0x8
    struct _PNP_REPLACE_MEMORY_LIST * TargetMemory;// Offset=0x28 Size=0x8
    struct _PNP_REPLACE_MEMORY_LIST * SpareMemory;// Offset=0x30 Size=0x8
    long  ( * MapMemory)(union _LARGE_INTEGER ,union _LARGE_INTEGER ,union _LARGE_INTEGER * ,void ** ,void ** );// Offset=0x38 Size=0x8
};
