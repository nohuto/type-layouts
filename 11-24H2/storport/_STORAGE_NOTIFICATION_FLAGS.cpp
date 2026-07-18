union _STORAGE_NOTIFICATION_GENERIC_FLAGS// Size=0x8 (Id=1322)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AvailableSpareLow:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TemperatureThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ReliabilityDegraded:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long VolatileMemoryBackupDeviceFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long DiagnosticFailure:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long PersistentInternalError:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long TransientInternalError:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long FirmwareImageLoadError:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long ControllerResetOccurred:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long DeviceFailed:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long UndefinedHealthNotification:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long UndefinedErrorNotification:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long Reserved:51;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x33
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _unnamed_899// Size=0x8 (Id=899)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long WriteToInvalidDoorbellRegister:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InvalidDoorbellWriteValue:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ZoneDescriptorChanged:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _STORAGE_NOTIFICATION_PROTOCOL_SPECIFIC_FLAGS// Size=0x8 (Id=900)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_899 NVMe;// Offset=0x0 Size=0x8
        unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
    };
};

struct _STORAGE_NOTIFICATION_FLAGS// Size=0x10 (Id=700)
{
    union _STORAGE_NOTIFICATION_GENERIC_FLAGS Generic;// Offset=0x0 Size=0x8
    struct _STORAGE_NOTIFICATION_PROTOCOL_SPECIFIC_FLAGS ProtocolSpecific;// Offset=0x8 Size=0x8
};
