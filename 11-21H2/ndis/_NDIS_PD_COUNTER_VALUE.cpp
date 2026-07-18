struct _NDIS_PD_RECEIVE_QUEUE_COUNTER// Size=0x18 (Id=838)
{
    unsigned long long PacketsReceived;// Offset=0x0 Size=0x8
    unsigned long long BytesReceived;// Offset=0x8 Size=0x8
    unsigned long long PacketsDropped;// Offset=0x10 Size=0x8
};

struct _NDIS_PD_TRANSMIT_QUEUE_COUNTER// Size=0x10 (Id=882)
{
    unsigned long long PacketsTransmitted;// Offset=0x0 Size=0x8
    unsigned long long BytesTransmitted;// Offset=0x8 Size=0x8
};

struct _NDIS_PD_FILTER_COUNTER// Size=0x10 (Id=705)
{
    unsigned long long PacketsMatched;// Offset=0x0 Size=0x8
    unsigned long long BytesMatched;// Offset=0x8 Size=0x8
};

union _NDIS_PD_COUNTER_VALUE// Size=0x18 (Id=1996)
{
    union // Size=0x18 (Id=0)
    {
        struct _NDIS_PD_RECEIVE_QUEUE_COUNTER ReceiveQueue;// Offset=0x0 Size=0x18
        struct _NDIS_PD_TRANSMIT_QUEUE_COUNTER TransmitQueue;// Offset=0x0 Size=0x10
        struct _NDIS_PD_FILTER_COUNTER Filter;// Offset=0x0 Size=0x10
    };
};
