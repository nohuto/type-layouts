struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EVENT_DESCRIPTOR// Size=0x10 (Id=188)
{
    unsigned short Id;// Offset=0x0 Size=0x2
    unsigned char Version;// Offset=0x2 Size=0x1
    unsigned char Channel;// Offset=0x3 Size=0x1
    unsigned char Level;// Offset=0x4 Size=0x1
    unsigned char Opcode;// Offset=0x5 Size=0x1
    unsigned short Task;// Offset=0x6 Size=0x2
    unsigned long long Keyword;// Offset=0x8 Size=0x8
};

struct _EVENT_HEADER// Size=0x50 (Id=1112)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short HeaderType;// Offset=0x2 Size=0x2
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short EventProperty;// Offset=0x6 Size=0x2
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    unsigned long ProcessId;// Offset=0xc Size=0x4
    union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    struct _GUID ProviderId;// Offset=0x18 Size=0x10
    struct _EVENT_DESCRIPTOR EventDescriptor;// Offset=0x28 Size=0x10
    union // Size=0x40 (Id=0)
    {
        unsigned long KernelTime;// Offset=0x38 Size=0x4
        unsigned long UserTime;// Offset=0x3c Size=0x4
        unsigned long long ProcessorTime;// Offset=0x38 Size=0x8
    };
    struct _GUID ActivityId;// Offset=0x40 Size=0x10
};

struct _ETW_BUFFER_CONTEXT// Size=0x4 (Id=1468)
{
    union // Size=0x2 (Id=0)
    {
        unsigned char ProcessorNumber;// Offset=0x0 Size=0x1
        unsigned char Alignment;// Offset=0x1 Size=0x1
        unsigned short ProcessorIndex;// Offset=0x0 Size=0x2
    };
    unsigned short LoggerId;// Offset=0x2 Size=0x2
};

struct _EVENT_RECORD// Size=0x70 (Id=190)
{
    struct _EVENT_HEADER EventHeader;// Offset=0x0 Size=0x50
    struct _ETW_BUFFER_CONTEXT BufferContext;// Offset=0x50 Size=0x4
    unsigned short ExtendedDataCount;// Offset=0x54 Size=0x2
    unsigned short UserDataLength;// Offset=0x56 Size=0x2
    struct _EVENT_HEADER_EXTENDED_DATA_ITEM * ExtendedData;// Offset=0x58 Size=0x8
    void * UserData;// Offset=0x60 Size=0x8
    void * UserContext;// Offset=0x68 Size=0x8
};
