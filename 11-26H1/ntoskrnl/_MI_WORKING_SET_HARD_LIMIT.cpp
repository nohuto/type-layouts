struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_AGING_FACTORS// Size=0x50 (Id=2396)
{
    unsigned long long AvailablePages[8];// Offset=0x0 Size=0x40
    unsigned long long AverageAvailValue;// Offset=0x40 Size=0x8
    unsigned long AvailableDeviationPosition;// Offset=0x48 Size=0x4
};

struct _MI_WORKING_SET_HARD_LIMIT// Size=0x68 (Id=2435)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    struct _MMSUPPORT_INSTANCE * Vm;// Offset=0x10 Size=0x8
    struct _MI_AGING_FACTORS AgingFactors;// Offset=0x18 Size=0x50
};
