struct _unnamed_1246// Size=0x2 (Id=1246)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short VariableZoneCapacity:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ZoneExcursions:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

struct _unnamed_1247// Size=0x2 (Id=1247)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ReadAcrossZoneBoundaries:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET// Size=0x1000 (Id=1248)
{
    struct _unnamed_1246 ZOC;// Offset=0x0 Size=0x2
    struct _unnamed_1247 OZCS;// Offset=0x2 Size=0x2
    unsigned long MAR;// Offset=0x4 Size=0x4
    unsigned long MOR;// Offset=0x8 Size=0x4
    unsigned long RRL;// Offset=0xc Size=0x4
    unsigned long FRL;// Offset=0x10 Size=0x4
    unsigned char Reserved0[2796];// Offset=0x14 Size=0xaec
    struct NVME_LBA_ZONE_FORMAT LBAEF[16];// Offset=0xb00 Size=0x100
    unsigned char Reserved1[768];// Offset=0xc00 Size=0x300
    unsigned char VS[256];// Offset=0xf00 Size=0x100
};
