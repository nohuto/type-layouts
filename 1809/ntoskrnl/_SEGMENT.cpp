struct _SEGMENT_FLAGS// Size=0x4 (Id=1480)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short TotalNumberOfPtes4132:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
            unsigned short Spare0:2;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x2
            unsigned short LargePages:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
            unsigned short DebugSymbolsLoaded:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
            unsigned short WriteCombined:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
            unsigned short NoCache:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        unsigned short Short0;// Offset=0x0 Size=0x2
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Unused:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DefaultProtectionMask:5;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x5
            unsigned char Binary32:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ContainsDebug:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char UChar1;// Offset=0x2 Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ForceCollision:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char ImageSigningType:3;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x3
            unsigned char ImageSigningLevel:4;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned char UChar2;// Offset=0x3 Size=0x1
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=87)
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

union _unnamed_243// Size=0x8 (Id=243)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long ImageCommitment;// Offset=0x0 Size=0x8
        unsigned long CreatingProcessId;// Offset=0x0 Size=0x4
    };
};

union _unnamed_244// Size=0x8 (Id=244)
{
    struct _MI_SECTION_IMAGE_INFORMATION * ImageInformation;// Offset=0x0 Size=0x8
    void * FirstMappedVa;// Offset=0x0 Size=0x8
};

struct _SEGMENT// Size=0x48 (Id=245)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    unsigned long TotalNumberOfPtes;// Offset=0x8 Size=0x4
    struct _SEGMENT_FLAGS SegmentFlags;// Offset=0xc Size=0x4
    unsigned long long NumberOfCommittedPages;// Offset=0x10 Size=0x8
    unsigned long long SizeOfSegment;// Offset=0x18 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _MMEXTEND_INFO * ExtendInfo;// Offset=0x20 Size=0x8
        void * BasedAddress;// Offset=0x20 Size=0x8
    };
    struct _EX_PUSH_LOCK SegmentLock;// Offset=0x28 Size=0x8
    union _unnamed_243 u1;// Offset=0x30 Size=0x8
    union _unnamed_244 u2;// Offset=0x38 Size=0x8
    struct _MMPTE * PrototypePte;// Offset=0x40 Size=0x8
};
