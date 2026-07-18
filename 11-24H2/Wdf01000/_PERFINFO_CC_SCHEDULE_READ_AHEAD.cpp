struct _PERFINFO_CC_SCHEDULE_READ_AHEAD// Size=0x48 (Id=3417)
{
    unsigned long long WorkItemKey;// Offset=0x0 Size=0x8
    unsigned long long FileObjectKey;// Offset=0x8 Size=0x8
    unsigned long long FileOffset;// Offset=0x10 Size=0x8
    unsigned long Length;// Offset=0x18 Size=0x4
    unsigned long ReadAheadUnit;// Offset=0x1c Size=0x4
    unsigned long ReadAheadLength;// Offset=0x20 Size=0x4
    unsigned long long ReadAheadOffset;// Offset=0x28 Size=0x8
    unsigned long long ReadAheadBeyondLastByte;// Offset=0x30 Size=0x8
    unsigned char ReadPattern;// Offset=0x38 Size=0x1
    unsigned long SequentialReadCount;// Offset=0x3c Size=0x4
    unsigned long SharedCacheMapFlags;// Offset=0x40 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReadAheadSettingsChanged:1;// Offset=0x44 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReadAheadActive:1;// Offset=0x44 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
