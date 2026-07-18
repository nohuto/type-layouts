struct _I386_LOADER_BLOCK// Size=0x10 (Id=1935)
{
    void * CommonDataArea;// Offset=0x0 Size=0x8
    unsigned long MachineType;// Offset=0x8 Size=0x4
    unsigned long VirtualBias;// Offset=0xc Size=0x4
};

struct _ARM_LOADER_BLOCK// Size=0x4 (Id=2004)
{
    unsigned long PlaceHolder;// Offset=0x0 Size=0x4
};

union _anonymous_1747// Size=0x10 (Id=1747)
{
    union // Size=0x10 (Id=0)
    {
        struct _I386_LOADER_BLOCK I386;// Offset=0x0 Size=0x10
        struct _ARM_LOADER_BLOCK Arm;// Offset=0x0 Size=0x4
    };
};
