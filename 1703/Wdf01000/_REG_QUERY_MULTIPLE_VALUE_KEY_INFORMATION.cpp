struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION// Size=0x48 (Id=3669)
{
    void * Object;// Offset=0x0 Size=0x8
    struct _KEY_VALUE_ENTRY * ValueEntries;// Offset=0x8 Size=0x8
    unsigned long EntryCount;// Offset=0x10 Size=0x4
    void * ValueBuffer;// Offset=0x18 Size=0x8
    unsigned long * BufferLength;// Offset=0x20 Size=0x8
    unsigned long * RequiredBufferLength;// Offset=0x28 Size=0x8
    void * CallContext;// Offset=0x30 Size=0x8
    void * ObjectContext;// Offset=0x38 Size=0x8
    void * Reserved;// Offset=0x40 Size=0x8
};
