struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY// Size=0x4 (Id=1891)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ProhibitDynamicCode:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReservedFlags:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
    };
};
