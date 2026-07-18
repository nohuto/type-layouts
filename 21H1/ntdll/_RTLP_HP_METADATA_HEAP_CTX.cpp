union _RTL_RUN_ONCE// Size=0x4 (Id=343)
{
    void * Ptr;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTLP_HP_METADATA_HEAP_CTX// Size=0x8 (Id=473)
{
    struct _SEGMENT_HEAP * Heap;// Offset=0x0 Size=0x4
    union _RTL_RUN_ONCE InitOnce;// Offset=0x4 Size=0x4
};
