struct _BUS_SPECIFIC_RESET_FLAGS::<unnamed-type-u>// Size=0x8 (Id=1037)
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
