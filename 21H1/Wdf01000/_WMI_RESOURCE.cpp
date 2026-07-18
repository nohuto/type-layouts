struct _WMI_RESOURCE// Size=0x30 (Id=1811)
{
    unsigned long long AcquireTime;// Offset=0x0 Size=0x8
    unsigned long long HoldTime;// Offset=0x8 Size=0x8
    unsigned long long WaitTime;// Offset=0x10 Size=0x8
    unsigned long MaxRecursionDepth;// Offset=0x18 Size=0x4
    unsigned long ThreadId;// Offset=0x1c Size=0x4
    void * Resource;// Offset=0x20 Size=0x8
    unsigned long Action;// Offset=0x28 Size=0x4
    unsigned long ContentionDelta;// Offset=0x2c Size=0x4
};
