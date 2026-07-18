struct _MM_PROBE_AND_LOCK_FLAGS// Size=0x8 (Id=1051)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long AccessMode:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Operation:2;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2
            unsigned long long MustBeZero:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
        };
    };
};
