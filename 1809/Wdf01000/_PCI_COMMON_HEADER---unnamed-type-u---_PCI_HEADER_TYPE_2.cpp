struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_2// Size=0x30 (Id=4660)
{
    union // Size=0xc (Id=0)
    {
        unsigned long SocketRegistersBaseAddress;// Offset=0x0 Size=0x4
        unsigned char CapabilitiesPtr;// Offset=0x4 Size=0x1
        unsigned char Reserved;// Offset=0x5 Size=0x1
        unsigned short SecondaryStatus;// Offset=0x6 Size=0x2
        unsigned char PrimaryBus;// Offset=0x8 Size=0x1
        unsigned char SecondaryBus;// Offset=0x9 Size=0x1
        unsigned char SubordinateBus;// Offset=0xa Size=0x1
        unsigned char SecondaryLatency;// Offset=0xb Size=0x1
        struct <unnamed-type-Range>// Size=0x8 (Id=12706)
        {
            unsigned long Base;// Offset=0x0 Size=0x4
            unsigned long Limit;// Offset=0x4 Size=0x4
        };
        struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_2::<unnamed-type-Range> Range[4];// Offset=0xc Size=0x20
    };
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned short BridgeControl;// Offset=0x2e Size=0x2
};
