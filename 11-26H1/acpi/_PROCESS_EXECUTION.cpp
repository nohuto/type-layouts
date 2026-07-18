union _PROCESS_EXECUTION_TRANSITION// Size=0x2 (Id=435)
{
    short TransitionState;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short InProgress:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:7;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x7
    };
};

union _PROCESS_EXECUTION_STATE// Size=0x1 (Id=444)
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

union _PROCESS_EXECUTION// Size=0x4 (Id=436)
{
    long State;// Offset=0x0 Size=0x4
    union _PROCESS_EXECUTION_TRANSITION Transition;// Offset=0x0 Size=0x2
    union _PROCESS_EXECUTION_STATE Current;// Offset=0x2 Size=0x1
    union _PROCESS_EXECUTION_STATE Requested;// Offset=0x3 Size=0x1
};
