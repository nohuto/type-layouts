enum _NDIS_CLASS_ID
{
    NdisClass802_3Priority=0,
    NdisClassWirelessWanMbxMailbox=1,
    NdisClassIrdaPacketInfo=2,
    NdisClassAtmAALInfo=3
};

struct _MEDIA_SPECIFIC_INFORMATION// Size=0x10 (Id=1468)
{
    unsigned int NextEntryOffset;// Offset=0x0 Size=0x4
    enum _NDIS_CLASS_ID ClassId;// Offset=0x4 Size=0x4
    unsigned int Size;// Offset=0x8 Size=0x4
    unsigned char ClassInformation[1];// Offset=0xc Size=0x1
};
