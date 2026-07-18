struct _RAID_IO_RESOURCES// Size=0x20 (Id=435)
{
    unsigned long QueueTag;// Offset=0x0 Size=0x4
    void * SrbExtension;// Offset=0x8 Size=0x8
    struct _EXTENDED_REQUEST_BLOCK * Xrb;// Offset=0x10 Size=0x8
    void * SenseInfo;// Offset=0x18 Size=0x8
};
