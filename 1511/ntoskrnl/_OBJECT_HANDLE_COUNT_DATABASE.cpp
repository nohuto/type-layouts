struct _OBJECT_HANDLE_COUNT_ENTRY// Size=0x10 (Id=1079)
{
    struct _EPROCESS * Process;// Offset=0x0 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        unsigned long HandleCount:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long LockCount:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _OBJECT_HANDLE_COUNT_DATABASE// Size=0x18 (Id=721)
{
    unsigned long CountEntries;// Offset=0x0 Size=0x4
    struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1];// Offset=0x8 Size=0x10
};
