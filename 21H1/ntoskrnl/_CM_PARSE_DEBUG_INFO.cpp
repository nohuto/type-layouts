struct _anonymous_1486// Size=0x8 (Id=1486)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned long Point;// Offset=0x4 Size=0x4
};

struct _CM_PARSE_DEBUG_INFO// Size=0x50 (Id=1487)
{
    struct _CM_KEY_CONTROL_BLOCK * SymlinkCachedKcb;// Offset=0x0 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * StartingKcb;// Offset=0x8 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * KcbCacheResult;// Offset=0x10 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * WalkResult;// Offset=0x18 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * DeepestKcbFound;// Offset=0x20 Size=0x8
    unsigned char KcbCacheLevels;// Offset=0x28 Size=0x1
    unsigned char WalkLevels;// Offset=0x29 Size=0x1
    unsigned char FailureCount;// Offset=0x2a Size=0x1
    struct _anonymous_1486 FailurePoints[4];// Offset=0x2c Size=0x20
};
