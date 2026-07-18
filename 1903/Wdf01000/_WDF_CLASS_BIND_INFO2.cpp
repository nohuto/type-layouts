struct _WDF_CLASS_VERSION// Size=0xc (Id=705)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_CLASS_BIND_INFO// Size=0x50 (Id=1227)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    wchar_t * ClassName;// Offset=0x8 Size=0x8
    struct _WDF_CLASS_VERSION Version;// Offset=0x10 Size=0xc
    void  ( ** FunctionTable)();// Offset=0x20 Size=0x8
    unsigned long FunctionTableCount;// Offset=0x28 Size=0x4
    void * ClassBindInfo;// Offset=0x30 Size=0x8
    long  ( * ClientBindClass)(long  ( * )(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * ),struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x38 Size=0x8
    void  ( * ClientUnbindClass)(void  ( * )(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * ),struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x40 Size=0x8
    void * ClassModule;// Offset=0x48 Size=0x8
};

struct _WDF_CLASS_BIND_INFO2// Size=0x78 (Id=2577)
{
    struct _WDF_CLASS_BIND_INFO V1;// Offset=0x0 Size=0x50
    unsigned long * MinimumVersionRequired;// Offset=0x50 Size=0x8
    unsigned char * ClientVersionHigherThanFramework;// Offset=0x58 Size=0x8
    unsigned long * FuncCountPtr;// Offset=0x60 Size=0x8
    unsigned long * StructCountPtr;// Offset=0x68 Size=0x8
    unsigned long long ** StructTable;// Offset=0x70 Size=0x8
};
