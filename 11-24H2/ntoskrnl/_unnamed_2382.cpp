struct _unnamed_2380// Size=0x8 (Id=2380)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=58)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_2381// Size=0x10 (Id=2381)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _unnamed_2382// Size=0x10 (Id=2382)
{
    struct _unnamed_2380 Mbr;// Offset=0x0 Size=0x8
    struct _unnamed_2381 Gpt;// Offset=0x0 Size=0x10
};
