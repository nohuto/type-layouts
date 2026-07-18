struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO// Size=0x20 (Id=478)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _OB_HANDLE_REVOCATION_BLOCK * RevocationBlock;// Offset=0x10 Size=0x8
    unsigned char Padding1[4];// Offset=0x18 Size=0x4
    unsigned char Padding2[4];// Offset=0x1c Size=0x4
};
