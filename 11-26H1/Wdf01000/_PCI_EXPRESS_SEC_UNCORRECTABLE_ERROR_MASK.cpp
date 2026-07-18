union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK// Size=0x4 (Id=2973)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TargetAbortOnSplitCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MasterAbortOnSplitCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ReceivedTargetAbort:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ReceivedMasterAbort:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RsvdZ:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long UnexpectedSplitCompletionError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UncorrectableSplitCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long UncorrectableDataError:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long UncorrectableAttributeError:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long UncorrectableAddressError:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DelayedTransactionDiscardTimerExpired:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long PERRAsserted:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long SERRAsserted:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long InternalBridgeError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long Reserved:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
