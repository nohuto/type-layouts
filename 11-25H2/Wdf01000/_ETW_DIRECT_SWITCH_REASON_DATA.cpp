struct _ETW_DIRECT_SWITCH_REASON_DATA// Size=0x4 (Id=1094)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short Successful:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short QuantumDonation:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short FullPriorityDonation:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short ReducedPriorityDonation:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        };
        unsigned short Flags;// Offset=0x0 Size=0x2
    };
    unsigned char DonatedPriority;// Offset=0x2 Size=0x1
    unsigned char SpareByte;// Offset=0x3 Size=0x1
};
