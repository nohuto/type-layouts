struct _anonymous_1824// Size=0x8 (Id=1824)
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

struct _anonymous_1825// Size=0x10 (Id=1825)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _anonymous_1826// Size=0x10 (Id=1826)
{
    struct _anonymous_1824 Mbr;// Offset=0x0 Size=0x8
    struct _anonymous_1825 Gpt;// Offset=0x0 Size=0x10
};
