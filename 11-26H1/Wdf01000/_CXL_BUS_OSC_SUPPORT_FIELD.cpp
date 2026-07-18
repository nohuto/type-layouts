struct _CXL_BUS_OSC_SUPPORT_FIELD// Size=0x4 (Id=1597)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=6337)
        {
            unsigned long RdcRchPortRegisterAccessSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long VhRegisterAccessSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ProtocolErrorReportingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NativeHotPlugSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _CXL_BUS_OSC_SUPPORT_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};
