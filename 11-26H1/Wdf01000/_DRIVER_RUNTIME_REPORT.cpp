struct _RUNTIME_REPORT_HEADER// Size=0x8 (Id=2442)
{
    unsigned short ReportType;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned int ReportSize;// Offset=0x4 Size=0x4
};

struct _DRIVER_INFO_ENTRY// Size=0x38 (Id=1422)
{
    union // Size=0x34 (Id=0)
    {
        char InternalName[32];// Offset=0x0 Size=0x20
        unsigned short ImageHashAlgorithm;// Offset=0x20 Size=0x2
        unsigned short PublisherThumbprintHashAlgorithm;// Offset=0x22 Size=0x2
        unsigned int ImageHashOffset;// Offset=0x24 Size=0x4
        unsigned int PublisherThumbprintOffset;// Offset=0x28 Size=0x4
        unsigned short NumberOfLoadingTimes;// Offset=0x2c Size=0x2
        unsigned short OemNameSize;// Offset=0x2e Size=0x2
        unsigned int OemNameOffset;// Offset=0x30 Size=0x4
        union <unnamed-type-Flags>// Size=0x2 (Id=7443)
        {
            unsigned short Unloaded:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short BootDriver:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short HotPatch:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
            unsigned short AsUInt16;// Offset=0x0 Size=0x2
        };
        union _DRIVER_INFO_ENTRY::<unnamed-type-Flags> Flags;// Offset=0x34 Size=0x2
    };
    unsigned short Padding;// Offset=0x36 Size=0x2
};

struct _DRIVER_RUNTIME_REPORT// Size=0x44 (Id=2866)
{
    union // Size=0xa (Id=0)
    {
        struct _RUNTIME_REPORT_HEADER Header;// Offset=0x0 Size=0x8
        unsigned short NumberOfDrivers;// Offset=0x8 Size=0x2
        union <unnamed-type-Flags>// Size=0x2 (Id=7515)
        {
            unsigned short ReportOverflowed:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short PartialReport:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short IncludeBootDrivers:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
            unsigned short AsUInt16;// Offset=0x0 Size=0x2
        };
        union _DRIVER_RUNTIME_REPORT::<unnamed-type-Flags> Flags;// Offset=0xa Size=0x2
    };
    struct _DRIVER_INFO_ENTRY DriverEntries[1];// Offset=0xc Size=0x38
};
