struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION// Size=0x30 (Id=1159)
{
    unsigned long SecurityAttributeCount;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY SecurityAttributesList;// Offset=0x8 Size=0x10
    unsigned long WorkingSecurityAttributeCount;// Offset=0x18 Size=0x4
    struct _LIST_ENTRY WorkingSecurityAttributesList;// Offset=0x20 Size=0x10
};
