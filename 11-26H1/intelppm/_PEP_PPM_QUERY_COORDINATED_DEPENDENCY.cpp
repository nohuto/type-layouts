struct _PEP_COORDINATED_DEPENDENCY_OPTION// Size=0x4 (Id=765)
{
    unsigned char ExpectedStateIndex;// Offset=0x0 Size=0x1
    unsigned char LooseDependency;// Offset=0x1 Size=0x1
    unsigned char InitiatingState;// Offset=0x2 Size=0x1
    unsigned char DependentState;// Offset=0x3 Size=0x1
};

struct _PEP_PPM_QUERY_COORDINATED_DEPENDENCY// Size=0x20 (Id=676)
{
    unsigned long StateIndex;// Offset=0x0 Size=0x4
    unsigned long DependencyIndex;// Offset=0x4 Size=0x4
    unsigned long DependencySize;// Offset=0x8 Size=0x4
    unsigned long DependencySizeUsed;// Offset=0xc Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct POHANDLE__ * TargetProcessor;// Offset=0x10 Size=0x8
        void * DeviceContext;// Offset=0x10 Size=0x8
    };
    struct _PEP_COORDINATED_DEPENDENCY_OPTION Options[1];// Offset=0x18 Size=0x4
};
