struct _REG_QUERY_KEY_NAME// Size=0x38 (Id=2347)
{
    void * Object;// Offset=0x0 Size=0x8
    struct _OBJECT_NAME_INFORMATION * ObjectNameInfo;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
    unsigned long * ReturnLength;// Offset=0x18 Size=0x8
    void * CallContext;// Offset=0x20 Size=0x8
    void * ObjectContext;// Offset=0x28 Size=0x8
    void * Reserved;// Offset=0x30 Size=0x8
};
