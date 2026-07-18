enum _DMM_CLIENT_TYPE
{
    DMM_CT_UNINITIALIZED=0,
    DMM_CT_CDD_NOPATHDATA=1,
    DMM_CT_USERMODE=2,
    DMM_CT_CDD_PATHDATA=3,
    DMM_CT_DXGPORT=4,
    DMM_CT_DISPLAY_ONOFF=5
};

enum _DMM_VIDPNCHANGE_TYPE
{
    DMM_CVR_UNINITIALIZED=0,
    DMM_CVR_UPDATEMODALITY=1,
    DMM_CVR_ADDPATH=2,
    DMM_CVR_ADDPATHS=3,
    DMM_CVR_REMOVEPATH=4,
    DMM_CVR_REMOVEALLPATHS=5
};

struct _DMM_COMMITVIDPNREQUEST_DIAGINFO// Size=0xc (Id=408)
{
    struct // Size=0x5 (Id=0)
    {
        enum _DMM_CLIENT_TYPE ClientType:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        enum _DMM_VIDPNCHANGE_TYPE VidPnChange:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned char ReclaimClonedTarget:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CleanupAfterFailedCommitVidPn:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ForceAllActiveVidPnModeListInvalidation:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SkipCommitVidPn:1;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
    unsigned long ModeChangeRequestId;// Offset=0x8 Size=0x4
};

struct _DMM_VIDPN_SERIALIZATION// Size=0xc (Id=176)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned char NumActiveSources;// Offset=0x4 Size=0x1
    unsigned long PathsFromSourceSerializationOffsets[1];// Offset=0x8 Size=0x4
};

struct _DMM_COMMITVIDPNREQUEST_SERIALIZATION// Size=0x1c (Id=191)
{
    unsigned int AffectedVidPnSourceId;// Offset=0x0 Size=0x4
    struct _DMM_COMMITVIDPNREQUEST_DIAGINFO RequestDiagInfo;// Offset=0x4 Size=0xc
    struct _DMM_VIDPN_SERIALIZATION VidPnSerialization;// Offset=0x10 Size=0xc
};
