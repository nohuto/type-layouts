struct _SECURITY_DESCRIPTOR_RELATIVE// Size=0x14 (Id=1812)
{
    unsigned char Revision;// Offset=0x0 Size=0x1
    unsigned char Sbz1;// Offset=0x1 Size=0x1
    unsigned short Control;// Offset=0x2 Size=0x2
    unsigned long Owner;// Offset=0x4 Size=0x4
    unsigned long Group;// Offset=0x8 Size=0x4
    unsigned long Sacl;// Offset=0xc Size=0x4
    unsigned long Dacl;// Offset=0x10 Size=0x4
};

struct _CM_KEY_SECURITY// Size=0x28 (Id=1923)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long Flink;// Offset=0x4 Size=0x4
    unsigned long Blink;// Offset=0x8 Size=0x4
    unsigned long ReferenceCount;// Offset=0xc Size=0x4
    unsigned long DescriptorLength;// Offset=0x10 Size=0x4
    struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;// Offset=0x14 Size=0x14
};
