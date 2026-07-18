union FxRequestBuffer::<unnamed-type-u>// Size=0x18 (Id=987)
{
    struct <unnamed-type-Memory>// Size=0x10 (Id=68017)
    {
        class IFxMemory * Memory;// Offset=0x0 Size=0x8
        struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
    };
    struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0x10
    struct <unnamed-type-Mdl>// Size=0x10 (Id=68021)
    {
        struct _MDL * Mdl;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Mdl> Mdl;// Offset=0x0 Size=0x10
    struct <unnamed-type-Buffer>// Size=0x10 (Id=68025)
    {
        void * Buffer;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Buffer> Buffer;// Offset=0x0 Size=0x10
    struct <unnamed-type-RefMdl>// Size=0x18 (Id=68029)
    {
        class IFxMemory * Memory;// Offset=0x0 Size=0x8
        struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
        struct _MDL * Mdl;// Offset=0x10 Size=0x8
    };
    struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-RefMdl> RefMdl;// Offset=0x0 Size=0x18
};
