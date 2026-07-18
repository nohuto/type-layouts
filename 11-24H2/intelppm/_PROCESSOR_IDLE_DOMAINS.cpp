struct _KAFFINITY_EX// Size=0x108 (Id=67)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _PROCESSOR_IDLE_DOMAIN// Size=0x108 (Id=641)
{
    struct _KAFFINITY_EX Members;// Offset=0x0 Size=0x108
};

struct _PROCESSOR_IDLE_DOMAINS// Size=0x218 (Id=629)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _KAFFINITY_EX TargetProcessors;// Offset=0x8 Size=0x108
    struct _PROCESSOR_IDLE_DOMAIN State[1];// Offset=0x110 Size=0x108
};
