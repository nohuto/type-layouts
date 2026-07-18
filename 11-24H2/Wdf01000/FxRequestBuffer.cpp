struct FxRequestBuffer// Size=0x20 (Id=1459)
{
    union // Size=0x44d (Id=0)
    {
        void FxRequestBuffer();// Offset=0x0 Size=0x15
        long ValidateMemoryDescriptor(struct _FX_DRIVER_GLOBALS * ,struct _WDF_MEMORY_DESCRIPTOR * ,unsigned long );// Offset=0x0 Size=0x324
        void SetMemory(class IFxMemory * ,struct _WDFMEMORY_OFFSET * );// Offset=0x0 Size=0x57
        void SetMdl(struct _MDL * ,unsigned long );
        void SetBuffer(void * ,unsigned long );
        unsigned char HasMdl();
        unsigned long GetBufferLength();// Offset=0x0 Size=0xc5
        long GetBuffer(void ** );// Offset=0x0 Size=0x137
        long GetOrAllocateMdl(struct _FX_DRIVER_GLOBALS * ,struct _MDL ** ,struct _MDL ** ,unsigned char * ,enum _LOCK_OPERATION ,unsigned char ,unsigned long long * );// Offset=0x0 Size=0x44d
        long GetOrAllocateMdlWorker(struct _FX_DRIVER_GLOBALS * ,struct _MDL ** ,unsigned char * ,long ,void * ,unsigned long long * ,unsigned char ,struct _MDL ** );
        void AssignValues(void ** ,struct _MDL ** ,unsigned long * );
        enum FxRequestBufferType DataType;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x18 (Id=64315)
        {
            struct <unnamed-type-Memory>// Size=0x10 (Id=64316)
            {
                class IFxMemory * Memory;// Offset=0x0 Size=0x8
                struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0x10
            struct <unnamed-type-Mdl>// Size=0x10 (Id=64320)
            {
                struct _MDL * Mdl;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Mdl> Mdl;// Offset=0x0 Size=0x10
            struct <unnamed-type-Buffer>// Size=0x10 (Id=64324)
            {
                void * Buffer;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Buffer> Buffer;// Offset=0x0 Size=0x10
            struct <unnamed-type-RefMdl>// Size=0x18 (Id=64328)
            {
                class IFxMemory * Memory;// Offset=0x0 Size=0x8
                struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
                struct _MDL * Mdl;// Offset=0x10 Size=0x8
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-RefMdl> RefMdl;// Offset=0x0 Size=0x18
        };
        union FxRequestBuffer::<unnamed-type-u> u;// Offset=0x8 Size=0x18
    };
};
