struct _HVIEW_MAP_PIN_LOG_ENTRY// Size=0x48 (Id=1370)
{
    unsigned long ViewOffset;// Offset=0x0 Size=0x4
    unsigned char Pinned;// Offset=0x4 Size=0x1
    unsigned long long PinMask;// Offset=0x8 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x10 Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _HVIEW_MAP_PIN_LOG// Size=0x488 (Id=1188)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];// Offset=0x8 Size=0x480
};
