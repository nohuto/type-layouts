struct _unnamed_321// Size=0x10 (Id=321)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_322// Size=0x18 (Id=322)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_323// Size=0x30 (Id=323)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_321 Input;// Offset=0x8 Size=0x10
    struct _unnamed_322 Output;// Offset=0x18 Size=0x18
};
