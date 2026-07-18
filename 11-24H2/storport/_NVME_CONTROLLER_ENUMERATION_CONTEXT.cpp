union _unnamed_1169// Size=0x4 (Id=1169)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReenumerationWorkItemScheduled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IdentifyChangedNSStarted:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ChangedNSListOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MultipleReenumOutstanding:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SpuriousNamespaceChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long IdentifyChangedNSFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long InactiveNamespaceAdded:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IdentifyNamespaceFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AllNamespacesChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_CONTROLLER_ENUMERATION_CONTEXT// Size=0x38 (Id=1170)
{
    unsigned long ReenumerationCount;// Offset=0x0 Size=0x4
    unsigned long NSReenumerationSkippedCount;// Offset=0x4 Size=0x4
    unsigned long GetChangedNSListFailedCount;// Offset=0x8 Size=0x4
    unsigned long QDRInitiatedCount;// Offset=0xc Size=0x4
    unsigned long NewlyAddedNamespaceCount;// Offset=0x10 Size=0x4
    unsigned long DeletedNamespaceCount;// Offset=0x14 Size=0x4
    unsigned long ModifiedNamespaceCount;// Offset=0x18 Size=0x4
    union _unnamed_1169 Flags;// Offset=0x1c Size=0x4
    union _LARGE_INTEGER IdentifyNSTimestamp;// Offset=0x20 Size=0x8
    struct _IO_WORKITEM * ReenumerationWorkItem;// Offset=0x28 Size=0x8
    struct NVME_CHANGED_NAMESPACE_LIST_LOG * ChangedNSList;// Offset=0x30 Size=0x8
};
