struct _HMAP_ENTRY// Size=0x18 (Id=1276)
{
    unsigned long long BlockOffset;// Offset=0x0 Size=0x8
    unsigned long long PermanentBinAddress;// Offset=0x8 Size=0x8
    unsigned long MemAlloc;// Offset=0x10 Size=0x4
};

struct _HMAP_TABLE// Size=0x3000 (Id=1109)
{
    struct _HMAP_ENTRY Table[512];// Offset=0x0 Size=0x3000
};
