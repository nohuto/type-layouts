enum _IO_PRIORITY_HINT
{
    IoPriorityVeryLow=0,
    IoPriorityLow=1,
    IoPriorityNormal=2,
    IoPriorityHigh=3,
    IoPriorityCritical=4,
    MaxIoPriorityTypes=5
};

struct _FILE_IO_PRIORITY_HINT_INFORMATION// Size=0x4 (Id=2368)
{
    enum _IO_PRIORITY_HINT PriorityHint;// Offset=0x0 Size=0x4
};
