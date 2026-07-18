struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SWITCH_NIC_STATUS_INDICATION// Size=0x20 (Id=1297)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned int SourcePortId;// Offset=0x8 Size=0x4
    unsigned short SourceNicIndex;// Offset=0xc Size=0x2
    unsigned int DestinationPortId;// Offset=0x10 Size=0x4
    unsigned short DestinationNicIndex;// Offset=0x14 Size=0x2
    struct _NDIS_STATUS_INDICATION * StatusIndication;// Offset=0x18 Size=0x8
};
