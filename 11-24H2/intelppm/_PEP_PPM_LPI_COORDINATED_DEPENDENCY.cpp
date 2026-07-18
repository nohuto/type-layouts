struct _PEP_PPM_LPI_COORDINATED_DEPENDENCY// Size=0x18 (Id=800)
{
    union // Size=0x8 (Id=0)
    {
        struct PEPHANDLE__ * TargetProcessor;// Offset=0x0 Size=0x8
        void * KernelContext;// Offset=0x0 Size=0x8
    };
    unsigned long OptionCount;// Offset=0x8 Size=0x4
    unsigned long * Options;// Offset=0x10 Size=0x8
};
