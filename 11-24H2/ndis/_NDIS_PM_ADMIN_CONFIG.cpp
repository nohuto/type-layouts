struct _NDIS_PM_ADMIN_CONFIG// Size=0x4 (Id=614)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long WakeOnPattern:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long WakeOnMagicPacket:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long DeviceSleepOnDisconnect:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long PMARPOffload:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long PMNSOffload:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long PMWiFiRekeyOffload:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long SelectiveSuspend:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
            unsigned long NicAutoPowerSaver:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};
