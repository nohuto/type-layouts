struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _BITMAP_RANGE// Size=0x30 (Id=478)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    long long BasePage;// Offset=0x10 Size=0x8
    unsigned long FirstDirtyPage;// Offset=0x18 Size=0x4
    unsigned long LastDirtyPage;// Offset=0x1c Size=0x4
    unsigned long DirtyPages;// Offset=0x20 Size=0x4
    unsigned long * Bitmap;// Offset=0x28 Size=0x8
};
