struct _GUID// Size=0x10 (Id=413)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct KS_FRAMING_ITEM// Size=0x58 (Id=1597)
{
    struct _GUID MemoryType;// Offset=0x0 Size=0x10
    struct _GUID BusType;// Offset=0x10 Size=0x10
    unsigned long MemoryFlags;// Offset=0x20 Size=0x4
    unsigned long BusFlags;// Offset=0x24 Size=0x4
    unsigned long Flags;// Offset=0x28 Size=0x4
    unsigned long Frames;// Offset=0x2c Size=0x4
    unsigned long FileAlignment;// Offset=0x30 Size=0x4
    unsigned long MemoryTypeWeight;// Offset=0x34 Size=0x4
    struct KS_FRAMING_RANGE PhysicalRange;// Offset=0x38 Size=0xc
    struct KS_FRAMING_RANGE_WEIGHTED FramingRange;// Offset=0x44 Size=0x14
};
