struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TRB_RANGE// Size=0x20 (Id=724)
{
    struct _BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

struct _BULK_STAGE_DATA// Size=0x80 (Id=723)
{
    struct _BULK_TRANSFER_DATA * TransferData;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY FreeSegmentList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY UsedSegmentList;// Offset=0x18 Size=0x10
    unsigned long TransferSize;// Offset=0x28 Size=0x4
    unsigned char FreeMdl;// Offset=0x2c Size=0x1
    struct _MDL * Mdl;// Offset=0x30 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x38 Size=0x8
    unsigned char * Buffer;// Offset=0x40 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x48 Size=0x8
    unsigned long TrbsPerBurst;// Offset=0x50 Size=0x4
    unsigned long RequiredTrbs;// Offset=0x54 Size=0x4
    unsigned long UsedTrbs;// Offset=0x58 Size=0x4
    struct _TRB_RANGE TrbRange;// Offset=0x60 Size=0x20
};
