struct _anonymous_1958// Size=0x8 (Id=1958)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=63)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _anonymous_1959// Size=0x10 (Id=1959)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _anonymous_1960// Size=0x10 (Id=1960)
{
    struct _anonymous_1958 Mbr;// Offset=0x0 Size=0x8
    struct _anonymous_1959 Gpt;// Offset=0x0 Size=0x10
};
