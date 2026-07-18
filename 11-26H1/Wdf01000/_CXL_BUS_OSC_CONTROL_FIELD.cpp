struct _CXL_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=3875)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=6332)
        {
            unsigned long MemoryErrorReportingControl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _CXL_BUS_OSC_CONTROL_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};
