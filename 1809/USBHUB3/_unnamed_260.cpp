struct _unnamed_258// Size=0x10 (Id=258)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_259// Size=0x18 (Id=259)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_260// Size=0x30 (Id=260)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_258 Input;// Offset=0x8 Size=0x10
    struct _unnamed_259 Output;// Offset=0x18 Size=0x18
};
