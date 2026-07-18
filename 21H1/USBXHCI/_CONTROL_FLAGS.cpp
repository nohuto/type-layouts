union _CONTROL_FLAGS// Size=0x4 (Id=897)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoorbellRungSinceMappingStart:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReclaimTransfersAndAcknowledge:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AcknowledgeExpectedEventTRBsProcessed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OkToReclaimTransfersOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};
