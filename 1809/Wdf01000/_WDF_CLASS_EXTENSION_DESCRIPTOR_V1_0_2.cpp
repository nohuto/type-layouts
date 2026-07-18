struct _WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0// Size=0x20 (Id=2584)
{
    struct _WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0 * Next;// Offset=0x0 Size=0x8
    unsigned long Size;// Offset=0x8 Size=0x4
    long  ( * Bind)(struct _DRIVER_OBJECT * ,struct _UNICODE_STRING * );// Offset=0x10 Size=0x8
    void  ( * Unbind)(struct _DRIVER_OBJECT * );// Offset=0x18 Size=0x8
};
