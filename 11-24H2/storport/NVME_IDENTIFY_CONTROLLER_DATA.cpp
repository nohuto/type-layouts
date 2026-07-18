struct _unnamed_292// Size=0x1 (Id=292)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MultiPorts:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MultiControllers:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char SRIOV:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ANAR:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _unnamed_293// Size=0x4 (Id=293)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NamespaceAttributeChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long FirmwareActivation:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AsymmetricAccessChanged:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PredictableLatencyAggregateLogChanged:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long LbaStatusChanged:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long EnduranceGroupAggregateLogChanged:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NormalNvmSubsystemShutdown:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved2:11;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xb
        unsigned long ZoneInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Reserved3:3;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x3
        unsigned long DiscoveryLogChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _unnamed_294// Size=0x4 (Id=294)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HostIdentifier128Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NOPSPMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NVMSets:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ReadRecoveryLevels:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long EnduranceGroups:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PredictableLatencyMode:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long TBKAS:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long NamespaceGranularity:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SQAssociations:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long UUIDList:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long MultiDomainSubsystem:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long FixedCapacityManagement:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long VariableCapacityManagement:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DeleteEnduranceGroup:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long DeleteNVMSet:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ELBAS:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _unnamed_295// Size=0x2 (Id=295)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ReadRecoveryLevel0:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ReadRecoveryLevel1:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short ReadRecoveryLevel2:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ReadRecoveryLevel3:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ReadRecoveryLevel4:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short ReadRecoveryLevel5:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short ReadRecoveryLevel6:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short ReadRecoveryLevel7:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short ReadRecoveryLevel8:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short ReadRecoveryLevel9:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short ReadRecoveryLevel10:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short ReadRecoveryLevel11:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short ReadRecoveryLevel12:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short ReadRecoveryLevel13:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
        unsigned short ReadRecoveryLevel14:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short ReadRecoveryLevel15:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

struct _unnamed_296// Size=0x2 (Id=296)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SecurityCommands:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short FormatNVM:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FirmwareCommands:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short NamespaceCommands:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short DeviceSelfTest:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Directives:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short NVMeMICommands:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short VirtualizationMgmt:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DoorBellBufferConfig:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short GetLBAStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short CommandFeatureLockdown:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short Reserved:5;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x5
    };
};

struct _unnamed_297// Size=0x1 (Id=297)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Slot1ReadOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SlotCount:3;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char ActivationWithoutReset:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_298// Size=0x1 (Id=298)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char SmartPagePerNamespace:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CommandEffectsLog:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char LogPageExtendedData:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char TelemetrySupport:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char PersistentEventLog:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SupportedLogPages:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char TelemetryDataArea4:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_299// Size=0x1 (Id=299)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char CommandFormatInSpec:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _unnamed_300// Size=0x1 (Id=300)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Supported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _unnamed_301// Size=0x4 (Id=301)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RPMBUnitCount:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long AuthenticationMethod:3;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long Reserved0:10;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0xa
        unsigned long TotalSize:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long AccessSize:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _unnamed_302// Size=0x2 (Id=302)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Supported:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct _unnamed_303// Size=0x4 (Id=303)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CryptoErase:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long BlockErase:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Overwrite:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1a
        unsigned long NDI:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long NODMMAS:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

struct _unnamed_304// Size=0x1 (Id=304)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char OptimizedState:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char NonOptimizedState:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char InaccessibleState:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char PersistentLossState:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ChangeState:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char StaticANAGRPID:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SupportNonZeroANAGRPID:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_305// Size=0x1 (Id=305)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char RequiredEntrySize:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char MaxEntrySize:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _unnamed_306// Size=0x2 (Id=306)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Compare:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short WriteUncorrectable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short DatasetManagement:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short WriteZeroes:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short FeatureField:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reservations:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short Timestamp:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short Verify:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short Reserved:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
};

struct _unnamed_307// Size=0x2 (Id=307)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CompareAndWrite:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct _unnamed_308// Size=0x1 (Id=308)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FormatApplyToAll:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SecureEraseApplyToAll:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char CryptographicEraseSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char FormatSupportNSIDAllF:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _unnamed_309// Size=0x1 (Id=309)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Present:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char FlushBehavior:2;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};

