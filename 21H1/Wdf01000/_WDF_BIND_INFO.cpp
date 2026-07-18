struct _WDF_VERSION// Size=0xc (Id=943)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _WDF_BIND_INFO// Size=0x30 (Id=598)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    wchar_t * Component;// Offset=0x8 Size=0x8
    struct _WDF_VERSION Version;// Offset=0x10 Size=0xc
    unsigned long FuncCount;// Offset=0x1c Size=0x4
    void  ( ** FuncTable)();// Offset=0x20 Size=0x8
    struct _LIBRARY_MODULE * Module;// Offset=0x28 Size=0x8
};
