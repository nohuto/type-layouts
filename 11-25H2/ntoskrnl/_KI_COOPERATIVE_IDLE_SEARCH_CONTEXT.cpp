union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID// Size=0x8 (Id=1997)
{
    unsigned long long FullId;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Empty:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MinorId:6;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x6
        unsigned long long MajorId:57;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x39
    };
};

struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT// Size=0x430 (Id=2235)
{
    unsigned long long SearchContextLock;// Offset=0x0 Size=0x8
    unsigned long long SearchingProcessors;// Offset=0x8 Size=0x8
    union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID NextGenerationId;// Offset=0x10 Size=0x8
    union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID GenerationIds[64];// Offset=0x18 Size=0x200
    struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION * Generations[64];// Offset=0x218 Size=0x200
    unsigned long long Affinity;// Offset=0x418 Size=0x8
    unsigned short AllocatedTargetEntries;// Offset=0x420 Size=0x2
    unsigned short ActiveTargetEntries;// Offset=0x422 Size=0x2
    unsigned char LowProcIndex;// Offset=0x424 Size=0x1
    unsigned char HighProcIndex;// Offset=0x425 Size=0x1
    unsigned short Group;// Offset=0x426 Size=0x2
    unsigned char ExtensionStart[1];// Offset=0x428 Size=0x1
};
