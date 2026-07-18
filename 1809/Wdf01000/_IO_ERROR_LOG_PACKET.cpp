union _LARGE_INTEGER// Size=0x8 (Id=258)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=11990)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _IO_ERROR_LOG_PACKET// Size=0x30 (Id=4228)
{
    unsigned char MajorFunctionCode;// Offset=0x0 Size=0x1
    unsigned char RetryCount;// Offset=0x1 Size=0x1
    unsigned short DumpDataSize;// Offset=0x2 Size=0x2
    unsigned short NumberOfStrings;// Offset=0x4 Size=0x2
    unsigned short StringOffset;// Offset=0x6 Size=0x2
    unsigned short EventCategory;// Offset=0x8 Size=0x2
    long ErrorCode;// Offset=0xc Size=0x4
    unsigned long UniqueErrorValue;// Offset=0x10 Size=0x4
    long FinalStatus;// Offset=0x14 Size=0x4
    unsigned long SequenceNumber;// Offset=0x18 Size=0x4
    unsigned long IoControlCode;// Offset=0x1c Size=0x4
    union _LARGE_INTEGER DeviceOffset;// Offset=0x20 Size=0x8
    unsigned long DumpData[1];// Offset=0x28 Size=0x4
};
