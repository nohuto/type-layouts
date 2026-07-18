enum _CPU_SET_INFORMATION_TYPE
{
    CpuSetInformation=0
};

struct _SYSTEM_CPU_SET_INFORMATION// Size=0x20 (Id=2008)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _CPU_SET_INFORMATION_TYPE Type;// Offset=0x4 Size=0x4
    struct _SYSTEM_CPU_SET_INFORMATION::_unnamed_2009::<unnamed-type-CpuSet> CpuSet;// Offset=0x8 Size=0x18
};
