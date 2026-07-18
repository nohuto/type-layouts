union _LARGE_INTEGER// Size=0x8 (Id=371)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12031)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct FxDevicePowerIrpTracker::HistoryEntry// Size=0x10 (Id=914)
{
    enum RequestDIrpReason Reason;// Offset=0x0 Size=0x4
    union _LARGE_INTEGER Timestamp;// Offset=0x8 Size=0x8
};
