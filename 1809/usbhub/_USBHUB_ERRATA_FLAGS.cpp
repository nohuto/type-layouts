union _USBHUB_ERRATA_FLAGS// Size=0x4 (Id=233)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ResetTTOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NoClearTTBufferOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
