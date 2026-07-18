struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_DEVICE_PNP_EVENT
{
    NdisDevicePnPEventQueryRemoved=0,
    NdisDevicePnPEventRemoved=1,
    NdisDevicePnPEventSurpriseRemoved=2,
    NdisDevicePnPEventQueryStopped=3,
    NdisDevicePnPEventStopped=4,
    NdisDevicePnPEventPowerProfileChanged=5,
    NdisDevicePnPEventFilterListChanged=6,
    NdisDevicePnPEventMaximum=7
};

struct _NET_DEVICE_PNP_EVENT// Size=0x30 (Id=1172)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long PortNumber;// Offset=0x4 Size=0x4
    enum _NDIS_DEVICE_PNP_EVENT DevicePnPEvent;// Offset=0x8 Size=0x4
    void * InformationBuffer;// Offset=0x10 Size=0x8
    unsigned long InformationBufferLength;// Offset=0x18 Size=0x4
    unsigned char NdisReserved[16];// Offset=0x1c Size=0x10
};
