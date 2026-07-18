struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _NDIS_NBL_TRACKER_SOURCE
{
    NdisNblTrackerMiniport=0,
    NdisNblTrackerFilter=1,
    NdisNblTrackerProtocol=2,
    NdisNblTrackerNdisNPOSRReturn=3,
    NdisNblTrackerNdisSSSend=4,
    NdisNblTrackerNdisSSRReturn=5,
    NdisNblTrackerFirstCustomContext=256
};

struct _NDIS_NBL_TRACKER_BUCKET// Size=0x10 (Id=1008)
{
    struct PNDIS_PER_PROCESSOR_SLOT__ * Slot;// Offset=0x0 Size=0x8
    long long PassiveCounter;// Offset=0x8 Size=0x8
};

struct _NDIS_NBL_TRACKER// Size=0x48 (Id=571)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
    struct // Size=0x4 (Id=0)
    {
        enum _NDIS_NBL_TRACKER_SOURCE Source:16;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Flags:16;// Offset=0x10 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    void * Context;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING * Name;// Offset=0x20 Size=0x8
    struct _NDIS_NBL_TRACKER_BUCKET Buckets[2];// Offset=0x28 Size=0x20
};
