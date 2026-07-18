struct FxObjectDebugExtension// Size=0x30 (Id=1105)
{
    class FxTagTracker * TagTracker;// Offset=0x0 Size=0x8
    class FxVerifierLock * VerifierLock;// Offset=0x8 Size=0x8
    unsigned char StateHistory[8];// Offset=0x10 Size=0x8
    long StateHistoryIndex;// Offset=0x18 Size=0x4
    unsigned long Signature;// Offset=0x1c Size=0x4
    unsigned long AllocationStart[1];// Offset=0x20 Size=0x4
};
