struct _unnamed_1527// Size=0x8 (Id=1527)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=40)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_1528// Size=0x10 (Id=1528)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _unnamed_1529// Size=0x10 (Id=1529)
{
    struct _unnamed_1527 Mbr;// Offset=0x0 Size=0x8
    struct _unnamed_1528 Gpt;// Offset=0x0 Size=0x10
};
