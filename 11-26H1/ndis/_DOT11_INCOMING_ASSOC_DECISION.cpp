struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_INCOMING_ASSOC_DECISION// Size=0x18 (Id=1317)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char PeerMacAddr[6];// Offset=0x4 Size=0x6
    unsigned char bAccept;// Offset=0xa Size=0x1
    unsigned short usReasonCode;// Offset=0xc Size=0x2
    unsigned long uAssocResponseIEsOffset;// Offset=0x10 Size=0x4
    unsigned long uAssocResponseIEsLength;// Offset=0x14 Size=0x4
};
