struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _PEB_LDR_DATA// Size=0x30 (Id=234)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned char Initialized;// Offset=0x4 Size=0x1
    void * SsHandle;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY InLoadOrderModuleList;// Offset=0xc Size=0x8
    struct _LIST_ENTRY InMemoryOrderModuleList;// Offset=0x14 Size=0x8
    struct _LIST_ENTRY InInitializationOrderModuleList;// Offset=0x1c Size=0x8
    void * EntryInProgress;// Offset=0x24 Size=0x4
    unsigned char ShutdownInProgress;// Offset=0x28 Size=0x1
    void * ShutdownThreadId;// Offset=0x2c Size=0x4
};
