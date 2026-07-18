struct _REG_SET_VALUE_KEY_INFORMATION// Size=0x40 (Id=2992)
{
    void * Object;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING * ValueName;// Offset=0x8 Size=0x8
    unsigned long TitleIndex;// Offset=0x10 Size=0x4
    unsigned long Type;// Offset=0x14 Size=0x4
    void * Data;// Offset=0x18 Size=0x8
    unsigned long DataSize;// Offset=0x20 Size=0x4
    void * CallContext;// Offset=0x28 Size=0x8
    void * ObjectContext;// Offset=0x30 Size=0x8
    void * Reserved;// Offset=0x38 Size=0x8
};
