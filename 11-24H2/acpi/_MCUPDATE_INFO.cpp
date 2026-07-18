struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MCUPDATE_INFO// Size=0x30 (Id=232)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Status;// Offset=0x10 Size=0x4
    unsigned long long Id;// Offset=0x18 Size=0x8
    unsigned long long VendorScratch[2];// Offset=0x20 Size=0x10
};
