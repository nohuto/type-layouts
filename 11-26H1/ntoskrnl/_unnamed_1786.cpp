struct _MMSECURE_FLAGS// Size=0x8 (Id=1969)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long ReadWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long SecNoChange:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long NoDelete:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long RequiresPteReversal:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
            unsigned long long ExclusiveSecure:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
            unsigned long long UserModeOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
            unsigned long long NoInherit:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
            unsigned long long CheckVad:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
            unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x3
            unsigned long long DoNotUse:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        void * StartVa;// Offset=0x0 Size=0x8
    };
};

union _unnamed_1786// Size=0x8 (Id=1786)
{
    struct _MMSECURE_FLAGS Flags;// Offset=0x0 Size=0x8
    void * StartVa;// Offset=0x0 Size=0x8
};
