struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3970)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS// Size=0x4 (Id=3723)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long DataLinkProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SurpriseDownError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:6;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x6
        unsigned long PoisonedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long FlowControlProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CompletionTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long CompleterAbort:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long UnexpectedCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReceiverOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MalformedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ECRCError:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long UnsupportedRequestError:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long AcsViolation:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long UncorrectableInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long MCBlockedTlp:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AtomicOpEgressBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long TlpPrefixBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Reserved3:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK// Size=0x4 (Id=4117)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long DataLinkProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SurpriseDownError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:6;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x6
        unsigned long PoisonedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long FlowControlProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CompletionTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long CompleterAbort:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long UnexpectedCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReceiverOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MalformedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ECRCError:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long UnsupportedRequestError:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long AcsViolation:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long UncorrectableInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long MCBlockedTlp:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AtomicOpEgressBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long TlpPrefixBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Reserved3:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY// Size=0x4 (Id=3715)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long DataLinkProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SurpriseDownError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:6;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x6
        unsigned long PoisonedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long FlowControlProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CompletionTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long CompleterAbort:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long UnexpectedCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReceiverOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MalformedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ECRCError:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long UnsupportedRequestError:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long AcsViolation:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long UncorrectableInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long MCBlockedTlp:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AtomicOpEgressBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long TlpPrefixBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Reserved3:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS// Size=0x4 (Id=2775)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReceiverError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long BadTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long BadDLLP:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReplayNumRollover:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long ReplayTimerTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long AdvisoryNonFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CorrectedInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HeaderLogOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved3:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK// Size=0x4 (Id=1587)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReceiverError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long BadTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long BadDLLP:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReplayNumRollover:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long ReplayTimerTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long AdvisoryNonFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CorrectedInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HeaderLogOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved3:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_AER_CAPABILITIES// Size=0x4 (Id=2531)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirstErrorPointer:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long ECRCGenerationCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ECRCGenerationEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ECRCCheckCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ECRCCheckEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long MultipleHeaderRecordingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long MultipleHeaderRecordingEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long TlpPrefixLogPresent:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS// Size=0x4 (Id=3232)
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

union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK// Size=0x4 (Id=2778)
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

union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY// Size=0x4 (Id=3447)
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

union _PCI_EXPRESS_SEC_AER_CAPABILITIES// Size=0x4 (Id=2874)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SecondaryUncorrectableFirstErrorPtr:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY// Size=0x4c (Id=2340)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;// Offset=0x8 Size=0x4
    union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;// Offset=0xc Size=0x4
    union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;// Offset=0x10 Size=0x4
    union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;// Offset=0x14 Size=0x4
    union _PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;// Offset=0x18 Size=0x4
    unsigned long HeaderLog[4];// Offset=0x1c Size=0x10
    union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;// Offset=0x2c Size=0x4
    union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;// Offset=0x30 Size=0x4
    union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;// Offset=0x34 Size=0x4
    union _PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;// Offset=0x38 Size=0x4
    unsigned long SecHeaderLog[4];// Offset=0x3c Size=0x10
};
