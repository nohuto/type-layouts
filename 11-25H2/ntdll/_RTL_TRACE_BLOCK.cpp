struct _RTL_TRACE_BLOCK// Size=0x38 (Id=541)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    unsigned long Size;// Offset=0x8 Size=0x4
    unsigned long long UserCount;// Offset=0x10 Size=0x8
    unsigned long long UserSize;// Offset=0x18 Size=0x8
    void * UserContext;// Offset=0x20 Size=0x8
    struct _RTL_TRACE_BLOCK * Next;// Offset=0x28 Size=0x8
    void ** Trace;// Offset=0x30 Size=0x8
};
