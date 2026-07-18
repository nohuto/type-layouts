struct _PROC_ENERGY_ESTIMATION_PARAMS// Size=0x78 (Id=527)
{
    unsigned long long Energy;// Offset=0x0 Size=0x8
    unsigned long EnergyMsr;// Offset=0x8 Size=0x4
    void * PmcHandle;// Offset=0x10 Size=0x8
    unsigned long long CurrentPmc[4];// Offset=0x18 Size=0x20
    unsigned long long PreviousPmc[4];// Offset=0x38 Size=0x20
    unsigned long long SnapPmc[4];// Offset=0x58 Size=0x20
};
