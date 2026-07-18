struct _KSALLOCATOR_DISPATCH// Size=0x20 (Id=1581)
{
    long  ( * InitializeAllocator)(struct _KSPIN * ,struct KSALLOCATOR_FRAMING * ,void ** );// Offset=0x0 Size=0x8
    void  ( * DeleteAllocator)(void * );// Offset=0x8 Size=0x8
    void *  ( * Allocate)(void * );// Offset=0x10 Size=0x8
    void  ( * Free)(void * ,void * );// Offset=0x18 Size=0x8
};
