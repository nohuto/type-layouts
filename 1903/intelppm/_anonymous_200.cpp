struct _anonymous_197// Size=0x10 (Id=197)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_198// Size=0x10 (Id=198)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_199// Size=0x10 (Id=199)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_200// Size=0x10 (Id=200)
{
    struct _anonymous_197 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_198 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_199 HandleType;// Offset=0x0 Size=0x10
};
