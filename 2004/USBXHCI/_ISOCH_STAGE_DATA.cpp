struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TRB_RANGE// Size=0x20 (Id=941)
{
    struct _XIL_BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _XIL_BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

struct _TRB_ITERATOR// Size=0x10 (Id=915)
{
    struct _XIL_BUFFER_DATA * Segment;// Offset=0x0 Size=0x8
    unsigned long SegmentIndex;// Offset=0x8 Size=0x4
};

enum _SECURE_DMA_RESOURCE_TYPE
{
    DmaNoBuffer=0,
    DmaExposedSection=1,
    DmaSecureSectionGuid=2
};

struct _GUID// Size=0x10 (Id=104)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SECURE_DMA_RESOURCE// Size=0x20 (Id=638)
{
    enum _SECURE_DMA_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Offset;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long StageId;// Offset=0xc Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * ExposedSectionHandle;// Offset=0x10 Size=0x8
        struct _GUID SecureSectionGuid;// Offset=0x10 Size=0x10
    };
};

struct _anonymous_32// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=33)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_32 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SCATTER_GATHER_ELEMENT// Size=0x18 (Id=940)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long long Reserved;// Offset=0x10 Size=0x8
};

struct _anonymous_835// Size=0x28 (Id=835)
{
    unsigned long NumberOfElements;// Offset=0x0 Size=0x4
    unsigned long long Reserved;// Offset=0x8 Size=0x8
    struct _SCATTER_GATHER_ELEMENT Elements[1];// Offset=0x10 Size=0x18
};

struct _ISOCH_STAGE_DATA// Size=0xd0 (Id=900)
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
    struct _SECURE_DMA_RESOURCE SecureDmaResource;// Offset=0x80 Size=0x20
    unsigned long StageId;// Offset=0xa0 Size=0x4
    struct _anonymous_835 PreallocatedScatterGatherList;// Offset=0xa8 Size=0x28
};
