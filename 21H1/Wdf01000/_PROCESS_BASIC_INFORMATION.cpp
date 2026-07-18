struct _PROCESS_BASIC_INFORMATION// Size=0x30 (Id=2817)
{
    long ExitStatus;// Offset=0x0 Size=0x4
    struct _PEB * PebBaseAddress;// Offset=0x8 Size=0x8
    unsigned long long AffinityMask;// Offset=0x10 Size=0x8
    long BasePriority;// Offset=0x18 Size=0x4
    unsigned long long UniqueProcessId;// Offset=0x20 Size=0x8
    unsigned long long InheritedFromUniqueProcessId;// Offset=0x28 Size=0x8
};
