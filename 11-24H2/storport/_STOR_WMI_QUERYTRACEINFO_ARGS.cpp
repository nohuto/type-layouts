struct _STOR_WMI_QUERYTRACEINFO_ARGS// Size=0x30 (Id=277)
{
    unsigned long TraceInformationClass;// Offset=0x0 Size=0x4
    void * TraceInformation;// Offset=0x8 Size=0x8
    unsigned long TraceInformationLength;// Offset=0x10 Size=0x4
    unsigned long * RequiredLength;// Offset=0x18 Size=0x8
    void * Buffer;// Offset=0x20 Size=0x8
    unsigned long result;// Offset=0x28 Size=0x4
};
