struct _PROCESSOR_GROUP_INFO// Size=0x30 (Id=673)
{
    unsigned char MaximumProcessorCount;// Offset=0x0 Size=0x1
    unsigned char ActiveProcessorCount;// Offset=0x1 Size=0x1
    unsigned char Reserved[38];// Offset=0x2 Size=0x26
    unsigned long long ActiveProcessorMask;// Offset=0x28 Size=0x8
};
