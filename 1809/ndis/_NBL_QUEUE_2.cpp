struct _NBL_QUEUE// Size=0x10 (Id=186)
{
    struct _NET_BUFFER_LIST * First;// Offset=0x0 Size=0x8
    struct _NET_BUFFER_LIST ** Last;// Offset=0x8 Size=0x8
    void _NBL_QUEUE(struct _NBL_QUEUE * );
    void _NBL_QUEUE(struct _NBL_QUEUE & );
    struct _NBL_QUEUE & operator=(struct _NBL_QUEUE * );
    struct _NBL_QUEUE & operator=(struct _NBL_QUEUE & );
};
