struct _LIST_ENTRY// Size=0x10 (Id=3400)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KADDRESS_RANGE// Size=0x10 (Id=2687)
{
    void * Address;// Offset=0x0 Size=0x8
    unsigned long long Size;// Offset=0x8 Size=0x8
};

struct _KTRIAGE_DUMP_DATA_ARRAY// Size=0x40 (Id=2415)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long NumBlocksUsed;// Offset=0x10 Size=0x4
    unsigned long NumBlocksTotal;// Offset=0x14 Size=0x4
    unsigned long DataSize;// Offset=0x18 Size=0x4
    unsigned long MaxDataSize;// Offset=0x1c Size=0x4
    unsigned long ComponentNameBufferLength;// Offset=0x20 Size=0x4
    unsigned char * ComponentName;// Offset=0x28 Size=0x8
    struct _KADDRESS_RANGE Blocks[1];// Offset=0x30 Size=0x10
};
