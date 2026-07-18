struct NDIS_PCW_CONTEXT// Size=0x18 (Id=450)
{
    void NDIS_PCW_CONTEXT(struct _NDIS_MINIPORT_BLOCK * );
    struct _NDIS_PCW_DATA_BLOCK * PcwBlock;// Offset=0x0 Size=0x8
    unsigned long DatapathEventsMask;// Offset=0x8 Size=0x4
    unsigned long DatapathCyclesMask;// Offset=0xc Size=0x4
    unsigned long CurrentCpu;// Offset=0x10 Size=0x4
};
