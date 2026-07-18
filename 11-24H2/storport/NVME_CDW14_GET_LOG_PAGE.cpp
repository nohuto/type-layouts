union NVME_CDW14_GET_LOG_PAGE// Size=0x4 (Id=1216)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UUIDIndex:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned long Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x10
        unsigned long OT:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long CommandSetIdentifier:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
