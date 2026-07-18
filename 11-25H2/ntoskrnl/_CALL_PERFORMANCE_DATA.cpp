struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CALL_PERFORMANCE_DATA// Size=0x408 (Id=2024)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY HashTable[64];// Offset=0x8 Size=0x400
};
