struct _anonymous_1955// Size=0x8 (Id=1955)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=475)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _anonymous_1956// Size=0x10 (Id=1956)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _anonymous_1957// Size=0x10 (Id=1957)
{
    struct _anonymous_1955 Mbr;// Offset=0x0 Size=0x8
    struct _anonymous_1956 Gpt;// Offset=0x0 Size=0x10
};
