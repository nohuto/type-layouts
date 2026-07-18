struct _unnamed_301// Size=0x10 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_302// Size=0x18 (Id=302)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_303// Size=0x30 (Id=303)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_301 Input;// Offset=0x8 Size=0x10
    struct _unnamed_302 Output;// Offset=0x18 Size=0x18
};
