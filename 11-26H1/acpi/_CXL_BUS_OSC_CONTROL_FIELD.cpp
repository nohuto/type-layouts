union _unnamed_748// Size=0x4 (Id=748)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemoryErrorReportingControl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _CXL_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=749)
{
    union _unnamed_748 u;// Offset=0x0 Size=0x4
};
