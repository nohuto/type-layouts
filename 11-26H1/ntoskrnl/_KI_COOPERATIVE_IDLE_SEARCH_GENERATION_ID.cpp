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
