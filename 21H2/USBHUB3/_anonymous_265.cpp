struct _anonymous_263// Size=0x10 (Id=263)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_264// Size=0x18 (Id=264)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_265// Size=0x30 (Id=265)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_263 Input;// Offset=0x8 Size=0x10
    struct _anonymous_264 Output;// Offset=0x18 Size=0x18
};
