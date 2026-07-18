struct _unnamed_251// Size=0x10 (Id=251)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_252// Size=0x18 (Id=252)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_253// Size=0x30 (Id=253)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_251 Input;// Offset=0x8 Size=0x10
    struct _unnamed_252 Output;// Offset=0x18 Size=0x18
};
