struct _CLIENT_ID// Size=0x8 (Id=304)
{
    void * UniqueProcess;// Offset=0x0 Size=0x4
    void * UniqueThread;// Offset=0x4 Size=0x4
};

struct _HANDLE_TRACE_DB_ENTRY// Size=0x50 (Id=576)
{
    struct _CLIENT_ID ClientId;// Offset=0x0 Size=0x8
    void * Handle;// Offset=0x8 Size=0x4
    unsigned long Type;// Offset=0xc Size=0x4
    void * StackTrace[16];// Offset=0x10 Size=0x40
};
