struct _PCI_COMMON_HEADER// Size=0x40 (Id=4872)
{
    union // Size=0x10 (Id=0)
    {
        unsigned short VendorID;// Offset=0x0 Size=0x2
        unsigned short DeviceID;// Offset=0x2 Size=0x2
        unsigned short Command;// Offset=0x4 Size=0x2
        unsigned short Status;// Offset=0x6 Size=0x2
        unsigned char RevisionID;// Offset=0x8 Size=0x1
        unsigned char ProgIf;// Offset=0x9 Size=0x1
        unsigned char SubClass;// Offset=0xa Size=0x1
        unsigned char BaseClass;// Offset=0xb Size=0x1
        unsigned char CacheLineSize;// Offset=0xc Size=0x1
        unsigned char LatencyTimer;// Offset=0xd Size=0x1
        unsigned char HeaderType;// Offset=0xe Size=0x1
        unsigned char BIST;// Offset=0xf Size=0x1
        union <unnamed-type-u>// Size=0x30 (Id=13532)
        {
            struct _PCI_HEADER_TYPE_0// Size=0x30 (Id=13533)
            {
                unsigned long BaseAddresses[6];// Offset=0x0 Size=0x18
                unsigned long CIS;// Offset=0x18 Size=0x4
                unsigned short SubVendorID;// Offset=0x1c Size=0x2
                unsigned short SubSystemID;// Offset=0x1e Size=0x2
                unsigned long ROMBaseAddress;// Offset=0x20 Size=0x4
                unsigned char CapabilitiesPtr;// Offset=0x24 Size=0x1
                unsigned char Reserved1[3];// Offset=0x25 Size=0x3
                unsigned long Reserved2;// Offset=0x28 Size=0x4
                unsigned char InterruptLine;// Offset=0x2c Size=0x1
                unsigned char InterruptPin;// Offset=0x2d Size=0x1
                unsigned char MinimumGrant;// Offset=0x2e Size=0x1
                unsigned char MaximumLatency;// Offset=0x2f Size=0x1
            };
            struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_0 type0;// Offset=0x0 Size=0x30
            struct _PCI_HEADER_TYPE_1// Size=0x30 (Id=13548)
            {
                unsigned long BaseAddresses[2];// Offset=0x0 Size=0x8
                unsigned char PrimaryBus;// Offset=0x8 Size=0x1
                unsigned char SecondaryBus;// Offset=0x9 Size=0x1
                unsigned char SubordinateBus;// Offset=0xa Size=0x1
                unsigned char SecondaryLatency;// Offset=0xb Size=0x1
                unsigned char IOBase;// Offset=0xc Size=0x1
                unsigned char IOLimit;// Offset=0xd Size=0x1
                unsigned short SecondaryStatus;// Offset=0xe Size=0x2
                unsigned short MemoryBase;// Offset=0x10 Size=0x2
                unsigned short MemoryLimit;// Offset=0x12 Size=0x2
                unsigned short PrefetchBase;// Offset=0x14 Size=0x2
                unsigned short PrefetchLimit;// Offset=0x16 Size=0x2
                unsigned long PrefetchBaseUpper32;// Offset=0x18 Size=0x4
                unsigned long PrefetchLimitUpper32;// Offset=0x1c Size=0x4
                unsigned short IOBaseUpper16;// Offset=0x20 Size=0x2
                unsigned short IOLimitUpper16;// Offset=0x22 Size=0x2
                unsigned char CapabilitiesPtr;// Offset=0x24 Size=0x1
                unsigned char Reserved1[3];// Offset=0x25 Size=0x3
                unsigned long ROMBaseAddress;// Offset=0x28 Size=0x4
                unsigned char InterruptLine;// Offset=0x2c Size=0x1
                unsigned char InterruptPin;// Offset=0x2d Size=0x1
                unsigned short BridgeControl;// Offset=0x2e Size=0x2
            };
            struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_1 type1;// Offset=0x0 Size=0x30
            struct _PCI_HEADER_TYPE_2// Size=0x30 (Id=13572)
            {
                unsigned long SocketRegistersBaseAddress;// Offset=0x0 Size=0x4
                unsigned char CapabilitiesPtr;// Offset=0x4 Size=0x1
                unsigned char Reserved;// Offset=0x5 Size=0x1
                unsigned short SecondaryStatus;// Offset=0x6 Size=0x2
                unsigned char PrimaryBus;// Offset=0x8 Size=0x1
                unsigned char SecondaryBus;// Offset=0x9 Size=0x1
                unsigned char SubordinateBus;// Offset=0xa Size=0x1
                unsigned char SecondaryLatency;// Offset=0xb Size=0x1
                struct <unnamed-type-Range>// Size=0x8 (Id=13581)
                {
                    unsigned long Base;// Offset=0x0 Size=0x4
                    unsigned long Limit;// Offset=0x4 Size=0x4
                };
                struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_2::<unnamed-type-Range> Range[4];// Offset=0xc Size=0x20
                unsigned char InterruptLine;// Offset=0x2c Size=0x1
                unsigned char InterruptPin;// Offset=0x2d Size=0x1
                unsigned short BridgeControl;// Offset=0x2e Size=0x2
            };
            struct _PCI_COMMON_HEADER::<unnamed-type-u>::_PCI_HEADER_TYPE_2 type2;// Offset=0x0 Size=0x30
        };
    };
    union _PCI_COMMON_HEADER::<unnamed-type-u> u;// Offset=0x10 Size=0x30
};
