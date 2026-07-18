struct _RUNTIME_REPORT_HEADER// Size=0x8 (Id=2442)
{
    unsigned short ReportType;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned int ReportSize;// Offset=0x4 Size=0x4
};

struct _CODE_INTEGRITY_RUNTIME_REPORT// Size=0x18 (Id=2828)
{
    struct _RUNTIME_REPORT_HEADER Header;// Offset=0x0 Size=0x8
    unsigned long long CurrentGeneration;// Offset=0x8 Size=0x8
    unsigned int NumberOfGenerations;// Offset=0x10 Size=0x4
};
