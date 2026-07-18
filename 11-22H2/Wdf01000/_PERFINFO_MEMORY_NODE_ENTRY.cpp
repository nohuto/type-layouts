struct _PERFINFO_MEMORY_NODE_ENTRY// Size=0x4c (Id=1724)
{
    unsigned long NodeNumber;// Offset=0x0 Size=0x4
    unsigned long long TotalPageCount;// Offset=0x4 Size=0x8
    unsigned long long SmallFreePageCount;// Offset=0xc Size=0x8
    unsigned long long SmallZeroPageCount;// Offset=0x14 Size=0x8
    unsigned long long MediumFreePageCount;// Offset=0x1c Size=0x8
    unsigned long long MediumZeroPageCount;// Offset=0x24 Size=0x8
    unsigned long long LargeFreePageCount;// Offset=0x2c Size=0x8
    unsigned long long LargeZeroPageCount;// Offset=0x34 Size=0x8
    unsigned long long HugeFreePageCount;// Offset=0x3c Size=0x8
    unsigned long long HugeZeroPageCount;// Offset=0x44 Size=0x8
};
