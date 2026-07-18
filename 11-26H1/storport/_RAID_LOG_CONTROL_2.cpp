struct _unnamed_1330// Size=0x8 (Id=1330)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CallMiniportBuildIo:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CallMiniportStartIo:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long MiniportCompletion:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RequestComplete:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long SubmitRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long BadPractices:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long PnpMain:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long PowerMain:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long PauseResumeBusy:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long ResetTimeout:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Failure:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long SmrIo:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ForwardedIo:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
    };
};

union _unnamed_1331// Size=0x8 (Id=1331)
{
    struct _unnamed_1330 u;// Offset=0x0 Size=0x8
    unsigned long long asUlong64;// Offset=0x0 Size=0x8
};

struct _RAID_LOG_CONTROL// Size=0x10 (Id=1329)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    union _unnamed_1331 Enable;// Offset=0x8 Size=0x8
};
