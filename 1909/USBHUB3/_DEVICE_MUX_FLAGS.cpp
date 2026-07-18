union _DEVICE_MUX_FLAGS// Size=0x4 (Id=640)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stopped:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PnpOperationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};
