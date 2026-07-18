union _UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS_CHANGE_FLAGS// Size=0x4 (Id=558)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CurrentRoundtripLatencyChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CurrentTotalBandwidthChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
