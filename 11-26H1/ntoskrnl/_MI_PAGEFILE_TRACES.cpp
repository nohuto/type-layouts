struct _MDL// Size=0x30 (Id=576)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0xc Size=0x2
    unsigned short Reserved;// Offset=0xe Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _unnamed_1796// Size=0x38 (Id=1796)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x80 (Id=1797)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned char PagefileNumber;// Offset=0x4 Size=0x1
    unsigned char Priority;// Offset=0x5 Size=0x1
    unsigned char IrpPriority;// Offset=0x6 Size=0x1
    unsigned char ReservationWrite;// Offset=0x7 Size=0x1
    unsigned long long CurrentTime;// Offset=0x8 Size=0x8
    unsigned long long AvailablePages;// Offset=0x10 Size=0x8
    unsigned long long ModifiedPagesTotal;// Offset=0x18 Size=0x8
    unsigned long long ModifiedPagefilePages;// Offset=0x20 Size=0x8
    unsigned long long ModifiedNoWritePages;// Offset=0x28 Size=0x8
    unsigned long long ModifiedPagefileNoReservationPages;// Offset=0x30 Size=0x8
    unsigned long long ModifiedPageFileNoReservationCompressPages;// Offset=0x38 Size=0x8
    unsigned long long ModifiedPagefileReservationPages;// Offset=0x40 Size=0x8
    struct _unnamed_1796 LocalMdl;// Offset=0x48 Size=0x38
};
