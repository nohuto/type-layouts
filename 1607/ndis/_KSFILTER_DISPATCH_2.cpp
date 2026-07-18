struct _KSFILTER_DISPATCH// Size=0x20 (Id=617)
{
    long  ( * Create)(struct _KSFILTER * ,struct _IRP * );// Offset=0x0 Size=0x8
    long  ( * Close)(struct _KSFILTER * ,struct _IRP * );// Offset=0x8 Size=0x8
    long  ( * Process)(struct _KSFILTER * ,struct _KSPROCESSPIN_INDEXENTRY * );// Offset=0x10 Size=0x8
    long  ( * Reset)(struct _KSFILTER * );// Offset=0x18 Size=0x8
};
