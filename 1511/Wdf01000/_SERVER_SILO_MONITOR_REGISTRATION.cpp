struct _SERVER_SILO_MONITOR_REGISTRATION// Size=0x30 (Id=3548)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short Version;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short UsePagedPoolForContexts:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        };
        unsigned long long Reserved;// Offset=0x0 Size=0x8
    };
    long  ( * CreateCallback)(struct _ESILO * );// Offset=0x8 Size=0x8
    void  ( * TerminateCallback)(struct _ESILO * ,void * );// Offset=0x10 Size=0x8
    void  ( * DriverLoadCallback)(struct _ESILO * ,void * );// Offset=0x18 Size=0x8
    void  ( * DriverUnloadCallback)(struct _ESILO * ,void * );// Offset=0x20 Size=0x8
    void  ( * ContextCleanupCallback)(void * );// Offset=0x28 Size=0x8
};
