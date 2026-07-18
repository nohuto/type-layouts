struct _GIC_REDISTRIBUTOR// Size=0x10 (Id=182)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long long DiscoveryRangeBaseAddress;// Offset=0x4 Size=0x8
    unsigned long DiscoveryRangeLength;// Offset=0xc Size=0x4
};
