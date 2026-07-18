struct _RTL_TRACE_SEGMENT// Size=0x1c (Id=483)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    struct _RTL_TRACE_DATABASE * Database;// Offset=0x4 Size=0x4
    struct _RTL_TRACE_SEGMENT * NextSegment;// Offset=0x8 Size=0x4
    unsigned long TotalSize;// Offset=0xc Size=0x4
    char * SegmentStart;// Offset=0x10 Size=0x4
    char * SegmentEnd;// Offset=0x14 Size=0x4
    char * SegmentFree;// Offset=0x18 Size=0x4
};
