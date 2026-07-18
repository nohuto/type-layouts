union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3532)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ProcessorType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InstructionSet:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Operation:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Flags:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Level:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long CPUVersion:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CPUBrandString:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long ProcessorId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long TargetAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ResponderId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long InstructionPointer:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long NativeModelId:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long Reserved:50;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x32
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION// Size=0xc0 (Id=794)
{
    union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned char ProcessorType;// Offset=0x8 Size=0x1
    unsigned char InstructionSet;// Offset=0x9 Size=0x1
    unsigned char ErrorType;// Offset=0xa Size=0x1
    unsigned char Operation;// Offset=0xb Size=0x1
    unsigned char Flags;// Offset=0xc Size=0x1
    unsigned char Level;// Offset=0xd Size=0x1
    unsigned short Reserved;// Offset=0xe Size=0x2
    unsigned long long CPUVersion;// Offset=0x10 Size=0x8
    unsigned char CPUBrandString[128];// Offset=0x18 Size=0x80
    unsigned long long ProcessorId;// Offset=0x98 Size=0x8
    unsigned long long TargetAddress;// Offset=0xa0 Size=0x8
    unsigned long long RequesterId;// Offset=0xa8 Size=0x8
    unsigned long long ResponderId;// Offset=0xb0 Size=0x8
    unsigned long long InstructionPointer;// Offset=0xb8 Size=0x8
};
