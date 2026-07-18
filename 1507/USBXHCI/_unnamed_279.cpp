struct _unnamed_277// Size=0x10 (Id=277)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_278// Size=0x18 (Id=278)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_279// Size=0x30 (Id=279)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_277 Input;// Offset=0x8 Size=0x10
    struct _unnamed_278 Output;// Offset=0x18 Size=0x18
};
