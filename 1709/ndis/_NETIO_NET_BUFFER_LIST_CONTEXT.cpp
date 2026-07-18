struct _NETIO_NET_BUFFER_LIST_CONTEXT// Size=0x20 (Id=169)
{
    long ReferenceCount;// Offset=0x0 Size=0x4
    struct _NET_BUFFER_LIST * Parent;// Offset=0x8 Size=0x8
    void  ( * CompletionRoutine)(struct _NET_BUFFER_LIST * ,unsigned long ,unsigned char );// Offset=0x10 Size=0x8
    void * CompletionContext;// Offset=0x18 Size=0x8
};
