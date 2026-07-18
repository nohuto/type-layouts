struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY// Size=0x4 (Id=3060)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long FilterId:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
            unsigned long ReservedFlags:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
};