struct _unnamed_310// Size=0x1 (Id=310)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char WriteProtect:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char UntilPowerCycle:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Permanent:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};

struct _unnamed_311// Size=0x4 (Id=311)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SGLSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long KeyedSGLData:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved0:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
        unsigned long BitBucketDescrSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ByteAlignedContiguousPhysicalBuffer:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long SGLLengthLargerThanDataLength:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long MPTRSGLDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long AddressFieldSGLDataBlock:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long TransportSGLData:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Reserved1:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
    };
};

struct _unnamed_312// Size=0x1 (Id=312)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char StaticControllerModel:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _unnamed_313// Size=0x2 (Id=313)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short IOQueueDeletion:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct NVME_IDENTIFY_CONTROLLER_DATA// Size=0x1000 (Id=314)
{
    unsigned short VID;// Offset=0x0 Size=0x2
    unsigned short SSVID;// Offset=0x2 Size=0x2
    unsigned char SN[20];// Offset=0x4 Size=0x14
    unsigned char MN[40];// Offset=0x18 Size=0x28
    unsigned char FR[8];// Offset=0x40 Size=0x8
    unsigned char RAB;// Offset=0x48 Size=0x1
    unsigned char IEEE[3];// Offset=0x49 Size=0x3
    struct _unnamed_292 CMIC;// Offset=0x4c Size=0x1
    unsigned char MDTS;// Offset=0x4d Size=0x1
    unsigned short CNTLID;// Offset=0x4e Size=0x2
    unsigned long VER;// Offset=0x50 Size=0x4
    unsigned long RTD3R;// Offset=0x54 Size=0x4
    unsigned long RTD3E;// Offset=0x58 Size=0x4
    struct _unnamed_293 OAES;// Offset=0x5c Size=0x4
    struct _unnamed_294 CTRATT;// Offset=0x60 Size=0x4
    struct _unnamed_295 RRLS;// Offset=0x64 Size=0x2
    unsigned char Reserved0[9];// Offset=0x66 Size=0x9
    unsigned char CNTRLTYPE;// Offset=0x6f Size=0x1
    unsigned char FGUID[16];// Offset=0x70 Size=0x10
    unsigned short CRDT1;// Offset=0x80 Size=0x2
    unsigned short CRDT2;// Offset=0x82 Size=0x2
    unsigned short CRDT3;// Offset=0x84 Size=0x2
    unsigned char Reserved1[106];// Offset=0x86 Size=0x6a
    unsigned char ReservedForManagement[13];// Offset=0xf0 Size=0xd
    unsigned char NVMSR;// Offset=0xfd Size=0x1
    unsigned char VWCI;// Offset=0xfe Size=0x1
    unsigned char MEC;// Offset=0xff Size=0x1
    struct _unnamed_296 OACS;// Offset=0x100 Size=0x2
    unsigned char ACL;// Offset=0x102 Size=0x1
    unsigned char AERL;// Offset=0x103 Size=0x1
    struct _unnamed_297 FRMW;// Offset=0x104 Size=0x1
    struct _unnamed_298 LPA;// Offset=0x105 Size=0x1
    unsigned char ELPE;// Offset=0x106 Size=0x1
    unsigned char NPSS;// Offset=0x107 Size=0x1
    struct _unnamed_299 AVSCC;// Offset=0x108 Size=0x1
    struct _unnamed_300 APSTA;// Offset=0x109 Size=0x1
    unsigned short WCTEMP;// Offset=0x10a Size=0x2
    unsigned short CCTEMP;// Offset=0x10c Size=0x2
    unsigned short MTFA;// Offset=0x10e Size=0x2
    unsigned long HMPRE;// Offset=0x110 Size=0x4
    unsigned long HMMIN;// Offset=0x114 Size=0x4
    unsigned char TNVMCAP[16];// Offset=0x118 Size=0x10
    unsigned char UNVMCAP[16];// Offset=0x128 Size=0x10
    struct _unnamed_301 RPMBS;// Offset=0x138 Size=0x4
    unsigned short EDSTT;// Offset=0x13c Size=0x2
    unsigned char DSTO;// Offset=0x13e Size=0x1
    unsigned char FWUG;// Offset=0x13f Size=0x1
    unsigned short KAS;// Offset=0x140 Size=0x2
    struct _unnamed_302 HCTMA;// Offset=0x142 Size=0x2
    unsigned short MNTMT;// Offset=0x144 Size=0x2
    unsigned short MXTMT;// Offset=0x146 Size=0x2
    struct _unnamed_303 SANICAP;// Offset=0x148 Size=0x4
    unsigned long HMMINDS;// Offset=0x14c Size=0x4
    unsigned short HMMAXD;// Offset=0x150 Size=0x2
    unsigned short NSETIDMAX;// Offset=0x152 Size=0x2
    unsigned short ENDGIDMAX;// Offset=0x154 Size=0x2
    unsigned char ANATT;// Offset=0x156 Size=0x1
    struct _unnamed_304 ANACAP;// Offset=0x157 Size=0x1
    unsigned long ANAGRPMAX;// Offset=0x158 Size=0x4
    unsigned long NANAGRPID;// Offset=0x15c Size=0x4
    unsigned long PELS;// Offset=0x160 Size=0x4
    unsigned short DomainId;// Offset=0x164 Size=0x2
    unsigned char Reserved2[10];// Offset=0x166 Size=0xa
    unsigned char MEGCAP[16];// Offset=0x170 Size=0x10
    unsigned char TMPTHHA;// Offset=0x180 Size=0x1
    unsigned char Reserved3;// Offset=0x181 Size=0x1
    unsigned short CQT;// Offset=0x182 Size=0x2
    unsigned char Reserved4[124];// Offset=0x184 Size=0x7c
    struct _unnamed_305 SQES;// Offset=0x200 Size=0x1
    struct _unnamed_305 CQES;// Offset=0x201 Size=0x1
    unsigned short MAXCMD;// Offset=0x202 Size=0x2
    unsigned long NN;// Offset=0x204 Size=0x4
    struct _unnamed_306 ONCS;// Offset=0x208 Size=0x2
    struct _unnamed_307 FUSES;// Offset=0x20a Size=0x2
    struct _unnamed_308 FNA;// Offset=0x20c Size=0x1
    struct _unnamed_309 VWC;// Offset=0x20d Size=0x1
    unsigned short AWUN;// Offset=0x20e Size=0x2
    unsigned short AWUPF;// Offset=0x210 Size=0x2
    struct _unnamed_299 NVSCC;// Offset=0x212 Size=0x1
    struct _unnamed_310 NWPC;// Offset=0x213 Size=0x1
    unsigned short ACWU;// Offset=0x214 Size=0x2
    unsigned short CopyDescFormats;// Offset=0x216 Size=0x2
    struct _unnamed_311 SGLS;// Offset=0x218 Size=0x4
    unsigned long MNAN;// Offset=0x21c Size=0x4
    unsigned char MAXDNA[16];// Offset=0x220 Size=0x10
    unsigned long MAXCNA;// Offset=0x230 Size=0x4
    unsigned char Reserved6[204];// Offset=0x234 Size=0xcc
    unsigned char SUBNQN[256];// Offset=0x300 Size=0x100
    unsigned char Reserved7[768];// Offset=0x400 Size=0x300
    unsigned long IOCCSZ;// Offset=0x700 Size=0x4
    unsigned long IORCSZ;// Offset=0x704 Size=0x4
    unsigned short ICDOFF;// Offset=0x708 Size=0x2
    struct _unnamed_312 FCATT;// Offset=0x70a Size=0x1
    unsigned char MSDBD;// Offset=0x70b Size=0x1
    struct _unnamed_313 OFCS;// Offset=0x70c Size=0x2
    unsigned char DCTYPE;// Offset=0x70e Size=0x1
    unsigned char Reserved8[241];// Offset=0x70f Size=0xf1
    struct NVME_POWER_STATE_DESC PDS[32];// Offset=0x800 Size=0x400
    unsigned char VS[1024];// Offset=0xc00 Size=0x400
};
