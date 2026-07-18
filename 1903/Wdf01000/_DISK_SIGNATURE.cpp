struct _DISK_SIGNATURE// Size=0x14 (Id=3251)
{
    unsigned long PartitionStyle;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _DISK_SIGNATURE::_anonymous_3956::<unnamed-type-Mbr> Mbr;// Offset=0x4 Size=0x8
        struct _DISK_SIGNATURE::_anonymous_3955::<unnamed-type-Gpt> Gpt;// Offset=0x4 Size=0x10
    };
};
