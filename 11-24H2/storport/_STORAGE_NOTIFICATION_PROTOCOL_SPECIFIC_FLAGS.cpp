struct _unnamed_899// Size=0x8 (Id=899)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long WriteToInvalidDoorbellRegister:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InvalidDoorbellWriteValue:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ZoneDescriptorChanged:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _STORAGE_NOTIFICATION_PROTOCOL_SPECIFIC_FLAGS// Size=0x8 (Id=900)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_899 NVMe;// Offset=0x0 Size=0x8
        unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
    };
};
