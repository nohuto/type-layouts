union NVME_ADMIN_SUBMISSION_QUEUE_BASE_ADDRESS// Size=0x8 (Id=1260)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved0:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
        unsigned long long ASQB:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
