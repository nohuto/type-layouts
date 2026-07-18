struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TIMER_CHARACTERISTICS// Size=0x18 (Id=1014)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long AllocationTag;// Offset=0x4 Size=0x4
    void  ( * TimerFunction)(void * ,void * ,void * ,void * );// Offset=0x8 Size=0x8
    void * FunctionContext;// Offset=0x10 Size=0x8
};
