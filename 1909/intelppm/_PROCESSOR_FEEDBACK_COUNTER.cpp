struct _PROCESSOR_FEEDBACK_COUNTER// Size=0x18 (Id=629)
{
    union // Size=0x8 (Id=0)
    {
        void  ( * InstantaneousRead)(unsigned long long ,unsigned long * );// Offset=0x0 Size=0x8
        void  ( * DifferentialRead)(unsigned long long ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x0 Size=0x8
    };
    unsigned long NominalRate;// Offset=0x8 Size=0x4
    unsigned long Type;// Offset=0xc Size=0x4
    unsigned char Affinitized;// Offset=0x10 Size=0x1
    unsigned char Differential;// Offset=0x11 Size=0x1
    unsigned char DiscardIdleTime;// Offset=0x12 Size=0x1
};
