struct _EXCEPTION_RECORD32// Size=0x50 (Id=391)
{
    long ExceptionCode;// Offset=0x0 Size=0x4
    unsigned long ExceptionFlags;// Offset=0x4 Size=0x4
    unsigned long ExceptionRecord;// Offset=0x8 Size=0x4
    unsigned long ExceptionAddress;// Offset=0xc Size=0x4
    unsigned long NumberParameters;// Offset=0x10 Size=0x4
    unsigned long ExceptionInformation[15];// Offset=0x14 Size=0x3c
};

struct _DBGKM_EXCEPTION32// Size=0x54 (Id=393)
{
    struct _EXCEPTION_RECORD32 ExceptionRecord;// Offset=0x0 Size=0x50
    unsigned long FirstChance;// Offset=0x50 Size=0x4
};
