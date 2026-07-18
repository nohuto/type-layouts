struct _PERFINFO_MEMORY_INFORMATION// Size=0xb0 (Id=2452)
{
    unsigned long long ZeroPageCount;// Offset=0x0 Size=0x8
    unsigned long long FreePageCount;// Offset=0x8 Size=0x8
    unsigned long long ModifiedPageCount;// Offset=0x10 Size=0x8
    unsigned long long ModifiedNoWritePageCount;// Offset=0x18 Size=0x8
    unsigned long long BadPageCount;// Offset=0x20 Size=0x8
    unsigned long long PageCountByPriority[8];// Offset=0x28 Size=0x40
    unsigned long long RepurposedPagesByPriority[8];// Offset=0x68 Size=0x40
    unsigned long long ModifiedPageCountPageFile;// Offset=0xa8 Size=0x8
};
