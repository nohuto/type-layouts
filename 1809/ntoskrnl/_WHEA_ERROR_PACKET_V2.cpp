union _WHEA_ERROR_PACKET_FLAGS// Size=0x4 (Id=1300)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PreviousError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HypervisorError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Simulated:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PlatformPfaControl:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PlatformDirectedOffline:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

enum _WHEA_ERROR_TYPE
{
    WheaErrTypeProcessor=0,
    WheaErrTypeMemory=1,
    WheaErrTypePCIExpress=2,
    WheaErrTypeNMI=3,
    WheaErrTypePCIXBus=4,
    WheaErrTypePCIXDevice=5,
    WheaErrTypeGeneric=6
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

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
    WheaErrSrcTypeMax=14
};

struct _GUID// Size=0x10 (Id=223)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _WHEA_ERROR_PACKET_DATA_FORMAT
{
    WheaDataFormatIPFSalRecord=0,
    WheaDataFormatXPFMCA=1,
    WheaDataFormatMemory=2,
    WheaDataFormatPCIExpress=3,
    WheaDataFormatNMIPort=4,
    WheaDataFormatPCIXBus=5,
    WheaDataFormatPCIXDevice=6,
    WheaDataFormatGeneric=7,
    WheaDataFormatMax=8
};

struct _WHEA_ERROR_PACKET_V2// Size=0x50 (Id=206)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    union _WHEA_ERROR_PACKET_FLAGS Flags;// Offset=0xc Size=0x4
    enum _WHEA_ERROR_TYPE ErrorType;// Offset=0x10 Size=0x4
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;// Offset=0x14 Size=0x4
    unsigned long ErrorSourceId;// Offset=0x18 Size=0x4
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;// Offset=0x1c Size=0x4
    struct _GUID NotifyType;// Offset=0x20 Size=0x10
    unsigned long long Context;// Offset=0x30 Size=0x8
    enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;// Offset=0x38 Size=0x4
    unsigned long Reserved1;// Offset=0x3c Size=0x4
    unsigned long DataOffset;// Offset=0x40 Size=0x4
    unsigned long DataLength;// Offset=0x44 Size=0x4
    unsigned long PshedDataOffset;// Offset=0x48 Size=0x4
    unsigned long PshedDataLength;// Offset=0x4c Size=0x4
};
