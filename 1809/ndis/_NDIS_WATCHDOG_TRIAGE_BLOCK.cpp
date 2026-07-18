struct _NDIS_WATCHDOG_TRIAGE_BLOCK// Size=0x40 (Id=658)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long TimeoutMilliseconds;// Offset=0x4 Size=0x4
    unsigned long long GlobalTriage;// Offset=0x8 Size=0x8
    unsigned long long TargetObject;// Offset=0x10 Size=0x8
    unsigned long long StartTime;// Offset=0x18 Size=0x8
    unsigned long long PrimaryThread;// Offset=0x20 Size=0x8
    unsigned long long ExtraArgument;// Offset=0x28 Size=0x8
    unsigned char Pending9FDetected;// Offset=0x30 Size=0x1
    unsigned long long TargetInstructionPointer;// Offset=0x38 Size=0x8
};
