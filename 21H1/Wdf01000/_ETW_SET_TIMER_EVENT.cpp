struct _ETW_SET_TIMER_EVENT// Size=0x20 (Id=2099)
{
    unsigned long long ExpectedDueTime;// Offset=0x0 Size=0x8
    unsigned long long TimerAddress;// Offset=0x8 Size=0x8
    unsigned short TargetProcessorGroup;// Offset=0x10 Size=0x2
    unsigned char TargetProcessorIndex;// Offset=0x12 Size=0x1
    unsigned char Flags;// Offset=0x13 Size=0x1
    unsigned long Period;// Offset=0x14 Size=0x4
    unsigned char EncodedDelay;// Offset=0x18 Size=0x1
    unsigned char Reserved0;// Offset=0x19 Size=0x1
    unsigned short UniqueProcessId;// Offset=0x1a Size=0x2
};
