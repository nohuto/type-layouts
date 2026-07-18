struct _GUID// Size=0x10 (Id=150)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _KBUGCHECK_SECONDARY_DUMP_DATA// Size=0x30 (Id=3405)
{
    void * InBuffer;// Offset=0x0 Size=0x8
    unsigned long InBufferLength;// Offset=0x8 Size=0x4
    unsigned long MaximumAllowed;// Offset=0xc Size=0x4
    struct _GUID Guid;// Offset=0x10 Size=0x10
    void * OutBuffer;// Offset=0x20 Size=0x8
    unsigned long OutBufferLength;// Offset=0x28 Size=0x4
};
