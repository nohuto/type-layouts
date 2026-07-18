union _PCI_EXPRESS_ROOT_ERROR_STATUS// Size=0x4 (Id=589)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CorrectableErrorReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MultipleCorrectableErrorsReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long UncorrectableErrorReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MultipleUncorrectableErrorsReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FirstUncorrectableFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long NonFatalErrorMessagesReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long FatalErrorMessagesReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:20;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x14
        unsigned long AdvancedErrorInterruptMessageNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
