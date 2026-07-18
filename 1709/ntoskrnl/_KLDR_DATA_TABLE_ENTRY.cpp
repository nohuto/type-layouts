struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _unnamed_946// Size=0x2 (Id=946)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SignatureLevel:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short SignatureType:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short Unused:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
    unsigned short EntireField;// Offset=0x0 Size=0x2
};

struct _KLDR_DATA_TABLE_ENTRY// Size=0xa0 (Id=947)
{
    struct _LIST_ENTRY InLoadOrderLinks;// Offset=0x0 Size=0x10
    void * ExceptionTable;// Offset=0x10 Size=0x8
    unsigned long ExceptionTableSize;// Offset=0x18 Size=0x4
    void * GpValue;// Offset=0x20 Size=0x8
    struct _NON_PAGED_DEBUG_INFO * NonPagedDebugInfo;// Offset=0x28 Size=0x8
    void * DllBase;// Offset=0x30 Size=0x8
    void * EntryPoint;// Offset=0x38 Size=0x8
    unsigned long SizeOfImage;// Offset=0x40 Size=0x4
    struct _UNICODE_STRING FullDllName;// Offset=0x48 Size=0x10
    struct _UNICODE_STRING BaseDllName;// Offset=0x58 Size=0x10
    unsigned long Flags;// Offset=0x68 Size=0x4
    unsigned short LoadCount;// Offset=0x6c Size=0x2
    union _unnamed_946 u1;// Offset=0x6e Size=0x2
    void * SectionPointer;// Offset=0x70 Size=0x8
    unsigned long CheckSum;// Offset=0x78 Size=0x4
    unsigned long CoverageSectionSize;// Offset=0x7c Size=0x4
    void * CoverageSection;// Offset=0x80 Size=0x8
    void * LoadedImports;// Offset=0x88 Size=0x8
    void * Spare;// Offset=0x90 Size=0x8
    unsigned long SizeOfImageNotRounded;// Offset=0x98 Size=0x4
    unsigned long TimeDateStamp;// Offset=0x9c Size=0x4
};
