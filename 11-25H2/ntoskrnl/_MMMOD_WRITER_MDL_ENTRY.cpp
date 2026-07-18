struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IO_STATUS_BLOCK// Size=0x10 (Id=538)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _MODWRITER_FLAGS// Size=0x4 (Id=2223)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long KeepForever:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Networked:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoPriority:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long PfBacked:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ModifiedStoreWrite:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
};

struct _unnamed_1992// Size=0x18 (Id=1992)
{
    struct _MMPAGING_FILE * PagingFile;// Offset=0x0 Size=0x8
    struct _MI_STORE_MODWRITER_EXTENSION * StoreExtension;// Offset=0x8 Size=0x8
    unsigned long long IssueTime;// Offset=0x10 Size=0x8
};

struct _unnamed_1993// Size=0x18 (Id=1993)
{
    struct _FILE_OBJECT * File;// Offset=0x0 Size=0x8
    struct _CONTROL_AREA * ControlArea;// Offset=0x8 Size=0x8
    struct _ERESOURCE * FileResource;// Offset=0x10 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MDL// Size=0x30 (Id=23)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _MMMOD_WRITER_MDL_ENTRY// Size=0xa0 (Id=1994)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    struct _IRP * Irp;// Offset=0x10 Size=0x8
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x18 Size=0x10
    struct _MODWRITER_FLAGS u1;// Offset=0x28 Size=0x4
    unsigned long ByteCount;// Offset=0x2c Size=0x4
    unsigned long ChargedPages;// Offset=0x30 Size=0x4
    struct _MI_PARTITION * Partition;// Offset=0x38 Size=0x8
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_1992 Pf;// Offset=0x40 Size=0x18
        struct _unnamed_1993 Fs;// Offset=0x40 Size=0x18
    };
    union _LARGE_INTEGER WriteOffset;// Offset=0x58 Size=0x8
    struct _MDL * PointerMdl;// Offset=0x60 Size=0x8
    struct _MDL Mdl;// Offset=0x68 Size=0x30
    unsigned long long Page[1];// Offset=0x98 Size=0x8
};
