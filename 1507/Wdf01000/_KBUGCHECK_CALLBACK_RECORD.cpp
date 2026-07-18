struct _LIST_ENTRY// Size=0x10 (Id=81)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KBUGCHECK_CALLBACK_RECORD// Size=0x40 (Id=1676)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(void * ,unsigned long );// Offset=0x10 Size=0x8
    void * Buffer;// Offset=0x18 Size=0x8
    unsigned long Length;// Offset=0x20 Size=0x4
    unsigned char * Component;// Offset=0x28 Size=0x8
    unsigned long long Checksum;// Offset=0x30 Size=0x8
    unsigned char State;// Offset=0x38 Size=0x1
};
