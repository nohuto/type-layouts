enum _CM_LOAD_FAILURE_TYPE
{
    _None=0,
    _CmInitializeHive=1,
    _HvInitializeHive=2,
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
    _CmpCheckLeaf=23
};

struct _unnamed_263// Size=0xc (Id=263)
{
    enum _CM_LOAD_FAILURE_TYPE Failure;// Offset=0x0 Size=0x4
    long Status;// Offset=0x4 Size=0x4
    unsigned long Point;// Offset=0x8 Size=0x4
};

struct _unnamed_264// Size=0x18 (Id=264)
{
    unsigned long Action;// Offset=0x0 Size=0x4
    void * Handle;// Offset=0x8 Size=0x8
    long Status;// Offset=0x10 Size=0x4
};

struct _unnamed_265// Size=0x8 (Id=265)
{
    void * CheckStack;// Offset=0x0 Size=0x8
};

struct _unnamed_266// Size=0x20 (Id=266)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x8 Size=0x8
    void * RootPoint;// Offset=0x10 Size=0x8
    unsigned long Index;// Offset=0x18 Size=0x4
};

struct _unnamed_267// Size=0x18 (Id=267)
{
    struct _CELL_DATA * List;// Offset=0x0 Size=0x8
    unsigned long Index;// Offset=0x8 Size=0x4
    unsigned long Cell;// Offset=0xc Size=0x4
    struct _CELL_DATA * CellPoint;// Offset=0x10 Size=0x8
};

struct _unnamed_268// Size=0x10 (Id=268)
{
    unsigned long Space;// Offset=0x0 Size=0x4
    unsigned long MapPoint;// Offset=0x4 Size=0x4
    struct _HBIN * BinPoint;// Offset=0x8 Size=0x8
};

struct _unnamed_269// Size=0x10 (Id=269)
{
    struct _HBIN * Bin;// Offset=0x0 Size=0x8
    struct _HCELL * CellPoint;// Offset=0x8 Size=0x8
};

struct _unnamed_270// Size=0x4 (Id=270)
{
    unsigned long FileOffset;// Offset=0x0 Size=0x4
};

struct _HIVE_LOAD_FAILURE// Size=0x160 (Id=271)
{
    struct _HHIVE * Hive;// Offset=0x0 Size=0x8
    unsigned short Index;// Offset=0x8 Size=0x2
    unsigned short RecoverableIndex;// Offset=0xa Size=0x2
    struct _unnamed_263 Locations[8];// Offset=0xc Size=0x60
    struct _unnamed_263 RecoverableLocations[8];// Offset=0x6c Size=0x60
    struct _unnamed_264 RegistryIO;// Offset=0xd0 Size=0x18
    struct _unnamed_265 CheckRegistry2;// Offset=0xe8 Size=0x8
    struct _unnamed_266 CheckKey;// Offset=0xf0 Size=0x20
    struct _unnamed_267 CheckValueList;// Offset=0x110 Size=0x18
    struct _unnamed_268 CheckHive;// Offset=0x128 Size=0x10
    struct _unnamed_268 CheckHive1;// Offset=0x138 Size=0x10
    struct _unnamed_269 CheckBin;// Offset=0x148 Size=0x10
    struct _unnamed_270 RecoverData;// Offset=0x158 Size=0x4
};
