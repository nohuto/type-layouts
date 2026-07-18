struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _NDIS_OID_REQUEST_RESERVED::_unnamed_963// Size=0x10 (Id=963)
{
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
        struct _NDIS_OID_REQUEST * NextRequest;// Offset=0x0 Size=0x8
        int Status;// Offset=0x8 Size=0x4
    };
};
