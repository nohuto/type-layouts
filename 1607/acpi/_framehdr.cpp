struct _framehdr// Size=0x20 (Id=277)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    struct _framehdr * PreviousFrame;// Offset=0x8 Size=0x8
    unsigned long dwfFrame;// Offset=0x10 Size=0x4
    long  ( * pfnParse)(struct _ctxt * ,void * ,long );// Offset=0x18 Size=0x8
};
