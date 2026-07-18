struct _unnamed_1872// Size=0x4 (Id=1872)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InvalidVa:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NoPhase0Ptes:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NoPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ImagePageNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FreezeIoFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FreezeIoNoAttribute:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PteBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ImageWriteNotFrozen:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PrivilegedWriteNotFrozen:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long NoPrivilegedPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long ModifiedNoPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ModifiedPageDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ModifiedPageFileOnly:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ModifiedPageNoSlots:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long ModifiedPageNoRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ImageNoPatches:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long CopyPrivilegedFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long LiveAddressNotKernel:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
    };
};

union _unnamed_1873// Size=0x4 (Id=1873)
{
    struct _unnamed_1872 Mask;// Offset=0x0 Size=0x4
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

union _unnamed_2235// Size=0x8 (Id=2235)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _unnamed_2236// Size=0x4 (Id=2236)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Offset:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_2237// Size=0x4 (Id=2237)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct _unnamed_2236 e2;// Offset=0x0 Size=0x4
};

struct _MI_DBG_PATCH// Size=0x18 (Id=2238)
{
    union _unnamed_2235 u1;// Offset=0x0 Size=0x8
    union _unnamed_2237 u2;// Offset=0x8 Size=0x4
    unsigned long OriginalBytes;// Offset=0xc Size=0x4
    unsigned long NewBytes;// Offset=0x10 Size=0x4
    unsigned long Padding;// Offset=0x14 Size=0x4
};

struct _MI_DEBUGGER_STATE// Size=0x5948 (Id=1874)
{
    unsigned char TransientWrite;// Offset=0x0 Size=0x1
    union _unnamed_1873 Errors;// Offset=0x4 Size=0x4
    struct _MMPTE * DebugPtes[2];// Offset=0x8 Size=0x10
    unsigned long PoisonedTb;// Offset=0x18 Size=0x4
    void * Pfns[32];// Offset=0x20 Size=0x100
    struct _EX_PUSH_LOCK UserLock;// Offset=0x120 Size=0x8
    struct _MI_DBG_PATCH PatchBuffer[256];// Offset=0x128 Size=0x1800
    unsigned long PatchBufferInsertIndex;// Offset=0x1928 Size=0x4
    unsigned long PatchBufferRemoveIndex;// Offset=0x192c Size=0x4
    struct _MI_DBG_PATCH PatchTableSpace[512];// Offset=0x1930 Size=0x3000
    struct _MI_DBG_PATCH * PatchTable[512];// Offset=0x4930 Size=0x1000
    long PatchTableLock;// Offset=0x5930 Size=0x4
    unsigned long PatchTableFreeEntry;// Offset=0x5934 Size=0x4
    unsigned long PatchTableEntryCount;// Offset=0x5938 Size=0x4
    void * LastIoPfn;// Offset=0x5940 Size=0x8
};
