struct _GUID// Size=0x10 (Id=56)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=44)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CRITICAL_PROCESS_EXCEPTION_DATA// Size=0x48 (Id=757)
{
    struct _GUID ReportId;// Offset=0x0 Size=0x10
    struct _UNICODE_STRING ModuleName;// Offset=0x10 Size=0x10
    unsigned long ModuleTimestamp;// Offset=0x20 Size=0x4
    unsigned long ModuleSize;// Offset=0x24 Size=0x4
    unsigned long long Offset;// Offset=0x28 Size=0x8
    unsigned long long TerminatingProcessId;// Offset=0x30 Size=0x8
    unsigned long long TerminatingProcessSequenceNumber;// Offset=0x38 Size=0x8
    unsigned long long TerminatingThreadId;// Offset=0x40 Size=0x8
};
