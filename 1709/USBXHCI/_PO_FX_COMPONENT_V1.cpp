struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PO_FX_COMPONENT_V1// Size=0x20 (Id=759)
{
    struct _GUID Id;// Offset=0x0 Size=0x10
    unsigned long IdleStateCount;// Offset=0x10 Size=0x4
    unsigned long DeepestWakeableIdleState;// Offset=0x14 Size=0x4
    struct _PO_FX_COMPONENT_IDLE_STATE * IdleStates;// Offset=0x18 Size=0x8
};
