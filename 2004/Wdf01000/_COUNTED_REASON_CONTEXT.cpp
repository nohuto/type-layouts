struct _UNICODE_STRING// Size=0x10 (Id=101)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _COUNTED_REASON_CONTEXT// Size=0x28 (Id=2322)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    union // Size=0x28 (Id=0)
    {
        struct _UNICODE_STRING ResourceFileName;// Offset=0x8 Size=0x10
        unsigned short ResourceReasonId;// Offset=0x18 Size=0x2
        unsigned long StringCount;// Offset=0x1c Size=0x4
        struct _UNICODE_STRING * ReasonStrings;// Offset=0x20 Size=0x8
        struct _UNICODE_STRING SimpleString;// Offset=0x8 Size=0x10
    };
};
