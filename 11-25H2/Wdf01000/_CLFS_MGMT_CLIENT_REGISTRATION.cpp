struct _CLFS_MGMT_CLIENT_REGISTRATION// Size=0x38 (Id=2398)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    long  ( * AdvanceTailCallback)(struct _FILE_OBJECT * ,struct _CLS_LSN * ,void * );// Offset=0x8 Size=0x8
    void * AdvanceTailCallbackData;// Offset=0x10 Size=0x8
    void  ( * LogGrowthCompleteCallback)(struct _FILE_OBJECT * ,long ,unsigned char ,void * );// Offset=0x18 Size=0x8
    void * LogGrowthCompleteCallbackData;// Offset=0x20 Size=0x8
    void  ( * LogUnpinnedCallback)(struct _FILE_OBJECT * ,void * );// Offset=0x28 Size=0x8
    void * LogUnpinnedCallbackData;// Offset=0x30 Size=0x8
};
