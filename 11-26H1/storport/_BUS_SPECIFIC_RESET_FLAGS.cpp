struct _unnamed_887// Size=0x8 (Id=887)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long KeepStackReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long EnablePciHotPlugThroughPcr:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long EnablePciDllsceThroughPcr:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DisablePciLinkThroughPcr:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Reserved:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _BUS_SPECIFIC_RESET_FLAGS// Size=0x8 (Id=888)
{
    struct _unnamed_887 u;// Offset=0x0 Size=0x8
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
