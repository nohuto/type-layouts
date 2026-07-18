union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3423)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long BusId:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long BusAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long BusData:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long BusCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CompleterId:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved:55;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x37
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_ERROR_STATUS// Size=0x8 (Id=3678)
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

union _WHEA_PCIXBUS_ID// Size=0x2 (Id=2231)
{
    unsigned char BusNumber;// Offset=0x0 Size=0x1
    unsigned char BusSegment;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _WHEA_PCIXBUS_COMMAND// Size=0x8 (Id=3165)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Command:56;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x38
        unsigned long long PCIXCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x7
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

struct _WHEA_PCIXBUS_ERROR_SECTION// Size=0x48 (Id=2697)
{
    union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    unsigned short ErrorType;// Offset=0x10 Size=0x2
    union _WHEA_PCIXBUS_ID BusId;// Offset=0x12 Size=0x2
    unsigned long Reserved;// Offset=0x14 Size=0x4
    unsigned long long BusAddress;// Offset=0x18 Size=0x8
    unsigned long long BusData;// Offset=0x20 Size=0x8
    union _WHEA_PCIXBUS_COMMAND BusCommand;// Offset=0x28 Size=0x8
    unsigned long long RequesterId;// Offset=0x30 Size=0x8
    unsigned long long CompleterId;// Offset=0x38 Size=0x8
    unsigned long long TargetId;// Offset=0x40 Size=0x8
};
