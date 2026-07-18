enum _WHEA_ERROR_SOURCE_TYPE
{
    WheaErrSrcTypeMCE=0,
    WheaErrSrcTypeCMC=1,
    WheaErrSrcTypeCPE=2,
    WheaErrSrcTypeNMI=3,
    WheaErrSrcTypePCIe=4,
    WheaErrSrcTypeGeneric=5,
    WheaErrSrcTypeINIT=6,
    WheaErrSrcTypeBOOT=7,
    WheaErrSrcTypeSCIGeneric=8,
    WheaErrSrcTypeIPFMCA=9,
    WheaErrSrcTypeIPFCMC=10,
    WheaErrSrcTypeIPFCPE=11,
    WheaErrSrcTypeGenericV2=12,
    WheaErrSrcTypeSCIGenericV2=13,
    WheaErrSrcTypeBMC=14,
    WheaErrSrcTypePMEM=15,
    WheaErrSrcTypeDeviceDriver=16,
    WheaErrSrcTypeSea=17,
    WheaErrSrcTypeSei=18,
    WheaErrSrcTypeMax=19
};

struct _WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS// Size=0x10 (Id=3328)
{
    enum _WHEA_ERROR_SOURCE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long MaxRawDataLength;// Offset=0x4 Size=0x4
    unsigned long NumRecordsToPreallocate;// Offset=0x8 Size=0x4
    unsigned long MaxSectionsPerRecord;// Offset=0xc Size=0x4
};
