union _KCCB_SHADOW_PROCESSOR_STATE// Size=0x1 (Id=664)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Idle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Transitioning:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
    unsigned char AllState;// Offset=0x0 Size=0x1
};
