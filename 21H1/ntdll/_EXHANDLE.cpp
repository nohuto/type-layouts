struct _EXHANDLE// Size=0x4 (Id=347)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TagBits:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Index:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        void * GenericHandleOverlay;// Offset=0x0 Size=0x4
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};
