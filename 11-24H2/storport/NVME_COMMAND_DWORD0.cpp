union NVME_COMMAND_DWORD0// Size=0x4 (Id=573)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long OPC:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long FUSE:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long PSDT:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long CID:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
