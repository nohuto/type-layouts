enum _TCG_SSC_TYPE
{
    OPTICAL_SSC=80,
    ENTERPRISE_SSC=256,
    OPAL_SSC=512
};

struct _TPER_PROPERTIES// Size=0x2c (Id=1084)
{
    unsigned long MaxComPacketSize;// Offset=0x0 Size=0x4
    unsigned long MaxResponseComPacketSize;// Offset=0x4 Size=0x4
    unsigned long MaxPacketSize;// Offset=0x8 Size=0x4
    unsigned long MaxIndTokenSize;// Offset=0xc Size=0x4
    unsigned long MaxPackets;// Offset=0x10 Size=0x4
    unsigned long MaxSubpackets;// Offset=0x14 Size=0x4
    unsigned long MaxMethods;// Offset=0x18 Size=0x4
    unsigned long MaxSessions;// Offset=0x1c Size=0x4
    unsigned long MaxAuthentications;// Offset=0x20 Size=0x4
    unsigned long MaxTransactionLimit;// Offset=0x24 Size=0x4
    unsigned long DefSessionTimeout;// Offset=0x28 Size=0x4
};

struct _unnamed_806// Size=0x6 (Id=806)
{
    unsigned char LockingSupported;// Offset=0x0 Size=0x1
    unsigned char LockingEnabled;// Offset=0x1 Size=0x1
    unsigned char Locked;// Offset=0x2 Size=0x1
    unsigned char MediaEncryption;// Offset=0x3 Size=0x1
    unsigned char MbrEnabled;// Offset=0x4 Size=0x1
    unsigned char MbrDone;// Offset=0x5 Size=0x1
};

enum _TCG_SP_STATE
{
    SP_STATE_MANUFACTURED_INACTIVE=8,
    SP_STATE_MANUFACTURED=9
};

struct _unnamed_808// Size=0x38 (Id=808)
{
    unsigned char LockingSpPresent;// Offset=0x0 Size=0x1
    enum _TCG_SP_STATE LockingSpState;// Offset=0x4 Size=0x4
    unsigned long BandCount;// Offset=0x8 Size=0x4
    unsigned long long KeyProtectionMechanism;// Offset=0x10 Size=0x8
    unsigned long long LockingTableUID;// Offset=0x18 Size=0x8
    unsigned char AdminsOwnAccess;// Offset=0x20 Size=0x1
    unsigned char AlignmentRequired;// Offset=0x21 Size=0x1
    unsigned long LogicalBlockSize;// Offset=0x24 Size=0x4
    unsigned long long AlignmentGranularity;// Offset=0x28 Size=0x8
    unsigned long long LowestAlignedLBA;// Offset=0x30 Size=0x8
};

struct _unnamed_809// Size=0x8 (Id=809)
{
    unsigned char RangeCrossingSupported;// Offset=0x0 Size=0x1
    unsigned char FixedAclModeSupported;// Offset=0x1 Size=0x1
    unsigned short NumLockingSpAdminAuth;// Offset=0x2 Size=0x2
    unsigned short NumLockingSpUserAuth;// Offset=0x4 Size=0x2
    unsigned char InitialSIDPin;// Offset=0x6 Size=0x1
    unsigned char SIDPinBehaviorOnRevert;// Offset=0x7 Size=0x1
};

union _unnamed_810// Size=0x8 (Id=810)
{
    struct _unnamed_809 Opal;// Offset=0x0 Size=0x8
};

struct _unnamed_811// Size=0x8 (Id=811)
{
    unsigned long NumLockingObjectsSupported;// Offset=0x0 Size=0x4
    unsigned char AnyRangesInFixedACL;// Offset=0x4 Size=0x1
    unsigned char AllRangesInFixedACL;// Offset=0x5 Size=0x1
    unsigned char AdminPolicy;// Offset=0x6 Size=0x1
};

struct _unnamed_812// Size=0xc (Id=812)
{
    unsigned short MaxNumTables;// Offset=0x0 Size=0x2
    unsigned long MaxSizeTables;// Offset=0x4 Size=0x4
    unsigned long MinTableSizeAlignment;// Offset=0x8 Size=0x4
};

struct _unnamed_813// Size=0x4 (Id=813)
{
    unsigned char BlockSIDSupported;// Offset=0x0 Size=0x1
    unsigned char SIDPinBlocked;// Offset=0x1 Size=0x1
    unsigned char SIDPinIsMSID;// Offset=0x2 Size=0x1
    unsigned char ClearBlockOnHardwareReset;// Offset=0x3 Size=0x1
};

struct _unnamed_814// Size=0x10 (Id=814)
{
    unsigned char CnlSupported;// Offset=0x0 Size=0x1
    unsigned char NamespaceSUMSupported;// Offset=0x1 Size=0x1
    unsigned char NamespaceNonGlobalRangeSupported;// Offset=0x2 Size=0x1
    unsigned char NamespaceNonGlobalRangePresent;// Offset=0x3 Size=0x1
    unsigned long MaximumKeyCount;// Offset=0x4 Size=0x4
    unsigned long UnusedKeyCount;// Offset=0x8 Size=0x4
    unsigned long MaxRangesPerNamespace;// Offset=0xc Size=0x4
};

struct _TCG_DEVICE_PROPERTIES// Size=0xa8 (Id=815)
{
    enum _TCG_SSC_TYPE SscType;// Offset=0x0 Size=0x4
    unsigned char fSIDSecured;// Offset=0x4 Size=0x1
    struct _TPER_PROPERTIES TPerProperties;// Offset=0x8 Size=0x2c
    struct _unnamed_806 LockingFeatureProperties;// Offset=0x34 Size=0x6
    struct _unnamed_808 LockingSpProperties;// Offset=0x40 Size=0x38
    union _unnamed_810 SscProperties;// Offset=0x78 Size=0x8
    struct _unnamed_811 FixedACLProperties;// Offset=0x80 Size=0x8
    struct _unnamed_812 DataStoreTables;// Offset=0x88 Size=0xc
    struct _unnamed_813 BlockSIDProperties;// Offset=0x94 Size=0x4
    struct _unnamed_814 CNLProperties;// Offset=0x98 Size=0x10
};
