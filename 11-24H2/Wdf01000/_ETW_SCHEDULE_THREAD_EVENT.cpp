struct _ETW_SCHEDULE_THREAD_EVENT// Size=0xc (Id=3610)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long TargetProcessorIndex;// Offset=0x4 Size=0x4
    unsigned char Reason;// Offset=0x8 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ReasonSpecificDataPresent:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char ReservedFlags:7;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x7
        };
        unsigned char Flags;// Offset=0x9 Size=0x1
    };
    unsigned short SpareShort;// Offset=0xa Size=0x2
};
