struct _PEP_PROCESSOR_PARK_STATE// Size=0x10 (Id=702)
{
    union // Size=0x8 (Id=0)
    {
        struct PEPHANDLE__ * Processor;// Offset=0x0 Size=0x8
        struct POHANDLE__ * KernelContext;// Offset=0x0 Size=0x8
    };
    unsigned char Parked;// Offset=0x8 Size=0x1
    unsigned char Reserved[3];// Offset=0x9 Size=0x3
};
