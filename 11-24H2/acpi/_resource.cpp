struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _resource// Size=0x28 (Id=675)
{
    unsigned long dwResType;// Offset=0x0 Size=0x4
    struct _ctxt * pctxtOwner;// Offset=0x8 Size=0x8
    void * pvResObj;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY list;// Offset=0x18 Size=0x10
};
