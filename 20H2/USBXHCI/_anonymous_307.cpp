struct _anonymous_305// Size=0x10 (Id=305)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_306// Size=0x18 (Id=306)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_307// Size=0x30 (Id=307)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_305 Input;// Offset=0x8 Size=0x10
    struct _anonymous_306 Output;// Offset=0x18 Size=0x18
};
