struct _MI_CLONE_BLOCK_FLAGS// Size=0x8 (Id=1815)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long CloneProtection:5;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x5
            unsigned long long ReducedCommitReferences:55;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x37
            unsigned long long ScpPage:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
            unsigned long long Spare:2;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x2
            unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        long long EntireField;// Offset=0x0 Size=0x8
    };
};
