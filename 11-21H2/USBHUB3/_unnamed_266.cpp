struct _unnamed_264// Size=0x10 (Id=264)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_265// Size=0x18 (Id=265)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_266// Size=0x30 (Id=266)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_264 Input;// Offset=0x8 Size=0x10
    struct _unnamed_265 Output;// Offset=0x18 Size=0x18
};
