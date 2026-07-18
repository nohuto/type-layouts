struct _PERFINFO_SAMPLED_PROFILE_INFORMATION// Size=0x10 (Id=2244)
{
    void * InstructionPointer;// Offset=0x0 Size=0x8
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    unsigned short Count;// Offset=0xc Size=0x2
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ExecutingDpc:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char ExecutingIsr:1;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Reserved:1;// Offset=0xe Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Priority:5;// Offset=0xe Size=0x1 BitOffset=0x3 BitSize=0x5
        };
        unsigned char Flags;// Offset=0xe Size=0x1
    };
    unsigned char Rank;// Offset=0xf Size=0x1
};
