union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS// Size=0x1 (Id=841)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char L1CapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BeslLpmCapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

struct _ROOTHUB_PORT_DATA// Size=0x40 (Id=624)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned char HubDepth;// Offset=0x2 Size=0x1
    unsigned char HighSpeedOnly;// Offset=0x3 Size=0x1
    unsigned char IntegratedHubImplemented;// Offset=0x4 Size=0x1
    unsigned char DeviceRemovable;// Offset=0x5 Size=0x1
    unsigned char ResumeAcknowledged;// Offset=0x6 Size=0x1
    union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS HardwareLPMFlags;// Offset=0x7 Size=0x1
    unsigned char HardwareLPMDirty;// Offset=0x8 Size=0x1
    unsigned char U1Timeout;// Offset=0x9 Size=0x1
    unsigned char U2Timeout;// Offset=0xa Size=0x1
    unsigned char HardwareLPMEnabled;// Offset=0xb Size=0x1
    void * ReadModifyWriteLock;// Offset=0x10 Size=0x8
    struct _ROOTHUB_TIMER_DATA * PortResumeTimerData;// Offset=0x18 Size=0x8
    struct _EX_TIMER * ExTimer20PortResumeComplete;// Offset=0x20 Size=0x8
    struct WDFWORKITEM__ * ExTimer20PortResumeCompleteWorkItem;// Offset=0x28 Size=0x8
    long ResumeTimeReferenceCount;// Offset=0x30 Size=0x4
    unsigned short ResumeTime;// Offset=0x34 Size=0x2
    unsigned short SpeedsCount;// Offset=0x36 Size=0x2
    union _SUPPPORTED_PROTOCOL_CAPABILITY_SPEED * Speeds;// Offset=0x38 Size=0x8
};
