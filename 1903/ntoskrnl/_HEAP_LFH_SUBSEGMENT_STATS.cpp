struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=1257)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x8 (Id=1071)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];// Offset=0x0 Size=0x8
    void * AllStats;// Offset=0x0 Size=0x8
};
