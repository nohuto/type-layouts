union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS// Size=0x1 (Id=987)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char L1CapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BeslLpmCapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

union _ROOTHUB_PORT_DATA_FLAGS// Size=0x4 (Id=985)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortOperationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IgnoreStatusChangesAndDisableWake:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _ROOTHUB_PORT_ERROR// Size=0x14 (Id=888)
{
    unsigned long RootHubPortInComplianceModeCount;// Offset=0x0 Size=0x4
    unsigned long RootHubPortLinkInactiveCount;// Offset=0x4 Size=0x4
    unsigned char PortErrorReported;// Offset=0x8 Size=0x1
    unsigned long PortErrorToBeTreatedAsChange;// Offset=0xc Size=0x4
    unsigned char PortErrorRecoveryAttempted;// Offset=0x10 Size=0x1
};

struct _ROOTHUB_PORT_DATA// Size=0x78 (Id=734)
{
    struct _ROOTHUB_DATA * RootHubData;// Offset=0x0 Size=0x8
    unsigned long PortNumber;// Offset=0x8 Size=0x4
    unsigned char MinorRevision;// Offset=0xc Size=0x1
    unsigned char MajorRevision;// Offset=0xd Size=0x1
    unsigned char HubDepth;// Offset=0xe Size=0x1
    unsigned char HighSpeedOnly;// Offset=0xf Size=0x1
    unsigned char IntegratedHubImplemented;// Offset=0x10 Size=0x1
    unsigned char DeviceRemovable;// Offset=0x11 Size=0x1
    unsigned char ResumeAcknowledged;// Offset=0x12 Size=0x1
    union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS HardwareLPMFlags;// Offset=0x13 Size=0x1
    unsigned char HardwareLPMDirty;// Offset=0x14 Size=0x1
    unsigned char U1Timeout;// Offset=0x15 Size=0x1
    unsigned char U2Timeout;// Offset=0x16 Size=0x1
    unsigned char HardwareLPMEnabled;// Offset=0x17 Size=0x1
    void * ReadModifyWriteLock;// Offset=0x18 Size=0x8
    unsigned char RaiseIrqlOnReadModifyWriteLockRelease;// Offset=0x20 Size=0x1
    struct WDFTIMER__ * Timer20PortResumeComplete;// Offset=0x28 Size=0x8
    long ResumeTimeReferenceCount;// Offset=0x30 Size=0x4
    unsigned short ResumeTime;// Offset=0x34 Size=0x2
    unsigned short SpeedsCount;// Offset=0x36 Size=0x2
    union _SUPPPORTED_PROTOCOL_CAPABILITY_SPEED * Speeds;// Offset=0x38 Size=0x8
    union _ROOTHUB_PORT_DATA_FLAGS Flags;// Offset=0x40 Size=0x4
    struct WDFTIMER__ * PortOperationPendingTimer;// Offset=0x48 Size=0x8
    struct WDFTIMER__ * PortOperationRecoveryTimer;// Offset=0x50 Size=0x8
    struct _ROOTHUB_PORT_ERROR PortErrorBookKeeping;// Offset=0x58 Size=0x14
    long InterruptEpCount;// Offset=0x6c Size=0x4
    unsigned long ClearPortStatusChangeFailCount;// Offset=0x70 Size=0x4
};
