struct _EX_RUNDOWN_REF// Size=0x8 (Id=180)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _HMAP_ENTRY// Size=0x28 (Id=1072)
{
    unsigned long long BlockOffset;// Offset=0x0 Size=0x8
    unsigned long long PermanentBinAddress;// Offset=0x8 Size=0x8
    unsigned long long TemporaryBinAddress;// Offset=0x10 Size=0x8
    struct _EX_RUNDOWN_REF TemporaryBinRundown;// Offset=0x18 Size=0x8
    unsigned long MemAlloc;// Offset=0x20 Size=0x4
};
