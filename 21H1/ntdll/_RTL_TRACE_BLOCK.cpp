struct _RTL_TRACE_BLOCK// Size=0x20 (Id=433)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    unsigned long Size;// Offset=0x8 Size=0x4
    unsigned long UserCount;// Offset=0xc Size=0x4
    unsigned long UserSize;// Offset=0x10 Size=0x4
    void * UserContext;// Offset=0x14 Size=0x4
    struct _RTL_TRACE_BLOCK * Next;// Offset=0x18 Size=0x4
    void ** Trace;// Offset=0x1c Size=0x4
};
