struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PD_CAPABILITIES// Size=0x60 (Id=715)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long MaximumTxPartialBufferCount;// Offset=0x8 Size=0x4
    unsigned long MaximumRxPartialBufferCount;// Offset=0xc Size=0x4
    unsigned char RxFilterContextWidth;// Offset=0x10 Size=0x1
    unsigned long CapabilityFlags;// Offset=0x14 Size=0x4
    unsigned long MaxNumberOfRxQueues;// Offset=0x18 Size=0x4
    unsigned long MaxNumberOfTxQueues;// Offset=0x1c Size=0x4
    unsigned long MaxNumberOfRxQueuesForDefaultVport;// Offset=0x20 Size=0x4
    unsigned long MaxNumberOfTxQueuesForDefaultVport;// Offset=0x24 Size=0x4
    unsigned long MaxNumberOfRxQueuesPerNonDefaultVport;// Offset=0x28 Size=0x4
    unsigned long MaxNumberOfTxQueuesPerNonDefaultVport;// Offset=0x2c Size=0x4
    unsigned long ExactMatchProfileArrayOffset;// Offset=0x30 Size=0x4
    unsigned long ExactMatchProfileArrayNumElements;// Offset=0x34 Size=0x4
    unsigned long ExactMatchProfileArrayElementSize;// Offset=0x38 Size=0x4
    unsigned long WildcardMatchProfileArrayOffset;// Offset=0x3c Size=0x4
    unsigned long WildcardMatchProfileArrayNumElements;// Offset=0x40 Size=0x4
    unsigned long WildcardMatchProfileArrayElementSize;// Offset=0x44 Size=0x4
    unsigned long MinimumModerationInterval;// Offset=0x48 Size=0x4
    unsigned long MaximumModerationInterval;// Offset=0x4c Size=0x4
    unsigned long ModerationIntervalGranularity;// Offset=0x50 Size=0x4
    unsigned long MaxRxQueueSize;// Offset=0x54 Size=0x4
    unsigned long MaxTxQueueSize;// Offset=0x58 Size=0x4
};
