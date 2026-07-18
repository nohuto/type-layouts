struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _IPSEC_OFFLOAD_V2_OPERATION
{
    IPsecOffloadV2Ah=1,
    IPsecOffloadV2Esp=2,
    IPsecOffloadV2Max=3
};

struct _IPSEC_OFFLOAD_V2_UPDATE_SA// Size=0x20 (Id=708)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * OffloadHandle;// Offset=0x8 Size=0x8
    enum _IPSEC_OFFLOAD_V2_OPERATION Operation;// Offset=0x10 Size=0x4
    unsigned long Spi;// Offset=0x14 Size=0x4
    unsigned long SequenceNumberHighOrder;// Offset=0x18 Size=0x4
};
