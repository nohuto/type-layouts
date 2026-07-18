struct _HEAP_EVENT_SUBSEGMENT_ALLOC_FREE// Size=0x28 (Id=3534)
{
    void * HeapHandle;// Offset=0x0 Size=0x8
    void * SubSegment;// Offset=0x8 Size=0x8
    unsigned long long SubSegmentSize;// Offset=0x10 Size=0x8
    unsigned long long BlockSize;// Offset=0x18 Size=0x8
    unsigned char HeapType;// Offset=0x20 Size=0x1
    unsigned char Spare[7];// Offset=0x21 Size=0x7
};
