union _unnamed_1266// Size=0x1 (Id=1266)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char SecureChannel:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char SqFlowControlDisable:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ZeroHostIdSupport:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AuthAndSecureChannel:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Reserved:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};

union _unnamed_1267// Size=0x2 (Id=1267)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DuplicateReturnedInfo:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ExplicitPersistentConnectionSupport:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short NoCDCConnectivity:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

struct _NVME_DISCOVERY_ENTRY// Size=0x400 (Id=1268)
{
    unsigned char TRTYPE;// Offset=0x0 Size=0x1
    unsigned char ADRFAM;// Offset=0x1 Size=0x1
    unsigned char SUBTYPE;// Offset=0x2 Size=0x1
    union _unnamed_1266 TREQ;// Offset=0x3 Size=0x1
    unsigned short PORTID;// Offset=0x4 Size=0x2
    unsigned short CNTLID;// Offset=0x6 Size=0x2
    unsigned short ASQSZ;// Offset=0x8 Size=0x2
    union _unnamed_1267 EFLAGS;// Offset=0xa Size=0x2
    unsigned char Reserved0[20];// Offset=0xc Size=0x14
    unsigned char TRSVCID[32];// Offset=0x20 Size=0x20
    unsigned char Reserved1[192];// Offset=0x40 Size=0xc0
    unsigned char NQN[256];// Offset=0x100 Size=0x100
    unsigned char TRADDR[256];// Offset=0x200 Size=0x100
    unsigned char TSAS[256];// Offset=0x300 Size=0x100
};
