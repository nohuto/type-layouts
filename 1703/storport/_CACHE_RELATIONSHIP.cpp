enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _GROUP_AFFINITY// Size=0x10 (Id=145)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _CACHE_RELATIONSHIP// Size=0x30 (Id=457)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long CacheSize;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
    unsigned char Reserved[20];// Offset=0xc Size=0x14
    struct _GROUP_AFFINITY GroupMask;// Offset=0x20 Size=0x10
};
