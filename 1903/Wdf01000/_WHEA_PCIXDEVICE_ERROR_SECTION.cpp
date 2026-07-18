union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2863)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long IdInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long MemoryNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RegisterDataPairs:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_ERROR_STATUS// Size=0x8 (Id=4262)
{
    unsigned long long ErrorStatus;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved1:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long ErrorType:8;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x8
        unsigned long long Address:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long Control:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long Data:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long Responder:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long Requester:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long FirstError:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long Overflow:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long Reserved2:41;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x29
    };
};

struct _WHEA_PCIXDEVICE_ID// Size=0x10 (Id=2180)
{
    unsigned short VendorId;// Offset=0x0 Size=0x2
    unsigned short DeviceId;// Offset=0x2 Size=0x2
    struct // Size=0x8 (Id=0)
    {
        unsigned long ClassCode:24;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long FunctionNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long DeviceNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long BusNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long SegmentNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long Reserved1:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long Reserved2;// Offset=0xc Size=0x4
};

struct _WHEA_PCIXDEVICE_ERROR_SECTION// Size=0x38 (Id=3936)
{
    union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    struct _WHEA_PCIXDEVICE_ID IdInfo;// Offset=0x10 Size=0x10
    unsigned long MemoryNumber;// Offset=0x20 Size=0x4
    unsigned long IoNumber;// Offset=0x24 Size=0x4
    struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[1];// Offset=0x28 Size=0x10
};
