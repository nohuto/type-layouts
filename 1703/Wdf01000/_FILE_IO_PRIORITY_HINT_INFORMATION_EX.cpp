enum _IO_PRIORITY_HINT
{
    IoPriorityVeryLow=0,
    IoPriorityLow=1,
    IoPriorityNormal=2,
    IoPriorityHigh=3,
    IoPriorityCritical=4,
    MaxIoPriorityTypes=5
};

struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX// Size=0x8 (Id=3730)
{
    enum _IO_PRIORITY_HINT PriorityHint;// Offset=0x0 Size=0x4
    unsigned char BoostOutstanding;// Offset=0x4 Size=0x1
};
