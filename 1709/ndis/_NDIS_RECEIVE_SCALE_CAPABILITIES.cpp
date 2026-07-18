struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RECEIVE_SCALE_CAPABILITIES// Size=0x14 (Id=329)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long CapabilitiesFlags;// Offset=0x4 Size=0x4
    unsigned long NumberOfInterruptMessages;// Offset=0x8 Size=0x4
    unsigned long NumberOfReceiveQueues;// Offset=0xc Size=0x4
    unsigned short NumberOfIndirectionTableEntries;// Offset=0x10 Size=0x2
};
