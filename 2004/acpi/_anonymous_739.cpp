enum _FS_FILTER_SECTION_SYNC_TYPE
{
    SyncTypeOther=0,
    SyncTypeCreateSection=1
};

struct _anonymous_739// Size=0x18 (Id=739)
{
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;// Offset=0x0 Size=0x4
    unsigned long PageProtection;// Offset=0x4 Size=0x4
    struct _FS_FILTER_SECTION_SYNC_OUTPUT * OutputInformation;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};
