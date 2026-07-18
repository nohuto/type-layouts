struct _RAID_ADAPTER_POFX// Size=0x60 (Id=307)
{
    struct POHANDLE__ * PoHandle;// Offset=0x0 Size=0x8
    void * PoFxDevice;// Offset=0x8 Size=0x8
    unsigned long CurrentFState;// Offset=0x10 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Active:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DevicePowerRequired:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long StoppedActiveReference:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DPNRInCS:1;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long F1InCS:1;// Offset=0x14 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved0:27;// Offset=0x14 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned char RegisteredPerfSets;// Offset=0x18 Size=0x1
    unsigned long long OperationalPowerMax;// Offset=0x20 Size=0x8
    unsigned long long OperationalPowerMin;// Offset=0x28 Size=0x8
    unsigned long long MaxOperationalPower[3];// Offset=0x30 Size=0x18
    unsigned long long ActiveReferences;// Offset=0x48 Size=0x8
    unsigned long long IoctlActiveReferences;// Offset=0x50 Size=0x8
    unsigned long long MiniportActiveReferences;// Offset=0x58 Size=0x8
};
