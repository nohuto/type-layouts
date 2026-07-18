union _ROOTHUB_PORT_DATA_FLAGS// Size=0x4 (Id=986)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortOperationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IgnoreStatusChangesAndDisableWake:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
