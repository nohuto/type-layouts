struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS// Size=0x58 (Id=304)
{
    unsigned long long UnitSizePages;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP ReservedUnitMap;// Offset=0x8 Size=0x10
    unsigned long ReservedUnitMapBuffer[16];// Offset=0x18 Size=0x40
};
