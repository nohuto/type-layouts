struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _TYPE_OF_MEMORY
{
    LoaderExceptionBlock=0,
    LoaderSystemBlock=1,
    LoaderFree=2,
    LoaderBad=3,
    LoaderLoadedProgram=4,
    LoaderFirmwareTemporary=5,
    LoaderFirmwarePermanent=6,
    LoaderOsloaderHeap=7,
    LoaderOsloaderStack=8,
    LoaderSystemCode=9,
    LoaderHalCode=10,
    LoaderBootDriver=11,
    LoaderConsoleInDriver=12,
    LoaderConsoleOutDriver=13,
    LoaderStartupDpcStack=14,
    LoaderStartupKernelStack=15,
    LoaderStartupPanicStack=16,
    LoaderStartupPcrPage=17,
    LoaderStartupPdrPage=18,
    LoaderRegistryData=19,
    LoaderMemoryData=20,
    LoaderNlsData=21,
    LoaderSpecialMemory=22,
    LoaderBBTMemory=23,
    LoaderZero=24,
    LoaderXIPRom=25,
    LoaderHALCachedMemory=26,
    LoaderLargePageFiller=27,
    LoaderErrorLogMemory=28,
    LoaderVsmMemory=29,
    LoaderFirmwareCode=30,
    LoaderFirmwareData=31,
    LoaderFirmwareReserved=32,
    LoaderEnclaveMemory=33,
    LoaderFirmwareKsr=34,
    LoaderEnclaveKsr=35,
    LoaderMaximum=36
};

struct _MEMORY_ALLOCATION_DESCRIPTOR// Size=0x28 (Id=704)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _TYPE_OF_MEMORY MemoryType;// Offset=0x10 Size=0x4
    unsigned long long BasePage;// Offset=0x18 Size=0x8
    unsigned long long PageCount;// Offset=0x20 Size=0x8
};
