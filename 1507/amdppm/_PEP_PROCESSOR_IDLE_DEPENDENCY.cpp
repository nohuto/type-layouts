struct _PEP_PROCESSOR_IDLE_DEPENDENCY// Size=0x10 (Id=460)
{
    union // Size=0x8 (Id=0)
    {
        struct POHANDLE__ * TargetProcessor;// Offset=0x0 Size=0x8
        void * DeviceContext;// Offset=0x0 Size=0x8
    };
    unsigned char ExpectedState;// Offset=0x8 Size=0x1
    unsigned char AllowDeeperStates;// Offset=0x9 Size=0x1
    unsigned char LooseDependency;// Offset=0xa Size=0x1
};
