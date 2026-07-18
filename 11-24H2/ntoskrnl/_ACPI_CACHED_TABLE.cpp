struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DESCRIPTION_HEADER// Size=0x24 (Id=276)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Revision;// Offset=0x8 Size=0x1
    unsigned char Checksum;// Offset=0x9 Size=0x1
    char OEMID[6];// Offset=0xa Size=0x6
    char OEMTableID[8];// Offset=0x10 Size=0x8
    unsigned long OEMRevision;// Offset=0x18 Size=0x4
    char CreatorID[4];// Offset=0x1c Size=0x4
    unsigned long CreatorRev;// Offset=0x20 Size=0x4
};

struct _ACPI_CACHED_TABLE// Size=0x40 (Id=211)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x10 Size=0x8
    struct _DESCRIPTION_HEADER Header;// Offset=0x18 Size=0x24
};
