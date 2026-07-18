enum _STORPORT_CAPTURE_LIVEDUMP_TYPE
{
    StorportCaptureLiveDumpTypeUndefined=0,
    StorportCaptureLiveDumpTypeMini=1,
    StorportCaptureLiveDumpTypeFull=2
};

enum _STORPORT_LIVEDUMP_ISSUE_TYPE
{
    StorportLivedumpIssueTypeUndefined=0,
    StorportLivedumpIssueTypeDevicePanic=1
};

enum _STORPORT_LIVEDUMP_DATA_TYPE
{
    StorportLivedumpDataTypeUndefined=0,
    StorportLivedumpDataTypeDeviceTelemetryLog=1
};

struct _STORPORT_CAPTURE_LIVEDUMP// Size=0x28 (Id=191)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _STORPORT_CAPTURE_LIVEDUMP_TYPE LiveDumpType;// Offset=0x8 Size=0x4
    enum _STORPORT_LIVEDUMP_ISSUE_TYPE IssueType;// Offset=0xc Size=0x4
    wchar_t * ComponentName;// Offset=0x10 Size=0x8
    enum _STORPORT_LIVEDUMP_DATA_TYPE DataType;// Offset=0x18 Size=0x4
    void * Data;// Offset=0x20 Size=0x8
};
