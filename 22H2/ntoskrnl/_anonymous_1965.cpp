struct _anonymous_1963// Size=0x8 (Id=1963)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=477)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _anonymous_1964// Size=0x10 (Id=1964)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _anonymous_1965// Size=0x10 (Id=1965)
{
    struct _anonymous_1963 Mbr;// Offset=0x0 Size=0x8
    struct _anonymous_1964 Gpt;// Offset=0x0 Size=0x10
};
