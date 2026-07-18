struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TRB_RANGE// Size=0x20 (Id=725)
{
    struct _BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

struct _TRB_ITERATOR// Size=0x10 (Id=825)
{
    struct _BUFFER_DATA * Segment;// Offset=0x0 Size=0x8
    unsigned long SegmentIndex;// Offset=0x8 Size=0x4
};

struct _ISOCH_STAGE_DATA// Size=0x80 (Id=824)
{
    struct _ISOCH_TRANSFER_DATA * TransferData;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY FreeSegmentList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY UsedSegmentList;// Offset=0x18 Size=0x10
    unsigned long FirstPacket;// Offset=0x28 Size=0x4
    unsigned long LastPacket;// Offset=0x2c Size=0x4
    unsigned long OnePastLastCompletedPacket;// Offset=0x30 Size=0x4
    unsigned long TransferSize;// Offset=0x34 Size=0x4
    unsigned char FreeMdl;// Offset=0x38 Size=0x1
    struct _MDL * Mdl;// Offset=0x40 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x48 Size=0x8
    struct _TRB_RANGE TrbRange;// Offset=0x50 Size=0x20
    struct _TRB_ITERATOR TrbIterator;// Offset=0x70 Size=0x10
};
