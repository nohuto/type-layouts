enum _CONFIGURATION_CLASS
{
    SystemClass=0,
    ProcessorClass=1,
    CacheClass=2,
    AdapterClass=3,
    ControllerClass=4,
    PeripheralClass=5,
    MemoryClass=6,
    MaximumClass=7
};

enum _CONFIGURATION_TYPE
{
    ArcSystem=0,
    CentralProcessor=1,
    FloatingPointProcessor=2,
    PrimaryIcache=3,
    PrimaryDcache=4,
    SecondaryIcache=5,
    SecondaryDcache=6,
    SecondaryCache=7,
    EisaAdapter=8,
    TcAdapter=9,
    ScsiAdapter=10,
    DtiAdapter=11,
    MultiFunctionAdapter=12,
    DiskController=13,
    TapeController=14,
    CdromController=15,
    WormController=16,
    SerialController=17,
    NetworkController=18,
    DisplayController=19,
    ParallelController=20,
    PointerController=21,
    KeyboardController=22,
    AudioController=23,
    OtherController=24,
    DiskPeripheral=25,
    FloppyDiskPeripheral=26,
    TapePeripheral=27,
    ModemPeripheral=28,
    MonitorPeripheral=29,
    PrinterPeripheral=30,
    PointerPeripheral=31,
    KeyboardPeripheral=32,
    TerminalPeripheral=33,
    OtherPeripheral=34,
    LinePeripheral=35,
    NetworkPeripheral=36,
    SystemMemory=37,
    DockingInformation=38,
    RealModeIrqRoutingTable=39,
    RealModePCIEnumeration=40,
    MaximumType=41
};

struct _DEVICE_FLAGS// Size=0x4 (Id=1790)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Failed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReadOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Removable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ConsoleIn:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ConsoleOut:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Input:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Output:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
};

struct _CONFIGURATION_COMPONENT// Size=0x28 (Id=1763)
{
    enum _CONFIGURATION_CLASS Class;// Offset=0x0 Size=0x4
    enum _CONFIGURATION_TYPE Type;// Offset=0x4 Size=0x4
    struct _DEVICE_FLAGS Flags;// Offset=0x8 Size=0x4
    unsigned short Version;// Offset=0xc Size=0x2
    unsigned short Revision;// Offset=0xe Size=0x2
    unsigned long Key;// Offset=0x10 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AffinityMask;// Offset=0x14 Size=0x4
        unsigned short Group;// Offset=0x14 Size=0x2
    };
    unsigned short GroupIndex;// Offset=0x16 Size=0x2
    unsigned long ConfigurationDataLength;// Offset=0x18 Size=0x4
    unsigned long IdentifierLength;// Offset=0x1c Size=0x4
    char * Identifier;// Offset=0x20 Size=0x8
};
