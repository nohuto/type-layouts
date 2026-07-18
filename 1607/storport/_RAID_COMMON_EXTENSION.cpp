enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=-1,
    RaidAdapterObject=0,
    RaidUnitObject=1,
    RaidDriverObject=2
};

struct _RAID_COMMON_EXTENSION// Size=0x4 (Id=268)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
};
