struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_766// Size=0x20 (Id=766)
{
    enum PROFILE_STATUS DockStatus;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x8 Size=0x10
    wchar_t * SerialNumber;// Offset=0x18 Size=0x8
};
