struct _PSP_CRITICAL_PROCESS_DEATH_USER_MODULES// Size=0x28 (Id=1810)
{
    struct _LDR_DATA_TABLE_ENTRY * Modules;// Offset=0x0 Size=0x8
    unsigned long ModuleCount;// Offset=0x8 Size=0x4
    unsigned long BufferSize;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ModulesCollected:1;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x10 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        unsigned long AllFlags;// Offset=0x10 Size=0x4
    };
    unsigned long FramesWalkedCount;// Offset=0x14 Size=0x4
    unsigned long ModulesInspectedCount;// Offset=0x18 Size=0x4
    unsigned long ErrorCode;// Offset=0x1c Size=0x4
    void * Buffer;// Offset=0x20 Size=0x8
};
