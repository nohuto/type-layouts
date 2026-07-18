struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY// Size=0xc (Id=3913)
{
    unsigned short Flags;// Offset=0x0 Size=0x2
    unsigned short Catalog;// Offset=0x2 Size=0x2
    unsigned long CatalogOffset;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _IMAGE_LOAD_CONFIG_DIRECTORY64// Size=0xa0 (Id=3912)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long TimeDateStamp;// Offset=0x4 Size=0x4
    unsigned short MajorVersion;// Offset=0x8 Size=0x2
    unsigned short MinorVersion;// Offset=0xa Size=0x2
    unsigned long GlobalFlagsClear;// Offset=0xc Size=0x4
    unsigned long GlobalFlagsSet;// Offset=0x10 Size=0x4
    unsigned long CriticalSectionDefaultTimeout;// Offset=0x14 Size=0x4
    unsigned long long DeCommitFreeBlockThreshold;// Offset=0x18 Size=0x8
    unsigned long long DeCommitTotalFreeThreshold;// Offset=0x20 Size=0x8
    unsigned long long LockPrefixTable;// Offset=0x28 Size=0x8
    unsigned long long MaximumAllocationSize;// Offset=0x30 Size=0x8
    unsigned long long VirtualMemoryThreshold;// Offset=0x38 Size=0x8
    unsigned long long ProcessAffinityMask;// Offset=0x40 Size=0x8
    unsigned long ProcessHeapFlags;// Offset=0x48 Size=0x4
    unsigned short CSDVersion;// Offset=0x4c Size=0x2
    unsigned short Reserved1;// Offset=0x4e Size=0x2
    unsigned long long EditList;// Offset=0x50 Size=0x8
    unsigned long long SecurityCookie;// Offset=0x58 Size=0x8
    unsigned long long SEHandlerTable;// Offset=0x60 Size=0x8
    unsigned long long SEHandlerCount;// Offset=0x68 Size=0x8
    unsigned long long GuardCFCheckFunctionPointer;// Offset=0x70 Size=0x8
    unsigned long long GuardCFDispatchFunctionPointer;// Offset=0x78 Size=0x8
    unsigned long long GuardCFFunctionTable;// Offset=0x80 Size=0x8
    unsigned long long GuardCFFunctionCount;// Offset=0x88 Size=0x8
    unsigned long GuardFlags;// Offset=0x90 Size=0x4
    struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;// Offset=0x94 Size=0xc
};
