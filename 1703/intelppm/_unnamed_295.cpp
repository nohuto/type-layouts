struct _unnamed_293// Size=0x10 (Id=293)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_294// Size=0x18 (Id=294)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_295// Size=0x30 (Id=295)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_293 Input;// Offset=0x8 Size=0x10
    struct _unnamed_294 Output;// Offset=0x18 Size=0x18
};
