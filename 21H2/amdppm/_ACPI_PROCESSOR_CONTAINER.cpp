struct _UNICODE_STRING// Size=0x10 (Id=65)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _ACPI_PROCESSOR_CONTAINER// Size=0x28 (Id=663)
{
    struct _UNICODE_STRING NamespacePath;// Offset=0x0 Size=0x10
    struct ACPI_LPI * LpiStates;// Offset=0x10 Size=0x8
    unsigned long ParentProcessorContainer;// Offset=0x18 Size=0x4
    unsigned long ChildProcessorCount;// Offset=0x1c Size=0x4
    unsigned long * ChildProcessors;// Offset=0x20 Size=0x8
};
