struct _EXHANDLE// Size=0x8 (Id=363)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TagBits:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Index:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        void * GenericHandleOverlay;// Offset=0x0 Size=0x8
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};
