union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER// Size=0x2 (Id=2569)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CorrectableErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short NonFatalErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FatalErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short UnsupportedRequestErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short EnableRelaxedOrder:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short MaxPayloadSize:3;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x3
        unsigned short ExtendedTagEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short PhantomFunctionsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short AuxPowerEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short NoSnoopEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short MaxReadRequestSize:3;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x3
        union // Size=0x2 (Id=0)
        {
            unsigned short BridgeConfigRetryEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
            unsigned short InitiateFunctionLevelReset:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
        };
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
