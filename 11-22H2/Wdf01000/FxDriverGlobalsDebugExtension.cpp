struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FxDriverGlobalsDebugExtension// Size=0x1c8 (Id=2839)
{
    struct FxObjectDebugInfo * ObjectDebugInfo;// Offset=0x0 Size=0x8
    struct FxAllocatedMdls AllocatedMdls;// Offset=0x8 Size=0x190
    unsigned long long AllocatedMdlsLock;// Offset=0x198 Size=0x8
    struct _LIST_ENTRY AllocatedTagTrackersListHead;// Offset=0x1a0 Size=0x10
    class MxLock AllocatedTagTrackersLock;// Offset=0x1b0 Size=0x10
    enum FxTrackPowerOption TrackPower;// Offset=0x1c0 Size=0x1
    enum FxStateSeparationDetectionOption StateSeparationDetection;// Offset=0x1c4 Size=0x4
    void FxDriverGlobalsDebugExtension();
    void ~FxDriverGlobalsDebugExtension();
    void * __vecDelDtor(unsigned int );
};
