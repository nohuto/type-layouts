union _HV_INPUT_REQUEST_PROCESSOR_HALT_FLAGS// Size=0x4 (Id=776)
{
    unsigned int AsUINT32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int UseDefaultSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int RsvdZ:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};
