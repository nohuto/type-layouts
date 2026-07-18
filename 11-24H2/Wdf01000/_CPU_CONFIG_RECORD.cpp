struct _CPU_CONFIG_RECORD// Size=0x340 (Id=1822)
{
    unsigned long ProcessorSpeed;// Offset=0x0 Size=0x4
    unsigned long NumberOfProcessors;// Offset=0x4 Size=0x4
    unsigned long MemorySize;// Offset=0x8 Size=0x4
    unsigned long PageSize;// Offset=0xc Size=0x4
    unsigned long AllocationGranularity;// Offset=0x10 Size=0x4
    wchar_t ComputerName[256];// Offset=0x14 Size=0x200
    wchar_t DomainName[134];// Offset=0x214 Size=0x10c
    unsigned long long HyperThreadingFlag;// Offset=0x320 Size=0x8
    unsigned long long HighestUserAddress;// Offset=0x328 Size=0x8
    unsigned short ProcessorArchitecture;// Offset=0x330 Size=0x2
    unsigned short ProcessorLevel;// Offset=0x332 Size=0x2
    unsigned short ProcessorRevision;// Offset=0x334 Size=0x2
    unsigned char NxEnabled;// Offset=0x336 Size=0x1
    unsigned char PaeEnabled;// Offset=0x337 Size=0x1
    unsigned long MemorySpeed;// Offset=0x338 Size=0x4
};
