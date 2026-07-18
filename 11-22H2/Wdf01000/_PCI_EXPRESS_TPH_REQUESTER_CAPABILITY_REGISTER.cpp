union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER// Size=0x4 (Id=905)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoStModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InteruptVectorModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeviceSpecificModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long ExtendedTPHRequesterSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long StTableLocation:2;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x2
        unsigned long Rsvd2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long StTableSize:11;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xb
        unsigned long Rsvd3:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
