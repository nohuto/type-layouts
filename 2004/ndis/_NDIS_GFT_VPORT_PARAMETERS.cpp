struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_VPORT_PARAMETERS// Size=0x160 (Id=1539)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long VPortId;// Offset=0x8 Size=0x4
    unsigned long ExceptionVPortId;// Offset=0xc Size=0x4
    unsigned long SamplingRate;// Offset=0x10 Size=0x4
    unsigned long long DscpMask;// Offset=0x18 Size=0x8
    unsigned long NumDscpMaskCounterObjects;// Offset=0x20 Size=0x4
    unsigned long DscpMaskCounterIdArray[64];// Offset=0x24 Size=0x100
    unsigned long long PriorityMask;// Offset=0x128 Size=0x8
    unsigned long NumPriorityMaskCounterObjects;// Offset=0x130 Size=0x4
    unsigned long PriorityMaskCounterIdArray[8];// Offset=0x134 Size=0x20
    unsigned short VxLanSrcPortBase;// Offset=0x154 Size=0x2
    unsigned short VxLanSrcPortRange;// Offset=0x156 Size=0x2
    unsigned long DscpFlags;// Offset=0x158 Size=0x4
};
