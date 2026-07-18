struct _CLIENT_ID// Size=0x10 (Id=3366)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _PROCESS_HANDLE_TRACING_ENTRY// Size=0xa0 (Id=3256)
{
    void * Handle;// Offset=0x0 Size=0x8
    struct _CLIENT_ID ClientId;// Offset=0x8 Size=0x10
    unsigned long Type;// Offset=0x18 Size=0x4
    void * Stacks[16];// Offset=0x20 Size=0x80
};

struct _PROCESS_HANDLE_TRACING_QUERY// Size=0xb0 (Id=1484)
{
    void * Handle;// Offset=0x0 Size=0x8
    unsigned long TotalTraces;// Offset=0x8 Size=0x4
    struct _PROCESS_HANDLE_TRACING_ENTRY HandleTrace[1];// Offset=0x10 Size=0xa0
};
