struct MEM_EXTENDED_PARAMETER// Size=0x10 (Id=3415)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Type:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long Reserved:56;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x38
    };
    union // Size=0x10 (Id=0)
    {
        unsigned long long ULong64;// Offset=0x8 Size=0x8
        void * Pointer;// Offset=0x8 Size=0x8
        unsigned long long Size;// Offset=0x8 Size=0x8
        void * Handle;// Offset=0x8 Size=0x8
        unsigned long ULong;// Offset=0x8 Size=0x4
    };
};
