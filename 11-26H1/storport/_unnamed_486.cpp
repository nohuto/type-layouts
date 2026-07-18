union _unnamed_486// Size=0x4 (Id=486)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InternalBufferInUse:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NewNamespaceChangeDetected:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ReenumerationInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CommandTimeoutDetectInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ControllerQuiesced:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FatalTransportError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IsolatedCommandWorkitemQueued:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AsyncControllerResetInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
