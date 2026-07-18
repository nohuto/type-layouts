struct _anonymous_1828// Size=0x8 (Id=1828)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _anonymous_1829// Size=0x10 (Id=1829)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _anonymous_1830// Size=0x10 (Id=1830)
{
    struct _anonymous_1828 Mbr;// Offset=0x0 Size=0x8
    struct _anonymous_1829 Gpt;// Offset=0x0 Size=0x10
};
