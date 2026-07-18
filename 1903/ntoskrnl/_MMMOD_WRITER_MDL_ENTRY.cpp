struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IO_STATUS_BLOCK// Size=0x10 (Id=87)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

union _anonymous_1651// Size=0x10 (Id=1651)
{
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x0 Size=0x10
};

struct _MODWRITER_FLAGS// Size=0x4 (Id=1685)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long KeepForever:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Networked:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoPriority:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long ModifiedStoreWrite:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
};

struct _KAPC// Size=0x58 (Id=1077)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char SpareByte0;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ApcListEntry;// Offset=0x10 Size=0x10
    union // Size=0x38 (Id=0)
    {
        void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x20 Size=0x8
        void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x28 Size=0x8
        void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x30 Size=0x8
        void * Reserved[3];// Offset=0x20 Size=0x18
    };
    void * NormalContext;// Offset=0x38 Size=0x8
    void * SystemArgument1;// Offset=0x40 Size=0x8
    void * SystemArgument2;// Offset=0x48 Size=0x8
    char ApcStateIndex;// Offset=0x50 Size=0x1
    char ApcMode;// Offset=0x51 Size=0x1
    unsigned char Inserted;// Offset=0x52 Size=0x1
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MDL// Size=0x30 (Id=185)
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

struct _MMMOD_WRITER_MDL_ENTRY// Size=0x108 (Id=1652)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    union _anonymous_1651 u;// Offset=0x10 Size=0x10
    struct _IRP * Irp;// Offset=0x20 Size=0x8
    struct _MODWRITER_FLAGS u1;// Offset=0x28 Size=0x4
    unsigned long StoreWriteRefCount;// Offset=0x2c Size=0x4
    struct _KAPC StoreWriteCompletionApc;// Offset=0x30 Size=0x58
    unsigned long ByteCount;// Offset=0x88 Size=0x4
    unsigned long ChargedPages;// Offset=0x8c Size=0x4
    struct _MMPAGING_FILE * PagingFile;// Offset=0x90 Size=0x8
    struct _FILE_OBJECT * File;// Offset=0x98 Size=0x8
    struct _CONTROL_AREA * ControlArea;// Offset=0xa0 Size=0x8
    struct _ERESOURCE * FileResource;// Offset=0xa8 Size=0x8
    union _LARGE_INTEGER WriteOffset;// Offset=0xb0 Size=0x8
    union _LARGE_INTEGER IssueTime;// Offset=0xb8 Size=0x8
    struct _MI_PARTITION * Partition;// Offset=0xc0 Size=0x8
    struct _MDL * PointerMdl;// Offset=0xc8 Size=0x8
    struct _MDL Mdl;// Offset=0xd0 Size=0x30
    unsigned long long Page[1];// Offset=0x100 Size=0x8
};
