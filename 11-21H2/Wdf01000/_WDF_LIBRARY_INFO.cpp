struct _WDF_VERSION// Size=0xc (Id=2161)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_LIBRARY_INFO// Size=0x38 (Id=1563)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * LibraryCommission)();// Offset=0x8 Size=0x8
    long  ( * LibraryDecommission)();// Offset=0x10 Size=0x8
    long  ( * LibraryRegisterClient)(struct _WDF_BIND_INFO * ,void *** ,void ** );// Offset=0x18 Size=0x8
    long  ( * LibraryUnregisterClient)(struct _WDF_BIND_INFO * ,void ** );// Offset=0x20 Size=0x8
    struct _WDF_VERSION Version;// Offset=0x28 Size=0xc
};
