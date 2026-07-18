struct _unnamed_278// Size=0x10 (Id=278)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_279// Size=0x18 (Id=279)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_280// Size=0x30 (Id=280)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_278 Input;// Offset=0x8 Size=0x10
    struct _unnamed_279 Output;// Offset=0x18 Size=0x18
};
