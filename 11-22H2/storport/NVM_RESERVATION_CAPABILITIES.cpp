union NVM_RESERVATION_CAPABILITIES// Size=0x1 (Id=861)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PersistThroughPowerLoss:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char WriteExclusiveReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExclusiveAccessReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char WriteExclusiveRegistrantsOnlyReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ExclusiveAccessRegistrantsOnlyReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char WriteExclusiveAllRegistrantsReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char ExclusiveAccessAllRegistrantsReservation:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};
