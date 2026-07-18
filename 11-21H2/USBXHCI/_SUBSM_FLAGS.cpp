enum _ESM_SUBSM_FLAGS
{
    EsmSubSmFlagNone=0,
    EsmSubSmFlagHubRoot=1,
    EsmSubSmFlagAny=255
};

union _SUBSM_FLAGS// Size=0x4 (Id=974)
{
    unsigned long SubSmFlagsAsUlong;// Offset=0x0 Size=0x4
    enum _ESM_SUBSM_FLAGS EsmSubSmFlags;// Offset=0x0 Size=0x4
};
