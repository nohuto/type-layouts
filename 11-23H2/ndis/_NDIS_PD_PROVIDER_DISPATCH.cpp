struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PD_PROVIDER_DISPATCH// Size=0x68 (Id=1636)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    long  ( * NdisPDAllocateQueue)(struct NDIS_PD_PROVIDER_HANDLE__ * ,struct _NDIS_PD_QUEUE_PARAMETERS * ,struct _NDIS_PD_QUEUE ** );// Offset=0x8 Size=0x8
    void  ( * NdisPDFreeQueue)(struct _NDIS_PD_QUEUE * );// Offset=0x10 Size=0x8
    long  ( * NdisPDAcquireReceiveQueues)(struct NDIS_PD_PROVIDER_HANDLE__ * ,struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS * ,struct _NDIS_PD_QUEUE ** ,unsigned long * ,struct _NDIS_PD_QUEUE_PARAMETERS * ,unsigned long * ,unsigned long * );// Offset=0x18 Size=0x8
    void  ( * NdisPDReleaseReceiveQueues)(struct NDIS_PD_PROVIDER_HANDLE__ * );// Offset=0x20 Size=0x8
    long  ( * NdisPDAllocateCounter)(struct NDIS_PD_PROVIDER_HANDLE__ * ,struct _NDIS_PD_COUNTER_PARAMETERS * ,struct NDIS_PD_COUNTER_HANDLE__ ** );// Offset=0x28 Size=0x8
    void  ( * NdisPDFreeCounter)(struct NDIS_PD_COUNTER_HANDLE__ * );// Offset=0x30 Size=0x8
    void  ( * NdisPDQueryCounter)(struct NDIS_PD_COUNTER_HANDLE__ * ,union _NDIS_PD_COUNTER_VALUE * );// Offset=0x38 Size=0x8
    long  ( * NdisPDSetReceiveFilter)(struct NDIS_PD_PROVIDER_HANDLE__ * ,struct _NDIS_PD_FILTER_PARAMETERS * ,struct NDIS_PD_FILTER_HANDLE__ ** );// Offset=0x40 Size=0x8
    void  ( * NdisPDClearReceiveFilter)(struct NDIS_PD_FILTER_HANDLE__ * );// Offset=0x48 Size=0x8
    void  ( * NdisPDRequestDrainNotification)(struct _NDIS_PD_QUEUE * );// Offset=0x50 Size=0x8
    long  ( * NdisPDQueueControl)(struct _NDIS_PD_QUEUE * ,enum NDIS_PD_CONTROL_TYPE ,enum NDIS_PD_QUEUE_CONTROL_CODE ,void * ,unsigned long ,void * ,unsigned long ,unsigned long * );// Offset=0x58 Size=0x8
    long  ( * NdisPDProviderControl)(struct NDIS_PD_PROVIDER_HANDLE__ * ,enum NDIS_PD_CONTROL_TYPE ,enum NDIS_PD_PROVIDER_CONTROL_CODE ,void * ,unsigned long ,void * ,unsigned long ,unsigned long * );// Offset=0x60 Size=0x8
};
