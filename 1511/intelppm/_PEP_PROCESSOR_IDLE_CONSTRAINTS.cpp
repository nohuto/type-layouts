struct _PEP_PROCESSOR_IDLE_CONSTRAINTS// Size=0x10 (Id=598)
{
    unsigned long long IdleDuration;// Offset=0x0 Size=0x8
    unsigned char Interruptible;// Offset=0x8 Size=0x1
    enum PEP_PROCESSOR_IDLE_TYPE Type;// Offset=0xc Size=0x4
};
