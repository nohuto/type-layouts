struct _unnamed_253// Size=0x10 (Id=253)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_254// Size=0x18 (Id=254)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_255// Size=0x30 (Id=255)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_253 Input;// Offset=0x8 Size=0x10
    struct _unnamed_254 Output;// Offset=0x18 Size=0x18
};
