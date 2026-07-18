struct _unnamed_297// Size=0x10 (Id=297)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_298// Size=0x18 (Id=298)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_299// Size=0x30 (Id=299)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_297 Input;// Offset=0x8 Size=0x10
    struct _unnamed_298 Output;// Offset=0x18 Size=0x18
};
