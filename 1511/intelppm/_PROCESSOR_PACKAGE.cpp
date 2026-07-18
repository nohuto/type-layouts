struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0xa8 (Id=487)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESSOR_PACKAGE// Size=0xd0 (Id=526)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DevExtHead;// Offset=0x10 Size=0x10
    union // Size=0xa8 (Id=0)
    {
        struct _KAFFINITY_EX Members;// Offset=0x20 Size=0xa8
        unsigned long Id;// Offset=0x20 Size=0x4
        unsigned long Total;// Offset=0xc8 Size=0x4
    };
    unsigned long Count;// Offset=0xcc Size=0x4
};
