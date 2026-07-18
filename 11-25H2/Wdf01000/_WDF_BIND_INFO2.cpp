struct _WDF_VERSION// Size=0xc (Id=2330)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_BIND_INFO// Size=0x30 (Id=1731)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    wchar_t * Component;// Offset=0x8 Size=0x8
    struct _WDF_VERSION Version;// Offset=0x10 Size=0xc
    unsigned long FuncCount;// Offset=0x1c Size=0x4
    void  ( ** FuncTable)();// Offset=0x20 Size=0x8
    struct _LIBRARY_MODULE * Module;// Offset=0x28 Size=0x8
};

struct _WDF_BIND_INFO2// Size=0x58 (Id=3508)
{
    struct _WDF_BIND_INFO V1;// Offset=0x0 Size=0x30
    unsigned long * MinimumVersionRequired;// Offset=0x30 Size=0x8
    unsigned char * ClientVersionHigherThanFramework;// Offset=0x38 Size=0x8
    unsigned long * FuncCountPtr;// Offset=0x40 Size=0x8
    unsigned long * StructCountPtr;// Offset=0x48 Size=0x8
    unsigned long long ** StructTable;// Offset=0x50 Size=0x8
};
