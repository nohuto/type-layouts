struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HANDLE_REVOCATION_INFO// Size=0x20 (Id=1108)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _OB_HANDLE_REVOCATION_BLOCK * RevocationBlock;// Offset=0x10 Size=0x8
    unsigned char AllowHandleRevocation;// Offset=0x18 Size=0x1
    unsigned char Padding1[3];// Offset=0x19 Size=0x3
    unsigned char Padding2[4];// Offset=0x1c Size=0x4
};

struct _OB_EXTENDED_USER_INFO// Size=0x10 (Id=1107)
{
    void * Context1;// Offset=0x0 Size=0x8
    void * Context2;// Offset=0x8 Size=0x8
};

struct _OBJECT_FOOTER// Size=0x30 (Id=1106)
{
    struct _HANDLE_REVOCATION_INFO HandleRevocationInfo;// Offset=0x0 Size=0x20
    struct _OB_EXTENDED_USER_INFO ExtendedUserInfo;// Offset=0x20 Size=0x10
};
