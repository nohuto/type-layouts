struct _DISK_SIGNATURE// Size=0x14 (Id=1536)
{
    unsigned long PartitionStyle;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _DISK_SIGNATURE::_unnamed_2431::<unnamed-type-Mbr> Mbr;// Offset=0x4 Size=0x8
        struct _DISK_SIGNATURE::_unnamed_2430::<unnamed-type-Gpt> Gpt;// Offset=0x4 Size=0x10
    };
};
