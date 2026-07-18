struct _anonymous_260// Size=0x10 (Id=260)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_261// Size=0x18 (Id=261)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_262// Size=0x30 (Id=262)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_260 Input;// Offset=0x8 Size=0x10
    struct _anonymous_261 Output;// Offset=0x18 Size=0x18
};
