struct _KAFFINITY_EX// Size=0xa8 (Id=527)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESSOR_IDLE_DOMAIN// Size=0xa8 (Id=566)
{
    struct _KAFFINITY_EX Members;// Offset=0x0 Size=0xa8
};

struct _PROCESSOR_IDLE_DOMAINS// Size=0x158 (Id=491)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _KAFFINITY_EX TargetProcessors;// Offset=0x8 Size=0xa8
    struct _PROCESSOR_IDLE_DOMAIN State[1];// Offset=0xb0 Size=0xa8
};
