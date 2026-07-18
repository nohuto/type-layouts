struct _PROCESS_MITIGATION_DEP_POLICY// Size=0x8 (Id=1715)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DisableAtlThunkEmulation:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ReservedFlags:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    unsigned char Permanent;// Offset=0x4 Size=0x1
};
