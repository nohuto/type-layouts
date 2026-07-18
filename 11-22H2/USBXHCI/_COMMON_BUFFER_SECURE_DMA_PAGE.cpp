struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _XIL_COMMON_BUFFER_PAGE// Size=0x10 (Id=510)
{
    unsigned char * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x8 Size=0x8
};

struct _MDL// Size=0x30 (Id=154)
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

struct _unnamed_512// Size=0x38 (Id=512)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long PfnArray[1];// Offset=0x30 Size=0x8
};

struct _SECURE_DMA_MAPPING// Size=0x20 (Id=966)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * MappingHandle;// Offset=0x10 Size=0x8
    void * ExposedSectionHandle;// Offset=0x18 Size=0x8
};

struct _COMMON_BUFFER_SECURE_DMA_PAGE// Size=0x78 (Id=513)
{
    struct _XIL_COMMON_BUFFER_PAGE PageDetails;// Offset=0x0 Size=0x10
    struct WDFMEMORY__ * WdfMemory;// Offset=0x10 Size=0x8
    struct _SECURE_DMA_ENABLER_DATA * SecureDmaEnablerData;// Offset=0x18 Size=0x8
    struct _unnamed_512 PageMdl;// Offset=0x20 Size=0x38
    struct _SECURE_DMA_MAPPING DmaMapping;// Offset=0x58 Size=0x20
};
