union _anonymous_542// Size=0x8 (Id=542)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PteFrame:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
        unsigned long long ResidentPage:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long Unused1:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long Unused2:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long Partition:10;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0xa
        unsigned long long FileOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0x1
        unsigned long long PfnExists:1;// Offset=0x0 Size=0x8 BitOffset=0x32 BitSize=0x1
        unsigned long long Spare:9;// Offset=0x0 Size=0x8 BitOffset=0x33 BitSize=0x9
        unsigned long long PageIdentity:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long PrototypePte:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};
