union _unnamed_546// Size=0x4 (Id=546)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SciSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _PCC_INTERFACE_STANDARD// Size=0x80 (Id=547)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long SubspaceId;// Offset=0x20 Size=0x4
    long  ( * PlatformNotify)(void * );// Offset=0x28 Size=0x8
    void * NotifyContext;// Offset=0x30 Size=0x8
    void * Handle;// Offset=0x38 Size=0x8
    unsigned long NominalLatency;// Offset=0x40 Size=0x4
    unsigned long MaximumPeriodicRate;// Offset=0x44 Size=0x4
    void * Subspace;// Offset=0x48 Size=0x8
    unsigned long SubspaceSize;// Offset=0x50 Size=0x4
    union _unnamed_546 Flags;// Offset=0x54 Size=0x4
    long  ( * AcquireSubspace)(void * );// Offset=0x58 Size=0x8
    long  ( * AcquireSubspaceAsync)(void * ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x60 Size=0x8
    long  ( * ExecuteCommand)(void * ,unsigned char );// Offset=0x68 Size=0x8
    long  ( * ExecuteCommandAsync)(void * ,unsigned char ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x70 Size=0x8
    long  ( * ReleaseSubspace)(void * );// Offset=0x78 Size=0x8
};
