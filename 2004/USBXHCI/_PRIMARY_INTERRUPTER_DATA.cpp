enum _InterruptMechanism
{
    InterruptMechanism_LineBased=0,
    InterruptMechanism_MultiMessageMSI=1,
    InterruptMechanism_MSIX=2
};

struct _PRIMARY_INTERRUPTER_DATA// Size=0x58 (Id=467)
{
    struct WDFDEVICE__ * WdfDevice;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    enum _InterruptMechanism Mechanism;// Offset=0x10 Size=0x4
    unsigned long SecondaryInterrupterCount;// Offset=0x14 Size=0x4
    unsigned long InterrupterCount;// Offset=0x18 Size=0x4
    struct _INTERRUPTER_DATA ** InterrupterDataArray;// Offset=0x20 Size=0x8
    struct _INTERRUPTER_DATA * PrimaryInterrupter;// Offset=0x28 Size=0x8
    unsigned long ActiveProcessorCount;// Offset=0x30 Size=0x4
    wchar_t * InterrupterLookup;// Offset=0x38 Size=0x8
    unsigned long ReservedMessageForOffloadMode;// Offset=0x40 Size=0x4
    struct _INTERRUPTER_DATA * ReservedInterrupterForOffloadMode;// Offset=0x48 Size=0x8
    unsigned long SizeOfInterrupterArray;// Offset=0x50 Size=0x4
};
