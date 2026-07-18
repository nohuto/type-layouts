struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_SPARSE_BITMAP_CTX// Size=0x50 (Id=219)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _RTL_SPARSE_BITMAP_RANGE ** BitmapRanges;// Offset=0x8 Size=0x8
    struct _RTL_BITMAP RangeArrayCommitStatus;// Offset=0x10 Size=0x10
    void *  ( * AllocateRoutine)(unsigned long long );// Offset=0x20 Size=0x8
    void  ( * FreeRoutine)(void * );// Offset=0x28 Size=0x8
    unsigned long RangeCount;// Offset=0x30 Size=0x4
    unsigned long RangeIndexLimit;// Offset=0x34 Size=0x4
    unsigned long BitsPerRange;// Offset=0x38 Size=0x4
    unsigned long RangeCountMax;// Offset=0x3c Size=0x4
    unsigned long RangeMetadataOffset;// Offset=0x40 Size=0x4
    unsigned long MetadataSizePerBit;// Offset=0x44 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DefaultBitsSet:1;// Offset=0x48 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SparseRangeArray:1;// Offset=0x48 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NoInternalLocking:1;// Offset=0x48 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SpareFlags:29;// Offset=0x48 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};
