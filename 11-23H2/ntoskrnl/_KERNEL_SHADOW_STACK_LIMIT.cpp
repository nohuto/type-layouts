union _KERNEL_SHADOW_STACK_LIMIT// Size=0x8 (Id=1089)
{
    unsigned long long AllFields;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ShadowStackType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Unused:9;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x9
        unsigned long long ShadowStackLimitPfn:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
};
