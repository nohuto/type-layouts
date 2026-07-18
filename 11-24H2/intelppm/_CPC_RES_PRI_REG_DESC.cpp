struct _unnamed_47// Size=0x8 (Id=47)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=183)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_47 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR_EX// Size=0x18 (Id=605)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
};

struct _CPC_RES_PRI_REG_DESC// Size=0x68 (Id=670)
{
    struct _ACPI_INTEGER_ARRAY * ControlledResources;// Offset=0x0 Size=0x8
    struct _GEN_ADDR_EX EnableValue;// Offset=0x8 Size=0x18
    struct _GEN_ADDR_EX Enable;// Offset=0x20 Size=0x18
    struct _GEN_ADDR_EX PriorityCount;// Offset=0x38 Size=0x18
    struct _GEN_ADDR_EX Priority;// Offset=0x50 Size=0x18
};
