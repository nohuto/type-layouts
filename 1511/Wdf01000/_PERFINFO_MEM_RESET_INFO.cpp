struct _PERFINFO_MEM_RESET_INFO// Size=0x18 (Id=1838)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long SizeInBytes;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TypeInfo:2;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Spare:30;// Offset=0x10 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long Flags;// Offset=0x10 Size=0x4
    };
};
