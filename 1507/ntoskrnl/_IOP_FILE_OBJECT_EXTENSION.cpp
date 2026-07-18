enum _IOP_PRIORITY_HINT
{
    IopIoPriorityNotSet=0,
    IopIoPriorityVeryLow=1,
    IopIoPriorityLow=2,
    IopIoPriorityNormal=3,
    IopIoPriorityHigh=4,
    IopIoPriorityCritical=5,
    MaxIopIoPriorityTypes=6
};

struct _IOP_FILE_OBJECT_EXTENSION// Size=0x48 (Id=435)
{
    unsigned long FoExtFlags;// Offset=0x0 Size=0x4
    void * FoExtPerTypeExtension[7];// Offset=0x8 Size=0x38
    enum _IOP_PRIORITY_HINT FoIoPriorityHint;// Offset=0x40 Size=0x4
};
