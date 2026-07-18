enum _CM_LOAD_FAILURE_TYPE
{
    _None=0,
    _CmCreateHive=1,
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
    _HvpPerformLogFileRecovery=27
};

struct _anonymous_324// Size=0xc (Id=324)
{
    enum _CM_LOAD_FAILURE_TYPE Failure;// Offset=0x0 Size=0x4
    long Status;// Offset=0x4 Size=0x4
    unsigned long Point;// Offset=0x8 Size=0x4
};

struct _anonymous_325// Size=0x18 (Id=325)
{
    unsigned long Action;// Offset=0x0 Size=0x4
    void * Handle;// Offset=0x8 Size=0x8
    long Status;// Offset=0x10 Size=0x4
};

struct _anonymous_326// Size=0x8 (Id=326)
{
    void * CheckStack;// Offset=0x0 Size=0x8
};

struct _anonymous_327// Size=0x20 (Id=327)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x8 Size=0x8
    void * RootPoint;// Offset=0x10 Size=0x8
    unsigned long Index;// Offset=0x18 Size=0x4
};

struct _anonymous_328// Size=0x18 (Id=328)
{
    struct _CELL_DATA * List;// Offset=0x0 Size=0x8
    unsigned long Index;// Offset=0x8 Size=0x4
    unsigned long Cell;// Offset=0xc Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x10 Size=0x8
};

struct _anonymous_329// Size=0x10 (Id=329)
{
    unsigned long Space;// Offset=0x0 Size=0x4
    unsigned long MapPoint;// Offset=0x4 Size=0x4
    struct _HBIN * BinPoint;// Offset=0x8 Size=0x8
};

struct _anonymous_330// Size=0x10 (Id=330)
{
    struct _HBIN * Bin;// Offset=0x0 Size=0x8
    struct _HCELL * CellPoint;// Offset=0x8 Size=0x8
};

struct _anonymous_331// Size=0x4 (Id=331)
{
    unsigned long FileOffset;// Offset=0x0 Size=0x4
};

struct _HIVE_LOAD_FAILURE// Size=0x160 (Id=332)
{
    struct _HHIVE * Hive;// Offset=0x0 Size=0x8
    unsigned short Index;// Offset=0x8 Size=0x2
    unsigned short RecoverableIndex;// Offset=0xa Size=0x2
    struct _anonymous_324 Locations[8];// Offset=0xc Size=0x60
    struct _anonymous_324 RecoverableLocations[8];// Offset=0x6c Size=0x60
    struct _anonymous_325 RegistryIO;// Offset=0xd0 Size=0x18
    struct _anonymous_326 CheckRegistry2;// Offset=0xe8 Size=0x8
    struct _anonymous_327 CheckKey;// Offset=0xf0 Size=0x20
    struct _anonymous_328 CheckValueList;// Offset=0x110 Size=0x18
    struct _anonymous_329 CheckHive;// Offset=0x128 Size=0x10
    struct _anonymous_329 CheckHive1;// Offset=0x138 Size=0x10
    struct _anonymous_330 CheckBin;// Offset=0x148 Size=0x10
    struct _anonymous_331 RecoverData;// Offset=0x158 Size=0x4
};
