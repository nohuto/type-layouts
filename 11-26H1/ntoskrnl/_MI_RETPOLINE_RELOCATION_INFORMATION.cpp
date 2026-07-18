struct _RTL_RETPOLINE_BINARY_INFO// Size=0x38 (Id=2200)
{
    unsigned long CfgDispatchFunctionPtrRva;// Offset=0x0 Size=0x4
    unsigned long IATRva;// Offset=0x4 Size=0x4
    unsigned long IATSize;// Offset=0x8 Size=0x4
    long * ImportRvas;// Offset=0x10 Size=0x8
    unsigned long long * IAT;// Offset=0x18 Size=0x8
    void * ImageBase;// Offset=0x20 Size=0x8
    unsigned long  ( * CheckFunction)(void * );// Offset=0x28 Size=0x8
    long RetpolineStubsStartRva;// Offset=0x30 Size=0x4
};

struct _MI_RETPOLINE_RELOCATION_INFORMATION// Size=0x48 (Id=1291)
{
    struct _RTL_RETPOLINE_BINARY_INFO BinaryInfo;// Offset=0x0 Size=0x38
    void * RelocationBuffer;// Offset=0x38 Size=0x8
    struct _RTL_RETPOLINE_RELOCATION_INDEX * Index[1];// Offset=0x40 Size=0x8
};
