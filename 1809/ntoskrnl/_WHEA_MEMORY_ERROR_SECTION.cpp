union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=1721)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PhysicalAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PhysicalAddressMask:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Node:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Card:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Module:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Bank:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long Device:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Row:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Column:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long BitPosition:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long ResponderId:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long RankNumber:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long CardHandle:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ModuleHandle:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long ExtendedRow:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long BankGroup:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long BankAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long ChipIdentification:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long Reserved:42;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x2a
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_ERROR_STATUS// Size=0x8 (Id=1212)
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

struct _WHEA_MEMORY_ERROR_SECTION// Size=0x50 (Id=1056)
{
    union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    unsigned long long PhysicalAddress;// Offset=0x10 Size=0x8
    unsigned long long PhysicalAddressMask;// Offset=0x18 Size=0x8
    unsigned short Node;// Offset=0x20 Size=0x2
    unsigned short Card;// Offset=0x22 Size=0x2
    unsigned short Module;// Offset=0x24 Size=0x2
    unsigned short Bank;// Offset=0x26 Size=0x2
    unsigned short Device;// Offset=0x28 Size=0x2
    unsigned short Row;// Offset=0x2a Size=0x2
    unsigned short Column;// Offset=0x2c Size=0x2
    unsigned short BitPosition;// Offset=0x2e Size=0x2
    unsigned long long RequesterId;// Offset=0x30 Size=0x8
    unsigned long long ResponderId;// Offset=0x38 Size=0x8
    unsigned long long TargetId;// Offset=0x40 Size=0x8
    unsigned char ErrorType;// Offset=0x48 Size=0x1
    unsigned char Extended;// Offset=0x49 Size=0x1
    unsigned short RankNumber;// Offset=0x4a Size=0x2
    unsigned short CardHandle;// Offset=0x4c Size=0x2
    unsigned short ModuleHandle;// Offset=0x4e Size=0x2
};
