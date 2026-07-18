struct _unnamed_324// Size=0x10 (Id=324)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_325// Size=0x18 (Id=325)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_326// Size=0x30 (Id=326)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_324 Input;// Offset=0x8 Size=0x10
    struct _unnamed_325 Output;// Offset=0x18 Size=0x18
};
