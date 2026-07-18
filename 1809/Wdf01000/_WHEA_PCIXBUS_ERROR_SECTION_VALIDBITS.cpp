union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3672)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long BusId:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long BusAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long BusData:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long BusCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CompleterId:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved:55;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x37
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
