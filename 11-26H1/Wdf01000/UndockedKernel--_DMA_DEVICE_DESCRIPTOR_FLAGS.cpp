union UndockedKernel::_DMA_DEVICE_DESCRIPTOR_FLAGS// Size=0x1 (Id=618)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IommuCompatibleCommonBuffers:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char EarlyCrashdumpAdapter:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char RunningUserModeDriver:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnusedFlags:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};
