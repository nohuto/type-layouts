struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=102)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FACS// Size=0x40 (Id=612)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long HardwareSignature;// Offset=0x8 Size=0x4
    unsigned long pFirmwareWakingVector;// Offset=0xc Size=0x4
    unsigned long GlobalLock;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
    union _LARGE_INTEGER x_FirmwareWakingVector;// Offset=0x18 Size=0x8
    unsigned char version;// Offset=0x20 Size=0x1
    unsigned char Reserved[31];// Offset=0x21 Size=0x1f
};
