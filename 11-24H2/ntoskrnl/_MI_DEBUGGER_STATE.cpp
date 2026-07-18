union _unnamed_2131// Size=0x8 (Id=2131)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _unnamed_2132// Size=0x4 (Id=2132)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Offset:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_2133// Size=0x4 (Id=2133)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct _unnamed_2132 e2;// Offset=0x0 Size=0x4
};

struct _MI_DBG_PATCH// Size=0x18 (Id=2134)
{
    union _unnamed_2131 u1;// Offset=0x0 Size=0x8
    union _unnamed_2133 u2;// Offset=0x8 Size=0x4
    unsigned long OriginalBytes;// Offset=0xc Size=0x4
    unsigned long NewBytes;// Offset=0x10 Size=0x4
    unsigned long Padding;// Offset=0x14 Size=0x4
};

struct _MI_DEBUGGER_STATE// Size=0x5938 (Id=1783)
{
    unsigned char TransientWrite;// Offset=0x0 Size=0x1
    struct _MMPTE * DebugPtes[2];// Offset=0x8 Size=0x10
    unsigned long PoisonedTb;// Offset=0x18 Size=0x4
    long InDebugger;// Offset=0x1c Size=0x4
    void * Pfns[32];// Offset=0x20 Size=0x100
    struct _MI_DBG_PATCH PatchBuffer[256];// Offset=0x120 Size=0x1800
    unsigned long PatchBufferInsertIndex;// Offset=0x1920 Size=0x4
    unsigned long PatchBufferRemoveIndex;// Offset=0x1924 Size=0x4
    struct _MI_DBG_PATCH PatchTableSpace[512];// Offset=0x1928 Size=0x3000
    struct _MI_DBG_PATCH * PatchTable[512];// Offset=0x4928 Size=0x1000
    long PatchTableLock;// Offset=0x5928 Size=0x4
    unsigned long PatchTableFreeEntry;// Offset=0x592c Size=0x4
    unsigned long PatchTableEntryCount;// Offset=0x5930 Size=0x4
};
