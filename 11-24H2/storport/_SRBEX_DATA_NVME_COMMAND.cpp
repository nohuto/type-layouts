enum _SRBEXDATATYPE
{
    SrbExDataTypeUnknown=0,
    SrbExDataTypeBidirectional=1,
    SrbExDataTypeScsiCdb16=64,
    SrbExDataTypeScsiCdb32=65,
    SrbExDataTypeScsiCdbVar=66,
    SrbExDataTypeNvmeCommand=67,
    SrbExDataTypeNvmeofOperation=68,
    SrbExDataTypeMiniportPassthrough=69,
    SrbExDataTypeWmi=96,
    SrbExDataTypePower=97,
    SrbExDataTypePnP=98,
    SrbExDataTypeIoInfo=128,
    SrbExDataTypePassthroughDirect=160,
    SrbExDataTypeMSReservedStart=-268435456,
    SrbExDataTypeReserved=-1
};

struct _unnamed_395// Size=0x40 (Id=395)
{
    unsigned char OPC;// Offset=0x0 Size=0x1
    unsigned char PSDT;// Offset=0x1 Size=0x1
    unsigned short CID;// Offset=0x2 Size=0x2
    unsigned char FCTYPE;// Offset=0x4 Size=0x1
    unsigned char Reserved[35];// Offset=0x5 Size=0x23
    unsigned char Specific[24];// Offset=0x28 Size=0x18
};

struct _unnamed_396// Size=0x40 (Id=396)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long OPC:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long FUSE:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long Reserved:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long PSDT:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long CID:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned char TypeSpecific[60];// Offset=0x4 Size=0x3c
};

union _unnamed_397// Size=0x2 (Id=397)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short P:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short SC:8;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x8
        unsigned short SCT:3;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x3
        unsigned short CRD:2;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x2
        unsigned short M:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short DNR:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

struct _SRBEX_DATA_NVME_COMMAND// Size=0x70 (Id=398)
{
    enum _SRBEXDATATYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * ControllerHandle;// Offset=0x8 Size=0x8
        unsigned long long Reserved0;// Offset=0x8 Size=0x8
    };
    union // Size=0x50 (Id=0)
    {
        unsigned long CommandDWORD0;// Offset=0x10 Size=0x4
        unsigned long CommandNSID;// Offset=0x14 Size=0x4
        unsigned long Reserved1[2];// Offset=0x18 Size=0x8
        unsigned long long CommandMPTR;// Offset=0x20 Size=0x8
        union // Size=0x38 (Id=0)
        {
            unsigned long long CommandPRP1;// Offset=0x28 Size=0x8
            unsigned long long CommandPRP2;// Offset=0x30 Size=0x8
            unsigned long long CommandSGL1[2];// Offset=0x28 Size=0x10
        };
        unsigned long CommandCDW10;// Offset=0x38 Size=0x4
        unsigned long CommandCDW11;// Offset=0x3c Size=0x4
        unsigned long CommandCDW12;// Offset=0x40 Size=0x4
        unsigned long CommandCDW13;// Offset=0x44 Size=0x4
        unsigned long CommandCDW14;// Offset=0x48 Size=0x4
        unsigned long CommandCDW15;// Offset=0x4c Size=0x4
        struct _unnamed_395 FabricsCommand;// Offset=0x10 Size=0x40
        struct _unnamed_396 Command;// Offset=0x10 Size=0x40
    };
    unsigned char CommandType;// Offset=0x50 Size=0x1
    unsigned char Reserved2;// Offset=0x51 Size=0x1
    unsigned short CommandFlags;// Offset=0x52 Size=0x2
    unsigned short ResponseFlags;// Offset=0x54 Size=0x2
    union _unnamed_397 CommandStatus;// Offset=0x56 Size=0x2
    unsigned long QID;// Offset=0x58 Size=0x4
    unsigned long CommandTag;// Offset=0x5c Size=0x4
    union // Size=0x68 (Id=0)
    {
        unsigned long CQEntryDW0;// Offset=0x60 Size=0x4
        unsigned long CQEntryDW1;// Offset=0x64 Size=0x4
        unsigned char Specific[8];// Offset=0x60 Size=0x8
    };
    unsigned short SQHD;// Offset=0x68 Size=0x2
    unsigned short SQID;// Offset=0x6a Size=0x2
};
