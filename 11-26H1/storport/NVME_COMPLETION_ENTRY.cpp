union _unnamed_517// Size=0x4 (Id=517)
{
    unsigned short SQHD;// Offset=0x0 Size=0x2
    unsigned short SQID;// Offset=0x2 Size=0x2
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

union _NVME_COMMAND_STATUS// Size=0x2 (Id=408)
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

union _unnamed_518// Size=0x4 (Id=518)
{
    unsigned short CID;// Offset=0x0 Size=0x2
    union _NVME_COMMAND_STATUS Status;// Offset=0x2 Size=0x2
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct NVME_COMPLETION_ENTRY// Size=0x10 (Id=520)
{
    unsigned long DW0;// Offset=0x0 Size=0x4
    unsigned long DW1;// Offset=0x4 Size=0x4
    union _unnamed_517 DW2;// Offset=0x8 Size=0x4
    union _unnamed_518 DW3;// Offset=0xc Size=0x4
};
