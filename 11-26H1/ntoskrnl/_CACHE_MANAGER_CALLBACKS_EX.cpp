struct _CACHE_MANAGER_CALLBACK_FUNCTIONS// Size=0x20 (Id=2002)
{
    unsigned char  ( * AcquireForLazyWriteEx)(void * ,unsigned long ,unsigned long * );// Offset=0x0 Size=0x8
    void  ( * ReleaseFromLazyWrite)(void * );// Offset=0x8 Size=0x8
    unsigned char  ( * AcquireForReadAhead)(void * ,unsigned char );// Offset=0x10 Size=0x8
    void  ( * ReleaseFromReadAhead)(void * );// Offset=0x18 Size=0x8
};

struct _CACHE_MANAGER_CALLBACKS_EX// Size=0x28 (Id=1523)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct _CACHE_MANAGER_CALLBACK_FUNCTIONS Functions;// Offset=0x8 Size=0x20
};
