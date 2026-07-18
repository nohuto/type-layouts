struct _unnamed_289// Size=0x10 (Id=289)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_290// Size=0x18 (Id=290)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_291// Size=0x30 (Id=291)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_289 Input;// Offset=0x8 Size=0x10
    struct _unnamed_290 Output;// Offset=0x18 Size=0x18
};
