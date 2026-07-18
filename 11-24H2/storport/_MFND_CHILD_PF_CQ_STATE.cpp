union _unnamed_933// Size=0x1 (Id=933)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char CompletionPhaseTag:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _MFND_CHILD_PF_CQ_STATE// Size=0x8 (Id=934)
{
    unsigned short QueueID;// Offset=0x0 Size=0x2
    unsigned short HeadPointer;// Offset=0x2 Size=0x2
    unsigned short TailPointer;// Offset=0x4 Size=0x2
    union _unnamed_933 Flags;// Offset=0x6 Size=0x1
    unsigned char Reserved;// Offset=0x7 Size=0x1
};
