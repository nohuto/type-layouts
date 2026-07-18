union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=146)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long LocalAPICId:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CpuId:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ProcInfoCount:6;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x6
        unsigned long long ContextInfoCount:6;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x6
        unsigned long long Reserved:50;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x32
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_XPF_PROCESSOR_ERROR_SECTION// Size=0x41 (Id=135)
{
    union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned long long LocalAPICId;// Offset=0x8 Size=0x8
    unsigned char CpuId[48];// Offset=0x10 Size=0x30
    unsigned char VariableInfo[1];// Offset=0x40 Size=0x1
};
