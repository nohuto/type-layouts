struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PD_FILTER_PARAMETERS// Size=0x40 (Id=1959)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long MatchProfileId;// Offset=0x8 Size=0x4
    unsigned long Priority;// Offset=0xc Size=0x4
    struct NDIS_PD_COUNTER_HANDLE__ * CounterHandle;// Offset=0x10 Size=0x8
    struct _NDIS_PD_QUEUE * TargetReceiveQueue;// Offset=0x18 Size=0x8
    unsigned long long RxFilterContext;// Offset=0x20 Size=0x8
    unsigned char * HeaderGroupMatchArray;// Offset=0x28 Size=0x8
    unsigned long HeaderGroupMatchArrayNumElements;// Offset=0x30 Size=0x4
    unsigned long HeaderGroupMatchArrayElementSize;// Offset=0x34 Size=0x4
    unsigned long HeaderGroupMatchArrayTotalSize;// Offset=0x38 Size=0x4
};
