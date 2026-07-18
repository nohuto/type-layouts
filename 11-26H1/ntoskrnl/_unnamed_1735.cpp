struct _unnamed_1735// Size=0x8 (Id=1735)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long NonPagedBuddyTag:4;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x4
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0xa
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x3
        unsigned long long Spare:2;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x2
    };
};
