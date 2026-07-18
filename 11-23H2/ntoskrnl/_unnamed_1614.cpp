struct _MI_CLONE_BLOCK_FLAGS// Size=0x8 (Id=1667)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReducedCommitCount:55;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x37
        unsigned long long CloneProtection:5;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x5
        unsigned long long OwningPartitionResidentCharged:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long OwningPartitionCommitCharged:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long OwningPartitionCommitFloating:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

union _unnamed_1614// Size=0x8 (Id=1614)
{
    long long EntireField;// Offset=0x0 Size=0x8
    struct _MI_CLONE_BLOCK_FLAGS Flags;// Offset=0x0 Size=0x8
};
