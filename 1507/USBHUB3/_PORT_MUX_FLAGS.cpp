union _PORT_MUX_FLAGS// Size=0x4 (Id=453)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortChangePending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InterruptReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PnpOperationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PowerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ResetPending:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long WdfPowerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
};
