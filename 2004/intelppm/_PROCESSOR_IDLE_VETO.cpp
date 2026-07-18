struct _PROCESSOR_NUMBER// Size=0x4 (Id=455)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _PROCESSOR_IDLE_VETO// Size=0x14 (Id=664)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long StateIndex;// Offset=0x8 Size=0x4
    unsigned long VetoReason;// Offset=0xc Size=0x4
    unsigned char Increment;// Offset=0x10 Size=0x1
};
