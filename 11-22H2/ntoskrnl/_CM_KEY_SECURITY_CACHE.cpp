struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

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

struct _CM_KEY_SECURITY_CACHE// Size=0x38 (Id=1502)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    unsigned long ConvKey;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY List;// Offset=0x8 Size=0x10
    unsigned long DescriptorLength;// Offset=0x18 Size=0x4
    unsigned long RealRefCount;// Offset=0x1c Size=0x4
    struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;// Offset=0x20 Size=0x14
};
