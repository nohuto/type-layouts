struct _PERFINFO_VAD_ROTATE_INFO// Size=0x18 (Id=2147)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long SizeInBytes;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Direction:4;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x4
            unsigned long Spare:28;// Offset=0x10 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Flags;// Offset=0x10 Size=0x4
    };
};
