union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS// Size=0x4 (Id=3069)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReceiverError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long BadTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long BadDLLP:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReplayNumRollover:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long ReplayTimerTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long AdvisoryNonFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CorrectedInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HeaderLogOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved3:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
