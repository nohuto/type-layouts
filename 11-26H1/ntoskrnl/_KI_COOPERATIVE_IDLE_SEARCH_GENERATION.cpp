union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID// Size=0x8 (Id=2344)
{
    unsigned long long FullId;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Empty:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MinorId:6;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x6
        unsigned long long MajorId:57;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x39
    };
};

struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION// Size=0x18 (Id=1908)
{
    union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID GenerationId;// Offset=0x0 Size=0x8
    unsigned short AllocatedTargetEntries;// Offset=0x8 Size=0x2
    unsigned short ActiveTargetEntries;// Offset=0xa Size=0x2
    unsigned long Spare;// Offset=0xc Size=0x4
    unsigned char ExtensionStart[1];// Offset=0x10 Size=0x1
};
