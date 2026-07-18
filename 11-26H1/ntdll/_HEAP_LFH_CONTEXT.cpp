struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x38 (Id=252)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
    unsigned long long TlsCleanup;// Offset=0x28 Size=0x8
    unsigned long long AccessState;// Offset=0x30 Size=0x8
};

union _RTL_HP_LFH_CONFIG// Size=0x4 (Id=524)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONFIG// Size=0x8 (Id=472)
{
    union _RTL_HP_LFH_CONFIG Global;// Offset=0x0 Size=0x4
    struct // Size=0x2 (Id=0)
    {
        unsigned short EnablePrivateSlots:1;// Offset=0x4 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Spare:15;// Offset=0x4 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned char CommitUnitDecommitThreshold;// Offset=0x6 Size=0x1
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=34)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_LFH_HEAT_MAP// Size=0x100 (Id=298)
{
    unsigned short Counts[125];// Offset=0x0 Size=0xfa
    unsigned char OnFreeList;// Offset=0xfa Size=0x1
    unsigned char Spare;// Offset=0xfb Size=0x1
    unsigned long LastDecayPeriod;// Offset=0xfc Size=0x4
};

struct _HEAP_LFH_SLOT_MAP// Size=0x100 (Id=295)
{
    unsigned short Map[128];// Offset=0x0 Size=0x100
};

struct _HEAP_LFH_CONTEXT// Size=0x6c0 (Id=299)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x38
    unsigned char * AffinityModArray;// Offset=0x40 Size=0x8
    unsigned char MaxAffinity;// Offset=0x48 Size=0x1
    unsigned char LockType;// Offset=0x49 Size=0x1
    short MemStatsOffset;// Offset=0x4a Size=0x2
    struct _HEAP_LFH_CONFIG Config;// Offset=0x4c Size=0x8
    unsigned long TlsSlotIndex;// Offset=0x54 Size=0x4
    unsigned long long EncodeKey;// Offset=0x58 Size=0x8
    unsigned long long ExtensionLock;// Offset=0x80 Size=0x8
    struct _SINGLE_LIST_ENTRY MetadataList[4];// Offset=0x88 Size=0x20
    struct _HEAP_LFH_HEAT_MAP HeatMap;// Offset=0xc0 Size=0x100
    struct _HEAP_LFH_BUCKET * Buckets[128];// Offset=0x1c0 Size=0x400
    struct _HEAP_LFH_SLOT_MAP SlotMaps[1];// Offset=0x5c0 Size=0x100
};
