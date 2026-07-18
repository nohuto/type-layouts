union _PCI_EXPRESS_DEVICE_STATUS_REGISTER// Size=0x2 (Id=1910)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CorrectableErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short NonFatalErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FatalErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short UnsupportedRequestDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short AuxPowerDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short TransactionsPending:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short Rsvd:10;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0xa
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
