struct _unnamed_280// Size=0x10 (Id=280)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_281// Size=0x18 (Id=281)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_282// Size=0x30 (Id=282)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_280 Input;// Offset=0x8 Size=0x10
    struct _unnamed_281 Output;// Offset=0x18 Size=0x18
};
