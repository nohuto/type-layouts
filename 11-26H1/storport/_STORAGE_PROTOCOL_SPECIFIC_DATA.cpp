enum _STORAGE_PROTOCOL_TYPE
{
    ProtocolTypeUnknown=0,
    ProtocolTypeScsi=1,
    ProtocolTypeAta=2,
    ProtocolTypeNvme=3,
    ProtocolTypeSd=4,
    ProtocolTypeUfs=5,
    ProtocolTypeProprietary=126,
    ProtocolTypeMaxReserved=127
};

struct _STORAGE_PROTOCOL_SPECIFIC_DATA// Size=0x28 (Id=729)
{
    enum _STORAGE_PROTOCOL_TYPE ProtocolType;// Offset=0x0 Size=0x4
    unsigned long DataType;// Offset=0x4 Size=0x4
    unsigned long ProtocolDataRequestValue;// Offset=0x8 Size=0x4
    unsigned long ProtocolDataRequestSubValue;// Offset=0xc Size=0x4
    unsigned long ProtocolDataOffset;// Offset=0x10 Size=0x4
    unsigned long ProtocolDataLength;// Offset=0x14 Size=0x4
    unsigned long FixedProtocolReturnData;// Offset=0x18 Size=0x4
    unsigned long ProtocolDataRequestSubValue2;// Offset=0x1c Size=0x4
    unsigned long ProtocolDataRequestSubValue3;// Offset=0x20 Size=0x4
    unsigned long ProtocolDataRequestSubValue4;// Offset=0x24 Size=0x4
};
