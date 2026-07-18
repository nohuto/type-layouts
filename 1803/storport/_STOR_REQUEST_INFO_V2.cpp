enum _STOR_IO_PRIORITY_HINT
{
    StorIoPriorityVeryLow=0,
    StorIoPriorityLow=1,
    StorIoPriorityNormal=2,
    StorIoPriorityHigh=3,
    StorIoPriorityCritical=4,
    StorIoMaxPriorityTypes=5,
    StorIoMaxPriorityValue=65535
};

struct _STOR_REQUEST_INFO_V2// Size=0x28 (Id=153)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    enum _STOR_IO_PRIORITY_HINT PriorityHint;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long Key;// Offset=0xc Size=0x4
    unsigned long Length;// Offset=0x10 Size=0x4
    unsigned char IsWriteRequest;// Offset=0x14 Size=0x1
    unsigned char Reserved[3];// Offset=0x15 Size=0x3
    struct _STOR_UNICODE_STRING * FileName;// Offset=0x18 Size=0x8
    unsigned long ProcessId;// Offset=0x20 Size=0x4
};
