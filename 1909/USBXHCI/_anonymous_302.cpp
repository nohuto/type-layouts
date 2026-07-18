struct _anonymous_300// Size=0x10 (Id=300)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_301// Size=0x18 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_302// Size=0x30 (Id=302)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_300 Input;// Offset=0x8 Size=0x10
    struct _anonymous_301 Output;// Offset=0x18 Size=0x18
};
