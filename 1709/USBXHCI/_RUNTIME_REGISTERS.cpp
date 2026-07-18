union _MFINDEX// Size=0x4 (Id=428)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MicroFrameIndex:14;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xe
        unsigned long Reserved0:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
};

union _IMAN// Size=0x4 (Id=712)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _IMOD// Size=0x4 (Id=798)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Inverval:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Counter:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _ERSTSZ// Size=0x4 (Id=709)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Size:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

union _ERDP// Size=0x8 (Id=530)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DequeueErstSegmentIndex:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long EventHandlerBusy:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long DequeuePointer:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

struct _INTERRUPTER_REGISTER_SET// Size=0x20 (Id=429)
{
    union _IMAN InterrupterManagement;// Offset=0x0 Size=0x4
    union _IMOD InterrupterModeration;// Offset=0x4 Size=0x4
    union _ERSTSZ EventRingSegmentTableSizeRegister;// Offset=0x8 Size=0x4
    unsigned long Reserved0;// Offset=0xc Size=0x4
    union _ULARGE_INTEGER EventRingSegmentTableBaseAddress;// Offset=0x10 Size=0x8
    union _ERDP EventRingDequeuePointerRegister;// Offset=0x18 Size=0x8
};

struct _RUNTIME_REGISTERS// Size=0x8020 (Id=427)
{
    union _MFINDEX MicroFrameIndex;// Offset=0x0 Size=0x4
    unsigned long Reserved0[7];// Offset=0x4 Size=0x1c
    struct _INTERRUPTER_REGISTER_SET InterrupterRegisters[1024];// Offset=0x20 Size=0x8000
};
