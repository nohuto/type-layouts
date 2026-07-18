struct _RTL_TRACE_SEGMENT// Size=0x38 (Id=435)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    struct _RTL_TRACE_DATABASE * Database;// Offset=0x8 Size=0x8
    struct _RTL_TRACE_SEGMENT * NextSegment;// Offset=0x10 Size=0x8
    unsigned long long TotalSize;// Offset=0x18 Size=0x8
    char * SegmentStart;// Offset=0x20 Size=0x8
    char * SegmentEnd;// Offset=0x28 Size=0x8
    char * SegmentFree;// Offset=0x30 Size=0x8
};
