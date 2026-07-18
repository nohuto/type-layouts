union _PROCESS_EXECUTION_STATE// Size=0x1 (Id=585)
{
    char State;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessFrozen:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ProcessSwapped:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ProcessGraphicsFreezeOptimized:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};
