struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _MCUPDATE_INFO// Size=0x28 (Id=192)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x8
    unsigned long Status;// Offset=0x8 Size=0x4
    unsigned long long Id;// Offset=0x10 Size=0x8
    unsigned long long VendorScratch[2];// Offset=0x18 Size=0x10
};
