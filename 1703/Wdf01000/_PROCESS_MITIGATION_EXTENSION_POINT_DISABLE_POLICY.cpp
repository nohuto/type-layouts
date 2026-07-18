struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY// Size=0x4 (Id=3579)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisableExtensionPoints:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReservedFlags:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
    };
};
