enum _HSM_SUBSM_FLAGS
{
    HsmSubSmFlagNone=0,
    HsmSubSmFlagHub20=1,
    HsmSubSmFlagHub30=2,
    HsmSubSmFlagHubRoot=4,
    HsmSubSmFlagAny=255
};

enum _PSM20_SUBSM_FLAGS
{
    Psm20SubSmFlagNone=0,
    Psm20SubSmFlagAny=1
};

enum _PSM30_SUBSM_FLAGS
{
    Psm30SubSmFlagNone=0,
    Psm30SubSmFlagAny=1
};

enum _DSM_SUBSM_FLAGS
{
    DsmSubSmFlagNone=0,
    DsmSubSmFlagVersion10=1,
    DsmSubSmFlagVersion1X=2,
    DsmSubSmFlagVersion20=4,
    DsmSubSmFlagVersion2X=8,
    DsmSubSmFlagVersion3X=16,
    DsmSubSmFlagVersionAny=255,
    DsmSubSmFlagSpeedHigh=256,
    DsmSubSmFlagSpeedFull=512,
    DsmSubSmFlagSpeedLow=1024,
    DsmSubSmFlagSpeedSuper=2048,
    DsmSubSmFlagSpeedAny=65280,
    DsmSubSmFlagPort20=65536,
    DsmSubSmFlagPort30=131072,
    DsmSubSmFlagPortAny=16711680,
    DsmSubSmFlagAny=16777215
};

union _SUBSM_FLAGS// Size=0x4 (Id=545)
{
    unsigned long SubSmFlagsAsUlong;// Offset=0x0 Size=0x4
    enum _HSM_SUBSM_FLAGS HsmSubSmFlags;// Offset=0x0 Size=0x4
    enum _PSM20_SUBSM_FLAGS Psm20SubSmFlags;// Offset=0x0 Size=0x4
    enum _PSM30_SUBSM_FLAGS Psm30SubSmFlags;// Offset=0x0 Size=0x4
    enum _DSM_SUBSM_FLAGS DsmSubSmFlags;// Offset=0x0 Size=0x4
};
