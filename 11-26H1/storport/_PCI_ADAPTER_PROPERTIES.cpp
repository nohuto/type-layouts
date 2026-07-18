struct _PCI_HEADER_TYPE_0// Size=0x30 (Id=1125)
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

struct _PCI_HEADER_TYPE_1// Size=0x30 (Id=1368)
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

struct _unnamed_1391// Size=0x8 (Id=1391)
{
    unsigned long Base;// Offset=0x0 Size=0x4
    unsigned long Limit;// Offset=0x4 Size=0x4
};

struct _PCI_HEADER_TYPE_2// Size=0x30 (Id=1392)
{
    unsigned long SocketRegistersBaseAddress;// Offset=0x0 Size=0x4
    unsigned char CapabilitiesPtr;// Offset=0x4 Size=0x1
    unsigned char Reserved;// Offset=0x5 Size=0x1
    unsigned short SecondaryStatus;// Offset=0x6 Size=0x2
    unsigned char PrimaryBus;// Offset=0x8 Size=0x1
    unsigned char SecondaryBus;// Offset=0x9 Size=0x1
    unsigned char SubordinateBus;// Offset=0xa Size=0x1
    unsigned char SecondaryLatency;// Offset=0xb Size=0x1
    struct _unnamed_1391 Range[4];// Offset=0xc Size=0x20
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned short BridgeControl;// Offset=0x2e Size=0x2
};

union _unnamed_1008// Size=0x30 (Id=1008)
{
    struct _PCI_HEADER_TYPE_0 type0;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_1 type1;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_2 type2;// Offset=0x0 Size=0x30
};

struct _PCI_COMMON_HEADER// Size=0x40 (Id=1009)
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
    union _unnamed_1008 u;// Offset=0x10 Size=0x30
};

struct _PCI_MSIX_TABLE_CONFIG_INTERFACE// Size=0x48 (Id=1036)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * MaskTableEntry)(void * ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * UnmaskTableEntry)(void * ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * GetTableEntry)(void * ,unsigned long ,unsigned long * ,unsigned char * );// Offset=0x38 Size=0x8
    long  ( * GetTableSize)(void * ,unsigned long * );// Offset=0x40 Size=0x8
};

struct _unnamed_1079// Size=0x4 (Id=1079)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Ok:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Locate:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Fail:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rebuild:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFA:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpare:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArray:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArray:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDevice:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
};

union _DSM_PCI_SSD_LED_STATE// Size=0x4 (Id=1080)
{
    struct _unnamed_1079 State;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_864// Size=0x4 (Id=864)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Ok:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Locate:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Fail:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rebuild:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PFA:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HotSpare:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long InACriticalArray:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long InAFailedArray:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InvalidDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

union _STORAGE_INDICATOR_STATE// Size=0x4 (Id=865)
{
    struct _unnamed_864 State;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _PCI_ADAPTER_PROPERTIES// Size=0xa8 (Id=1156)
{
    unsigned short Device;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    unsigned long PciDeviceType;// Offset=0x4 Size=0x4
    struct _PCI_COMMON_HEADER PciConfiguration;// Offset=0x8 Size=0x40
    struct _PCI_MSIX_TABLE_CONFIG_INTERFACE MSIXTableConfigInterface;// Offset=0x48 Size=0x48
    struct _NPEM_CONTROL_INTERFACE * NpemControlInterface;// Offset=0x90 Size=0x8
    unsigned long DsmLedSupportedFunction;// Offset=0x98 Size=0x4
    union _DSM_PCI_SSD_LED_STATE DsmLedSupportedStates;// Offset=0x9c Size=0x4
    union _STORAGE_INDICATOR_STATE LedState;// Offset=0xa0 Size=0x4
};
