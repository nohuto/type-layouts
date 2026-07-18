struct _UNICODE_STRING// Size=0x10 (Id=156)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _EXECUTION_CONTEXT_CONFIGURATION// Size=0x28 (Id=478)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _EXECUTION_CONTEXT_RUNTIME_KNOBS * RuntimeKnobs;// Offset=0x8 Size=0x8
    struct _GUID * ClientIdentifier;// Offset=0x10 Size=0x8
    struct _UNICODE_STRING ClientFriendlyName;// Offset=0x18 Size=0x10
};
