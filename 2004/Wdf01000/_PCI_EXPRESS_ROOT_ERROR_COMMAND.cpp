union _PCI_EXPRESS_ROOT_ERROR_COMMAND// Size=0x4 (Id=2065)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CorrectableErrorReportingEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NonFatalErrorReportingEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FatalErrorReportingEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
