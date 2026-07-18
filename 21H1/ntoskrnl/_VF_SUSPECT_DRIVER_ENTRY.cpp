struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=415)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _VF_SUSPECT_DRIVER_ENTRY// Size=0x28 (Id=1251)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Loads;// Offset=0x10 Size=0x4
    unsigned long Unloads;// Offset=0x14 Size=0x4
    struct _UNICODE_STRING BaseName;// Offset=0x18 Size=0x10
};
