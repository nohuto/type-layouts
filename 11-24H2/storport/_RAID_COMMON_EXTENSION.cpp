enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=0,
    RaidAdapterObject=1094997074,
    RaidUnitObject=1431193940,
    RaidDriverObject=1146246738,
    NvmeAdapterObject=1314275652,
    NvmeNamespaceObject=1314278989
};

struct _RAID_COMMON_EXTENSION// Size=0x4 (Id=347)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
};
