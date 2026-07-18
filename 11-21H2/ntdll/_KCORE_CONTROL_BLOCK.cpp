struct _KCORE_CONTROL_BLOCK// Size=0x48 (Id=479)
{
    unsigned char ProcessorCount;// Offset=0x0 Size=0x1
    unsigned char Spare[7];// Offset=0x1 Size=0x7
    struct _KPRCB * Prcbs[8];// Offset=0x8 Size=0x40
};
