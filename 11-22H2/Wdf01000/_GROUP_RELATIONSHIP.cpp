struct _PROCESSOR_GROUP_INFO// Size=0x30 (Id=3344)
{
    unsigned char MaximumProcessorCount;// Offset=0x0 Size=0x1
    unsigned char ActiveProcessorCount;// Offset=0x1 Size=0x1
    unsigned char Reserved[38];// Offset=0x2 Size=0x26
    unsigned long long ActiveProcessorMask;// Offset=0x28 Size=0x8
};

struct _GROUP_RELATIONSHIP// Size=0x48 (Id=980)
{
    unsigned short MaximumGroupCount;// Offset=0x0 Size=0x2
    unsigned short ActiveGroupCount;// Offset=0x2 Size=0x2
    unsigned char Reserved[20];// Offset=0x4 Size=0x14
    struct _PROCESSOR_GROUP_INFO GroupInfo[1];// Offset=0x18 Size=0x30
};
