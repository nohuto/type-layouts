struct _WDF_CLASS_VERSION_V1_9// Size=0xc (Id=5449)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_CLASS_BIND_INFO_V1_9// Size=0x50 (Id=5186)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    wchar_t * ClassName;// Offset=0x8 Size=0x8
    struct _WDF_CLASS_VERSION_V1_9 Version;// Offset=0x10 Size=0xc
    void  ( ** FunctionTable)();// Offset=0x20 Size=0x8
    unsigned long FunctionTableCount;// Offset=0x28 Size=0x4
    void * ClassBindInfo;// Offset=0x30 Size=0x8
    long  ( * ClientBindClass)(long  ( * )(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * ),struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x38 Size=0x8
    void  ( * ClientUnbindClass)(void  ( * )(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * ),struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x40 Size=0x8
    void * ClassModule;// Offset=0x48 Size=0x8
};
