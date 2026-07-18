struct _MMVAD_FLAGS1// Size=0x4 (Id=946)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CommitCharge:31;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _anonymous_555// Size=0x4 (Id=555)
{
    unsigned long LongFlags1;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS1 VadFlags1;// Offset=0x0 Size=0x4
};
