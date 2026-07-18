struct FxRequestBuffer// Size=0x20 (Id=1527)
{
    union // Size=0x444 (Id=0)
    {
        void FxRequestBuffer();// Offset=0x0 Size=0x18
        long ValidateMemoryDescriptor(struct _FX_DRIVER_GLOBALS * ,struct _WDF_MEMORY_DESCRIPTOR * ,unsigned long );// Offset=0x0 Size=0x33b
        void SetMemory(class IFxMemory * ,struct _WDFMEMORY_OFFSET * );// Offset=0x0 Size=0x57
        void SetMdl(struct _MDL * ,unsigned long );
        void SetBuffer(void * ,unsigned long );
        unsigned char HasMdl();
        unsigned long GetBufferLength();// Offset=0x0 Size=0xa1
        long GetBuffer(void ** );// Offset=0x0 Size=0x13a
        long GetOrAllocateMdl(struct _FX_DRIVER_GLOBALS * ,struct _MDL ** ,struct _MDL ** ,unsigned char * ,enum _LOCK_OPERATION ,unsigned char ,unsigned long long * );// Offset=0x0 Size=0x444
        long GetOrAllocateMdlWorker(struct _FX_DRIVER_GLOBALS * ,struct _MDL ** ,unsigned char * ,long ,void * ,unsigned long long * ,unsigned char ,struct _MDL ** );
        void AssignValues(void ** ,struct _MDL ** ,unsigned long * );
        enum FxRequestBufferType DataType;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x18 (Id=65775)
        {
            struct <unnamed-type-Memory>// Size=0x10 (Id=65776)
            {
                class IFxMemory * Memory;// Offset=0x0 Size=0x8
                struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0x10
            struct <unnamed-type-Mdl>// Size=0x10 (Id=65780)
            {
                struct _MDL * Mdl;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Mdl> Mdl;// Offset=0x0 Size=0x10
            struct <unnamed-type-Buffer>// Size=0x10 (Id=65784)
            {
                void * Buffer;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct FxRequestBuffer::<unnamed-type-u>::<unnamed-type-Buffer> Buffer;// Offset=0x0 Size=0x10
            struct <unnamed-type-RefMdl>// Size=0x18 (Id=65788)
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
