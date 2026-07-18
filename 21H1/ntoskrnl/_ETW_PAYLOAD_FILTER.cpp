struct _GUID// Size=0x10 (Id=475)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EVENT_PAYLOAD_PREDICATE// Size=0x18 (Id=1996)
{
    unsigned short FieldIndex;// Offset=0x0 Size=0x2
    unsigned short CompareOp;// Offset=0x2 Size=0x2
    unsigned long long Value[2];// Offset=0x8 Size=0x10
};

struct _AGGREGATED_PAYLOAD_FILTER// Size=0x50 (Id=1751)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MagicValue:12;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short DescriptorVersion:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short PredicateCount;// Offset=0x4 Size=0x2
    unsigned short Reserved;// Offset=0x6 Size=0x2
    unsigned long long HashedEventIdBitmap;// Offset=0x8 Size=0x8
    struct _GUID ProviderGuid;// Offset=0x10 Size=0x10
    unsigned short EachEventTableOffset;// Offset=0x20 Size=0x2
    unsigned short EachEventTableLength;// Offset=0x22 Size=0x2
    unsigned short PayloadDecoderTableOffset;// Offset=0x24 Size=0x2
    unsigned short PayloadDecoderTableLength;// Offset=0x26 Size=0x2
    unsigned short EventFilterTableOffset;// Offset=0x28 Size=0x2
    unsigned short EventFilterTableLength;// Offset=0x2a Size=0x2
    unsigned short UNICODEStringTableOffset;// Offset=0x2c Size=0x2
    unsigned short UNICODEStringTableLength;// Offset=0x2e Size=0x2
    unsigned short ANSIStringTableOffset;// Offset=0x30 Size=0x2
    unsigned short ANSIStringTableLength;// Offset=0x32 Size=0x2
    struct _EVENT_PAYLOAD_PREDICATE PredicateTable[1];// Offset=0x38 Size=0x18
};

struct _ETW_PAYLOAD_FILTER// Size=0x58 (Id=1629)
{
    long RefCount;// Offset=0x0 Size=0x4
    struct _AGGREGATED_PAYLOAD_FILTER PayloadFilter;// Offset=0x8 Size=0x50
};
