struct _INVERTED_FUNCTION_TABLE_ENTRY// Size=0x18 (Id=509)
{
    union // Size=0x8 (Id=0)
    {
        struct _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionTable;// Offset=0x0 Size=0x8
        struct _DYNAMIC_FUNCTION_TABLE * DynamicTable;// Offset=0x0 Size=0x8
    };
    void * ImageBase;// Offset=0x8 Size=0x8
    unsigned long SizeOfImage;// Offset=0x10 Size=0x4
    unsigned long SizeOfTable;// Offset=0x14 Size=0x4
};

struct _INVERTED_FUNCTION_TABLE// Size=0x3010 (Id=357)
{
    unsigned long CurrentSize;// Offset=0x0 Size=0x4
    unsigned long MaximumSize;// Offset=0x4 Size=0x4
    unsigned long Epoch;// Offset=0x8 Size=0x4
    unsigned char Overflow;// Offset=0xc Size=0x1
    struct _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[512];// Offset=0x10 Size=0x3000
};
