struct _NDIS_AOAC_WAKE_FLAGS// Size=0x4 (Id=1116)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long WasAoAcWake:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long WasNicRefTaken:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};
