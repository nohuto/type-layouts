struct _GUID// Size=0x10 (Id=63)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _STOR_POFX_COMPONENT_IDLE_STATE// Size=0x20 (Id=288)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long long TransitionLatency;// Offset=0x8 Size=0x8
    unsigned long long ResidencyRequirement;// Offset=0x10 Size=0x8
    unsigned long NominalPower;// Offset=0x18 Size=0x4
};

struct _STOR_POFX_COMPONENT// Size=0x40 (Id=285)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long FStateCount;// Offset=0x8 Size=0x4
    unsigned long DeepestWakeableFState;// Offset=0xc Size=0x4
    struct _GUID Id;// Offset=0x10 Size=0x10
    struct _STOR_POFX_COMPONENT_IDLE_STATE FStates[1];// Offset=0x20 Size=0x20
};

struct _STOR_POFX_DEVICE// Size=0x50 (Id=154)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long ComponentCount;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    struct _STOR_POFX_COMPONENT Components[1];// Offset=0x10 Size=0x40
};
