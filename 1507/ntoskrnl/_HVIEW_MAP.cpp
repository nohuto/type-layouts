struct _EX_PUSH_LOCK// Size=0x8 (Id=76)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _HVIEW_MAP_PIN_LOG_ENTRY// Size=0x48 (Id=1370)
{
    unsigned long ViewOffset;// Offset=0x0 Size=0x4
    unsigned char Pinned;// Offset=0x4 Size=0x1
    unsigned long long PinMask;// Offset=0x8 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x10 Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _HVIEW_MAP_PIN_LOG// Size=0x488 (Id=1188)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];// Offset=0x8 Size=0x480
};

struct _HVIEW_MAP// Size=0x4b0 (Id=785)
{
    unsigned long MappedLength;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK Lock;// Offset=0x8 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    struct _HVIEW_MAP_DIRECTORY * Directory;// Offset=0x18 Size=0x8
    unsigned long PagesCharged;// Offset=0x20 Size=0x4
    struct _HVIEW_MAP_PIN_LOG PinLog;// Offset=0x28 Size=0x488
};
