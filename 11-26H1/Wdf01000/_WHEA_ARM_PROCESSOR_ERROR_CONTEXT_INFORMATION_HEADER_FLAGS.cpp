union _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS// Size=0x4 (Id=3316)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExceptionLevel:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NonSecure:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AArch64:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
