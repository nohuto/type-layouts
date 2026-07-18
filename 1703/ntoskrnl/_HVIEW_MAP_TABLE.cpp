struct _HVIEW_MAP_ENTRY// Size=0x20 (Id=1543)
{
    union // Size=0x8 (Id=0)
    {
        void * ViewStart;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long IsPinned:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
    void * Bcb;// Offset=0x8 Size=0x8
    unsigned long long PinnedPages;// Offset=0x10 Size=0x8
    unsigned long Size;// Offset=0x18 Size=0x4
};

struct _HVIEW_MAP_TABLE// Size=0x800 (Id=1530)
{
    struct _HVIEW_MAP_ENTRY Entries[64];// Offset=0x0 Size=0x800
};
