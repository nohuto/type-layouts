enum _DATA_TYPE
{
    DataTypeGuid=0,
    DataTypeBoolean=1,
    DataTypeUnicodeString=2,
    DataTypeAnsiString=3,
    DataTypeInt8=4,
    DataTypeInt16=5,
    DataTypeInt32=6,
    DataTypeInt64=7,
    DataTypeUInt8=8,
    DataTypeUInt16=9,
    DataTypeUInt32=10,
    DataTypeUInt64=11,
    DataTypeHex8=12,
    DataTypeHex16=13,
    DataTypeHex32=14,
    DataTypeHex64=15,
    DataTypeByteArray=16
};

struct _MINIPORT_DATA// Size=0x18 (Id=247)
{
    char * Name;// Offset=0x0 Size=0x8
    enum _DATA_TYPE Type;// Offset=0x8 Size=0x4
    unsigned short ArrayLength;// Offset=0xc Size=0x2
    void * Data;// Offset=0x10 Size=0x8
};
