struct _PROCESS_BASIC_INFORMATION// Size=0x30 (Id=4305)
{
    long ExitStatus;// Offset=0x0 Size=0x4
    struct _PEB * PebBaseAddress;// Offset=0x8 Size=0x8
    unsigned long long AffinityMask;// Offset=0x10 Size=0x8
    long BasePriority;// Offset=0x18 Size=0x4
    unsigned long long UniqueProcessId;// Offset=0x20 Size=0x8
    unsigned long long InheritedFromUniqueProcessId;// Offset=0x28 Size=0x8
};

struct _PROCESS_EXTENDED_BASIC_INFORMATION// Size=0x40 (Id=1841)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    struct _PROCESS_BASIC_INFORMATION BasicInfo;// Offset=0x8 Size=0x30
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x38 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long IsProtectedProcess:1;// Offset=0x38 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IsWow64Process:1;// Offset=0x38 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IsProcessDeleting:1;// Offset=0x38 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long IsCrossSessionCreate:1;// Offset=0x38 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long IsFrozen:1;// Offset=0x38 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long IsBackground:1;// Offset=0x38 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long IsStronglyNamed:1;// Offset=0x38 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long IsSecureProcess:1;// Offset=0x38 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long IsSubsystemProcess:1;// Offset=0x38 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SpareBits:23;// Offset=0x38 Size=0x4 BitOffset=0x9 BitSize=0x17
        };
    };
};
