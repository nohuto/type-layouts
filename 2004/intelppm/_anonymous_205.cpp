struct _anonymous_202// Size=0x10 (Id=202)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_203// Size=0x10 (Id=203)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_204// Size=0x10 (Id=204)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_205// Size=0x10 (Id=205)
{
    struct _anonymous_202 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_203 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_204 HandleType;// Offset=0x0 Size=0x10
};
