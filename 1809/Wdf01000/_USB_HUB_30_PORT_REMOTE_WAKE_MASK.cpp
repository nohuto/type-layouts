union _USB_HUB_30_PORT_REMOTE_WAKE_MASK// Size=0x1 (Id=3709)
{
    unsigned char AsUchar8;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ConnectRemoteWakeEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DisconnectRemoteWakeEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char OverCurrentRemoteWakeEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved0:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};
