struct _Component// Size=0x8 (Id=792)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Id;// Offset=0x4 Size=0x4
};

struct _AsDevice// Size=0x10 (Id=1094)
{
    unsigned long long Pdo;// Offset=0x0 Size=0x8
    struct _Component Component;// Offset=0x8 Size=0x8
};

struct _AsActivator// Size=0x10 (Id=1162)
{
    unsigned long Id;// Offset=0x0 Size=0x4
    unsigned long Reserved[3];// Offset=0x4 Size=0xc
};

struct _AsActivatorTask// Size=0x10 (Id=1411)
{
    unsigned long ClientId;// Offset=0x0 Size=0x4
    unsigned long Reserved[2];// Offset=0x4 Size=0x8
    unsigned short TaskId;// Offset=0xc Size=0x2
    unsigned short Reserved2;// Offset=0xe Size=0x2
};

struct _AsActivatorSubtask// Size=0x10 (Id=1175)
{
    unsigned long ClientId;// Offset=0x0 Size=0x4
    unsigned long Reserved[2];// Offset=0x4 Size=0x8
    unsigned short TaskId;// Offset=0xc Size=0x2
    unsigned short SubtaskId;// Offset=0xe Size=0x2
};

struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _AsConnection// Size=0x10 (Id=1417)
{
    unsigned char Reserved[7];// Offset=0x0 Size=0x7
    struct // Size=0x1 (Id=0)
    {
        unsigned char Consumer:2;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:6;// Offset=0x7 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    union _LARGE_INTEGER Id;// Offset=0x8 Size=0x8
};

struct _AsSocSubsystem// Size=0x10 (Id=1420)
{
    unsigned long SubsystemSignature;// Offset=0x0 Size=0x4
    unsigned short PlatformIdleState;// Offset=0x4 Size=0x2
    unsigned short SubsystemIndex;// Offset=0x6 Size=0x2
    unsigned char Reserved[8];// Offset=0x8 Size=0x8
};

struct _AsPreVeto// Size=0x10 (Id=1382)
{
    unsigned long PreVetoSignature;// Offset=0x0 Size=0x4
    unsigned short PlatformIdleState;// Offset=0x4 Size=0x2
    unsigned short Reserved1;// Offset=0x6 Size=0x2
    unsigned long VetoCode;// Offset=0x8 Size=0x4
    unsigned char Reserved2[4];// Offset=0xc Size=0x4
};

struct _AsPdcPhaseBlockerGroup// Size=0x10 (Id=986)
{
    unsigned long BlockerGroupSignature;// Offset=0x0 Size=0x4
    unsigned char BlockerGroupDesc;// Offset=0x4 Size=0x1
    unsigned char Reserved[11];// Offset=0x5 Size=0xb
};

struct _AsPdcPhaseBlockerGroupClient// Size=0x10 (Id=1376)
{
    unsigned long BlockerGroupSignature;// Offset=0x0 Size=0x4
    unsigned char BlockerGroupDesc;// Offset=0x4 Size=0x1
    unsigned char Reserved1[3];// Offset=0x5 Size=0x3
    unsigned long ClientId;// Offset=0x8 Size=0x4
    unsigned char Reserved2[4];// Offset=0xc Size=0x4
};

struct _GUID// Size=0x10 (Id=86)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _SLEEPSTUDY_BLOCKER_GUID// Size=0x10 (Id=1317)
{
    struct _AsDevice AsDevice;// Offset=0x0 Size=0x10
    struct _AsActivator AsActivator;// Offset=0x0 Size=0x10
    struct _AsActivatorTask AsActivatorTask;// Offset=0x0 Size=0x10
    struct _AsActivatorSubtask AsActivatorSubtask;// Offset=0x0 Size=0x10
    struct _AsConnection AsConnection;// Offset=0x0 Size=0x10
    struct _AsSocSubsystem AsSocSubsystem;// Offset=0x0 Size=0x10
    struct _AsPreVeto AsPreVeto;// Offset=0x0 Size=0x10
    struct _AsPdcPhaseBlockerGroup AsPdcPhaseBlockerGroup;// Offset=0x0 Size=0x10
    struct _AsPdcPhaseBlockerGroupClient AsPdcPhaseBlockerGroupClient;// Offset=0x0 Size=0x10
    struct _GUID AsGuid;// Offset=0x0 Size=0x10
};
