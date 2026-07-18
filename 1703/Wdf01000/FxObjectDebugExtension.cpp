struct FxObjectDebugExtension// Size=0x40 (Id=1101)
{
    class FxTagTracker * TagTracker;// Offset=0x0 Size=0x8
    class FxVerifierLock * VerifierLock;// Offset=0x8 Size=0x8
    unsigned char StateHistory[8];// Offset=0x10 Size=0x8
    long StateHistoryIndex;// Offset=0x18 Size=0x4
    unsigned char ObjectCounted;// Offset=0x1c Size=0x1
    unsigned long Signature;// Offset=0x20 Size=0x4
    unsigned long AllocationStart[1];// Offset=0x30 Size=0x4
};
