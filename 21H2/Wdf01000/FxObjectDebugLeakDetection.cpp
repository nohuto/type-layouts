struct FxObjectDebugLeakDetection// Size=0x14 (Id=745)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    long Limit;// Offset=0x4 Size=0x4
    long LimitScaled;// Offset=0x8 Size=0x4
    long ObjectCnt;// Offset=0xc Size=0x4
    long DeviceCnt;// Offset=0x10 Size=0x4
    void FxObjectDebugLeakDetection(struct FxObjectDebugLeakDetection * );
    void FxObjectDebugLeakDetection(struct FxObjectDebugLeakDetection & );
    struct FxObjectDebugLeakDetection & operator=(struct FxObjectDebugLeakDetection * );
    struct FxObjectDebugLeakDetection & operator=(struct FxObjectDebugLeakDetection & );
};
