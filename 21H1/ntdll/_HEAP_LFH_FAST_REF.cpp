struct _HEAP_LFH_FAST_REF// Size=0x4 (Id=249)
{
    union // Size=0x4 (Id=0)
    {
        void * Target;// Offset=0x0 Size=0x4
        unsigned long Value;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long RefCount:12;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xc
        };
    };
};
