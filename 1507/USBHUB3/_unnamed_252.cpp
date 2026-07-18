struct _unnamed_250// Size=0x10 (Id=250)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_251// Size=0x18 (Id=251)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_252// Size=0x30 (Id=252)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_250 Input;// Offset=0x8 Size=0x10
    struct _unnamed_251 Output;// Offset=0x18 Size=0x18
};
