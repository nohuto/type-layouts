struct _WDF_CLASS_VERSION_V1_9// Size=0xc (Id=4258)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_CLASS_LIBRARY_INFO_V1_9// Size=0x30 (Id=3709)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _WDF_CLASS_VERSION_V1_9 Version;// Offset=0x4 Size=0xc
    long  ( * ClassLibraryInitialize)();// Offset=0x10 Size=0x8
    void  ( * ClassLibraryDeinitialize)();// Offset=0x18 Size=0x8
    long  ( * ClassLibraryBindClient)(struct _WDF_CLASS_BIND_INFO * ,void ** );// Offset=0x20 Size=0x8
    void  ( * ClassLibraryUnbindClient)(struct _WDF_CLASS_BIND_INFO * ,void ** );// Offset=0x28 Size=0x8
};
