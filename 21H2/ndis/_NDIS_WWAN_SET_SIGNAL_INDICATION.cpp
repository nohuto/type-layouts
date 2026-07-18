struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _WWAN_SET_SIGNAL_INDICATION// Size=0x8 (Id=1443)
{
    unsigned long RssiInterval;// Offset=0x0 Size=0x4
    unsigned long RssiThreshold;// Offset=0x4 Size=0x4
};

struct _NDIS_WWAN_SET_SIGNAL_INDICATION// Size=0xc (Id=963)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SET_SIGNAL_INDICATION SignalIndication;// Offset=0x4 Size=0x8
};
