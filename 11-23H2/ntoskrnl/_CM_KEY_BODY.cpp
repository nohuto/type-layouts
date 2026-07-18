struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _CM_TRANS_PTR// Size=0x8 (Id=1345)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long LightWeight:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
    };
    void * TransPtr;// Offset=0x0 Size=0x8
};

struct _CM_KEY_BODY// Size=0x70 (Id=656)
{
    unsigned long Type;// Offset=0x0 Size=0x4
    unsigned short AccessCheckedLayerHeight;// Offset=0x4 Size=0x2
    struct _CM_KEY_CONTROL_BLOCK * KeyControlBlock;// Offset=0x8 Size=0x8
    struct _CM_NOTIFY_BLOCK * NotifyBlock;// Offset=0x10 Size=0x8
    void * ProcessID;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY KeyBodyList;// Offset=0x20 Size=0x10
    struct // Size=0x4 (Id=0)
    {
        unsigned long Flags:16;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long HandleTags:16;// Offset=0x30 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    union _CM_TRANS_PTR Trans;// Offset=0x38 Size=0x8
    struct _GUID * KtmUow;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY ContextListHead;// Offset=0x48 Size=0x10
    void * EnumerationResumeContext;// Offset=0x58 Size=0x8
    unsigned long RestrictedAccessMask;// Offset=0x60 Size=0x4
    unsigned long LastSearchedIndex;// Offset=0x64 Size=0x4
    void * LockedMemoryMdls;// Offset=0x68 Size=0x8
};
