struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _MMSECTION_FLAGS// Size=0x4 (Id=1135)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int BeingCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int BeingPurged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int NoModifiedWriting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int FailAllIo:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Image:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int Based:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int File:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int NoCrossPartitionAccess:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int PrefetchCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int PhysicalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int ImageControlAreaOnRemovableMedia:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Reserve:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned int Commit:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned int NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int WasPurged:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned int UserReference:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned int GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned int DeleteOnClose:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned int FilePointerNull:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x7
        unsigned int SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int UsingFileExtents:2;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x2
        unsigned int ControlAreaOnUnusedList:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned int PageSize64K:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_681// Size=0x4 (Id=681)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    union _MMSECTION_FLAGS Flags;// Offset=0x0 Size=0x4
};

union _MMSECTION_FLAGS1// Size=0x4 (Id=1227)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PartitionId:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SectionOfInterest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Unused:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

struct _EX_FAST_REF// Size=0x8 (Id=551)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

union _MMSECTION_FLAGS2// Size=0x4 (Id=1378)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ImageRelocationSizeIn64k:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long SystemImage:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CantMove:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long StrongCode:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long BitMap:2;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x2
        unsigned long ImageActive:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long ImageBaseOkToReuse:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
    };
};

union _MI_IMAGE_INFO_REF// Size=0x8 (Id=692)
{
    long long FullValue;// Offset=0x0 Size=0x8
    struct _MI_IMAGE_ADDITIONAL_INFO * PointerValue;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        union // Size=0x8 (Id=0)
        {
            unsigned long long AllFlags:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long DebugRecordsPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
};

struct _unnamed_682// Size=0x10 (Id=682)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSystemCacheViews;// Offset=0x0 Size=0x4
        unsigned long ImageRelocationStartBit;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        long WritableUserReferences;// Offset=0x4 Size=0x4
        union _MMSECTION_FLAGS2 Flags;// Offset=0x4 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        union _MI_IMAGE_INFO_REF ImageInfoRef;// Offset=0x8 Size=0x8
    };
};

union _unnamed_683// Size=0x10 (Id=683)
{
    struct _unnamed_682 e2;// Offset=0x0 Size=0x10
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

union _unnamed_684// Size=0x8 (Id=684)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long IoAttributionContext:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long ImageCrossPartitionCharge;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CommittedPageCount:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
    };
};

struct _CONTROL_AREA// Size=0x80 (Id=685)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ListHead;// Offset=0x8 Size=0x10
        void * AweContext;// Offset=0x8 Size=0x8
    };
    unsigned long long NumberOfSectionReferences;// Offset=0x18 Size=0x8
    unsigned long long NumberOfPfnReferences;// Offset=0x20 Size=0x8
    unsigned long long NumberOfMappedViews;// Offset=0x28 Size=0x8
    unsigned long long NumberOfUserReferences;// Offset=0x30 Size=0x8
    union _unnamed_681 u;// Offset=0x38 Size=0x4
    union _MMSECTION_FLAGS1 Flags1;// Offset=0x3c Size=0x4
    struct _EX_FAST_REF FilePointer;// Offset=0x40 Size=0x8
    long ControlAreaLock;// Offset=0x48 Size=0x4
    unsigned long ModifiedWriteCount;// Offset=0x4c Size=0x4
    struct _MI_CONTROL_AREA_WAIT_BLOCK * WaitList;// Offset=0x50 Size=0x8
    union _unnamed_683 u2;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK FileObjectLock;// Offset=0x68 Size=0x8
    unsigned long long LockedPages;// Offset=0x70 Size=0x8
    union _unnamed_684 u3;// Offset=0x78 Size=0x8
};
