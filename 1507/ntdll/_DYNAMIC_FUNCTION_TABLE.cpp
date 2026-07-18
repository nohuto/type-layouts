struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=67)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _FUNCTION_TABLE_TYPE
{
    RF_SORTED=0,
    RF_UNSORTED=1,
    RF_CALLBACK=2,
    RF_KERNEL_DYNAMIC=3
};

struct _DYNAMIC_FUNCTION_TABLE// Size=0x58 (Id=486)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionTable;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER TimeStamp;// Offset=0x18 Size=0x8
    unsigned long long MinimumAddress;// Offset=0x20 Size=0x8
    unsigned long long MaximumAddress;// Offset=0x28 Size=0x8
    unsigned long long BaseAddress;// Offset=0x30 Size=0x8
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY *  ( * Callback)(unsigned long long ,void * );// Offset=0x38 Size=0x8
    void * Context;// Offset=0x40 Size=0x8
    unsigned short * OutOfProcessCallbackDll;// Offset=0x48 Size=0x8
    enum _FUNCTION_TABLE_TYPE Type;// Offset=0x50 Size=0x4
    unsigned long EntryCount;// Offset=0x54 Size=0x4
};
