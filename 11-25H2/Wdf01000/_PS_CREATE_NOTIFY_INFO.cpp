struct _CLIENT_ID// Size=0x10 (Id=3366)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _PS_CREATE_NOTIFY_INFO// Size=0x48 (Id=3686)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x8 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long FileOpenNameAvailable:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IsSubsystemProcess:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    void * ParentProcessId;// Offset=0x10 Size=0x8
    struct _CLIENT_ID CreatingThreadId;// Offset=0x18 Size=0x10
    struct _FILE_OBJECT * FileObject;// Offset=0x28 Size=0x8
    struct _UNICODE_STRING * ImageFileName;// Offset=0x30 Size=0x8
    struct _UNICODE_STRING * CommandLine;// Offset=0x38 Size=0x8
    long CreationStatus;// Offset=0x40 Size=0x4
};
