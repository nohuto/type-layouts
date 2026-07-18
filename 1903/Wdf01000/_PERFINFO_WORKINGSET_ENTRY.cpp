struct _PERFINFO_WORKINGSET_ENTRY// Size=0x44 (Id=2913)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long UniqueProcessId;// Offset=0x0 Size=0x4
        unsigned long SessionId;// Offset=0x0 Size=0x4
    };
    unsigned long long WorkingSetPageCount;// Offset=0x4 Size=0x8
    unsigned long long CommitPageCount;// Offset=0xc Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long PagedPoolPageCount;// Offset=0x14 Size=0x8
        unsigned long long VirtualSizeInPages;// Offset=0x14 Size=0x8
    };
    unsigned long long PrivateWorkingSetPageCount;// Offset=0x1c Size=0x8
    unsigned long long StoreSizeInPages;// Offset=0x24 Size=0x8
    unsigned long long StoredPageCount;// Offset=0x2c Size=0x8
    unsigned long long CommitDebtInPages;// Offset=0x34 Size=0x8
    unsigned long long SharedCommitInPages;// Offset=0x3c Size=0x8
};
