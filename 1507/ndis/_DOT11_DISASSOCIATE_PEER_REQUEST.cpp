struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_DISASSOCIATE_PEER_REQUEST// Size=0xc (Id=1208)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char PeerMacAddr[6];// Offset=0x4 Size=0x6
    unsigned short usReason;// Offset=0xa Size=0x2
};
