struct _unnamed_529// Size=0x1 (Id=529)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ThinProvisioning:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char NameSpaceAtomicWriteUnit:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char DeallocatedOrUnwrittenError:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SkipReuseUI:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char NameSpaceIoOptimization:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_530// Size=0x1 (Id=530)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char LbaFormatIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char MetadataInExtendedDataLBA:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LbaFormatIndexMS:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_531// Size=0x1 (Id=531)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MetadataInExtendedDataLBA:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MetadataInSeparateBuffer:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
};

struct _unnamed_532// Size=0x1 (Id=532)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProtectionInfoType1:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ProtectionInfoType2:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ProtectionInfoType3:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char InfoAtBeginningOfMetadata:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InfoAtEndOfMetadata:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_533// Size=0x1 (Id=533)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProtectionInfoTypeEnabled:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char InfoAtBeginningOfMetadata:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _unnamed_534// Size=0x1 (Id=534)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char SharedNameSpace:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _unnamed_535// Size=0x1 (Id=535)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PercentageRemained:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Supported:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_536// Size=0x1 (Id=536)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReadBehavior:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WriteZeroes:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char GuardFieldWithCRC:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_537// Size=0x1 (Id=537)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char WriteProtected:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct NVME_IDENTIFY_NAMESPACE_DATA// Size=0x1000 (Id=538)
{
    unsigned long long NSZE;// Offset=0x0 Size=0x8
    unsigned long long NCAP;// Offset=0x8 Size=0x8
    unsigned long long NUSE;// Offset=0x10 Size=0x8
    struct _unnamed_529 NSFEAT;// Offset=0x18 Size=0x1
    unsigned char NLBAF;// Offset=0x19 Size=0x1
    struct _unnamed_530 FLBAS;// Offset=0x1a Size=0x1
    struct _unnamed_531 MC;// Offset=0x1b Size=0x1
    struct _unnamed_532 DPC;// Offset=0x1c Size=0x1
    struct _unnamed_533 DPS;// Offset=0x1d Size=0x1
    struct _unnamed_534 NMIC;// Offset=0x1e Size=0x1
    union NVM_RESERVATION_CAPABILITIES RESCAP;// Offset=0x1f Size=0x1
    struct _unnamed_535 FPI;// Offset=0x20 Size=0x1
    struct _unnamed_536 DLFEAT;// Offset=0x21 Size=0x1
    unsigned short NAWUN;// Offset=0x22 Size=0x2
    unsigned short NAWUPF;// Offset=0x24 Size=0x2
    unsigned short NACWU;// Offset=0x26 Size=0x2
    unsigned short NABSN;// Offset=0x28 Size=0x2
    unsigned short NABO;// Offset=0x2a Size=0x2
    unsigned short NABSPF;// Offset=0x2c Size=0x2
    unsigned short NOIOB;// Offset=0x2e Size=0x2
    unsigned char NVMCAP[16];// Offset=0x30 Size=0x10
    unsigned short NPWG;// Offset=0x40 Size=0x2
    unsigned short NPWA;// Offset=0x42 Size=0x2
    unsigned short NPDG;// Offset=0x44 Size=0x2
    unsigned short NPDA;// Offset=0x46 Size=0x2
    unsigned short NOWS;// Offset=0x48 Size=0x2
    unsigned short MSSRL;// Offset=0x4a Size=0x2
    unsigned long MCL;// Offset=0x4c Size=0x4
    unsigned char MSRC;// Offset=0x50 Size=0x1
    unsigned char Reserved2[11];// Offset=0x51 Size=0xb
    unsigned long ANAGRPID;// Offset=0x5c Size=0x4
    unsigned char Reserved3[3];// Offset=0x60 Size=0x3
    struct _unnamed_537 NSATTR;// Offset=0x63 Size=0x1
    unsigned short NVMSETID;// Offset=0x64 Size=0x2
    unsigned short ENDGID;// Offset=0x66 Size=0x2
    unsigned char NGUID[16];// Offset=0x68 Size=0x10
    unsigned char EUI64[8];// Offset=0x78 Size=0x8
    union NVME_LBA_FORMAT LBAF[64];// Offset=0x80 Size=0x100
    unsigned char VS[3712];// Offset=0x180 Size=0xe80
};
