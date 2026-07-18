struct _ETW_ANTI_STARVATION_BOOST_EVENT// Size=0x8 (Id=2133)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned short ProcessorIndex;// Offset=0x4 Size=0x2
    char OldPriority;// Offset=0x6 Size=0x1
    unsigned char SpareByte;// Offset=0x7 Size=0x1
};
