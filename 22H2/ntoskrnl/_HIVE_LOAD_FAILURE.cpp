enum _CM_LOAD_FAILURE_TYPE
{
    _None=0,
    _CmpCreateHive=1,
    _HvpBuildMap=3,
    _HvpBuildMapForLoaderHive=4,
    _HvpInitMap=5,
    _HvLoadHive=6,
    _HvpMapHiveImage=7,
    _HvpRecoverData=8,
    _CmpValidateHiveSecurityDescriptors=9,
    _HvpEnlistBinInMap=10,
    _CmCheckRegistry=11,
    _CmRegistryIO=12,
    _CmCheckRegistry2=13,
    _CmpCheckKey=14,
    _CmpCheckValueList=15,
    _HvCheckHive=16,
    _HvCheckBin=17,
    _HvpGetLogEntryDirtyVector=18,
    _HvpReadLogEntryHeader=19,
    _HvpReadLogEntry=20,
    _CmpMountPreloadedHives=21,
    _CmpLoadHiveThread=22,
    _CmpCheckLeaf=23,
    _HvHiveStartFileBacked=24,
    _HvStartHiveMemoryBacked=25,
    _HvpEnlistFreeCells=26,
    _HvpPerformLogFileRecovery=27,
    _CmpInitHiveFromFile=28,
    _CmpLoadKeyCommon=29,
    _CmpLinkHiveToMaster=30,
    _CmLoadKey=31,
    _CmLoadAppKey=32,
    _CmpResolveHiveLoadConflict=33
};

struct _anonymous_573// Size=0xc (Id=573)
{
    enum _CM_LOAD_FAILURE_TYPE Failure;// Offset=0x0 Size=0x4
    long Status;// Offset=0x4 Size=0x4
    unsigned long Point;// Offset=0x8 Size=0x4
};

struct _anonymous_574// Size=0x18 (Id=574)
{
    unsigned long Action;// Offset=0x0 Size=0x4
    void * Handle;// Offset=0x8 Size=0x8
    long Status;// Offset=0x10 Size=0x4
};

struct _anonymous_575// Size=0x8 (Id=575)
{
    void * CheckStack;// Offset=0x0 Size=0x8
};

struct _anonymous_576// Size=0x20 (Id=576)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x8 Size=0x8
    void * RootPoint;// Offset=0x10 Size=0x8
    unsigned long Index;// Offset=0x18 Size=0x4
};

struct _anonymous_577// Size=0x18 (Id=577)
{
    struct _CELL_DATA * List;// Offset=0x0 Size=0x8
    unsigned long Index;// Offset=0x8 Size=0x4
    unsigned long Cell;// Offset=0xc Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x10 Size=0x8
};

struct _anonymous_578// Size=0x10 (Id=578)
{
    unsigned long Space;// Offset=0x0 Size=0x4
    unsigned long MapPoint;// Offset=0x4 Size=0x4
    struct _HBIN * BinPoint;// Offset=0x8 Size=0x8
};

struct _anonymous_579// Size=0x10 (Id=579)
{
    struct _HBIN * Bin;// Offset=0x0 Size=0x8
    struct _HCELL * CellPoint;// Offset=0x8 Size=0x8
};

struct _anonymous_580// Size=0x4 (Id=580)
{
    unsigned long FileOffset;// Offset=0x0 Size=0x4
};

struct _anonymous_1494// Size=0x8 (Id=1494)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned long Point;// Offset=0x4 Size=0x4
};

struct _CM_PARSE_DEBUG_INFO// Size=0x50 (Id=1495)
{
    struct _CM_KEY_CONTROL_BLOCK * SymlinkCachedKcb;// Offset=0x0 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * StartingKcb;// Offset=0x8 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * KcbCacheResult;// Offset=0x10 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * WalkResult;// Offset=0x18 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * DeepestKcbFound;// Offset=0x20 Size=0x8
    unsigned char KcbCacheLevels;// Offset=0x28 Size=0x1
    unsigned char WalkLevels;// Offset=0x29 Size=0x1
    unsigned char FailureCount;// Offset=0x2a Size=0x1
    struct _anonymous_1494 FailurePoints[4];// Offset=0x2c Size=0x20
};

struct _HIVE_LOAD_FAILURE// Size=0x1b0 (Id=581)
{
    struct _HHIVE * Hive;// Offset=0x0 Size=0x8
    unsigned short Index;// Offset=0x8 Size=0x2
    unsigned short RecoverableIndex;// Offset=0xa Size=0x2
    struct _anonymous_573 Locations[8];// Offset=0xc Size=0x60
    struct _anonymous_573 RecoverableLocations[8];// Offset=0x6c Size=0x60
    struct _anonymous_574 RegistryIO;// Offset=0xd0 Size=0x18
    struct _anonymous_575 CheckRegistry2;// Offset=0xe8 Size=0x8
    struct _anonymous_576 CheckKey;// Offset=0xf0 Size=0x20
    struct _anonymous_577 CheckValueList;// Offset=0x110 Size=0x18
    struct _anonymous_578 CheckHive;// Offset=0x128 Size=0x10
    struct _anonymous_578 CheckHive1;// Offset=0x138 Size=0x10
    struct _anonymous_579 CheckBin;// Offset=0x148 Size=0x10
    struct _anonymous_580 RecoverData;// Offset=0x158 Size=0x4
    struct _CM_PARSE_DEBUG_INFO LinkDebug;// Offset=0x160 Size=0x50
};
