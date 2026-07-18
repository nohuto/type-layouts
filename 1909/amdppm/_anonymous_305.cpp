struct _anonymous_303// Size=0x10 (Id=303)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_304// Size=0x18 (Id=304)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_305// Size=0x30 (Id=305)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_303 Input;// Offset=0x8 Size=0x10
    struct _anonymous_304 Output;// Offset=0x18 Size=0x18
};
