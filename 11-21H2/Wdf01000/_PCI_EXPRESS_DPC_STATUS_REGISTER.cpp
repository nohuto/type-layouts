union _PCI_EXPRESS_DPC_STATUS_REGISTER// Size=0x2 (Id=3004)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TriggerStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short TriggerReason:2;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x2
        unsigned short InterruptStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short RpBusy:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short TriggerReasonExtension:2;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x2
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short PioFirstErrPointer:5;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x5
        unsigned short Reserved2:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
