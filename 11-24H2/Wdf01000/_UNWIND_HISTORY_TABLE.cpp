struct _UNWIND_HISTORY_TABLE_ENTRY// Size=0x10 (Id=198)
{
    unsigned long long ImageBase;// Offset=0x0 Size=0x8
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionEntry;// Offset=0x8 Size=0x8
};

struct _UNWIND_HISTORY_TABLE// Size=0xd8 (Id=201)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned char LocalHint;// Offset=0x4 Size=0x1
    unsigned char GlobalHint;// Offset=0x5 Size=0x1
    unsigned char Search;// Offset=0x6 Size=0x1
    unsigned char Once;// Offset=0x7 Size=0x1
    unsigned long long LowAddress;// Offset=0x8 Size=0x8
    unsigned long long HighAddress;// Offset=0x10 Size=0x8
    struct _UNWIND_HISTORY_TABLE_ENTRY Entry[12];// Offset=0x18 Size=0xc0
};
