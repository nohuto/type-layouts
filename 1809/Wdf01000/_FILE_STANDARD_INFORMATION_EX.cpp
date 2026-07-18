union _LARGE_INTEGER// Size=0x8 (Id=258)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=11990)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_STANDARD_INFORMATION_EX// Size=0x18 (Id=2571)
{
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER EndOfFile;// Offset=0x8 Size=0x8
    unsigned long NumberOfLinks;// Offset=0x10 Size=0x4
    unsigned char DeletePending;// Offset=0x14 Size=0x1
    unsigned char Directory;// Offset=0x15 Size=0x1
    unsigned char AlternateStream;// Offset=0x16 Size=0x1
    unsigned char MetadataAttribute;// Offset=0x17 Size=0x1
};
