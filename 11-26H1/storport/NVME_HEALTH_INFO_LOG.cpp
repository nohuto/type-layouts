union _unnamed_1032// Size=0x1 (Id=1032)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char AvailableSpaceLow:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char TemperatureThreshold:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ReliabilityDegraded:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ReadOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char VolatileMemoryBackupDeviceFailed:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};

struct NVME_HEALTH_INFO_LOG// Size=0x200 (Id=1033)
{
    union _unnamed_1032 CriticalWarning;// Offset=0x0 Size=0x1
    unsigned char Temperature[2];// Offset=0x1 Size=0x2
    unsigned char AvailableSpare;// Offset=0x3 Size=0x1
    unsigned char AvailableSpareThreshold;// Offset=0x4 Size=0x1
    unsigned char PercentageUsed;// Offset=0x5 Size=0x1
    unsigned char Reserved0[26];// Offset=0x6 Size=0x1a
    unsigned char DataUnitRead[16];// Offset=0x20 Size=0x10
    unsigned char DataUnitWritten[16];// Offset=0x30 Size=0x10
    unsigned char HostReadCommands[16];// Offset=0x40 Size=0x10
    unsigned char HostWrittenCommands[16];// Offset=0x50 Size=0x10
    unsigned char ControllerBusyTime[16];// Offset=0x60 Size=0x10
    unsigned char PowerCycle[16];// Offset=0x70 Size=0x10
    unsigned char PowerOnHours[16];// Offset=0x80 Size=0x10
    unsigned char UnsafeShutdowns[16];// Offset=0x90 Size=0x10
    unsigned char MediaErrors[16];// Offset=0xa0 Size=0x10
    unsigned char ErrorInfoLogEntryCount[16];// Offset=0xb0 Size=0x10
    unsigned long WarningCompositeTemperatureTime;// Offset=0xc0 Size=0x4
    unsigned long CriticalCompositeTemperatureTime;// Offset=0xc4 Size=0x4
    unsigned short TemperatureSensor1;// Offset=0xc8 Size=0x2
    unsigned short TemperatureSensor2;// Offset=0xca Size=0x2
    unsigned short TemperatureSensor3;// Offset=0xcc Size=0x2
    unsigned short TemperatureSensor4;// Offset=0xce Size=0x2
    unsigned short TemperatureSensor5;// Offset=0xd0 Size=0x2
    unsigned short TemperatureSensor6;// Offset=0xd2 Size=0x2
    unsigned short TemperatureSensor7;// Offset=0xd4 Size=0x2
    unsigned short TemperatureSensor8;// Offset=0xd6 Size=0x2
    unsigned char Reserved1[296];// Offset=0xd8 Size=0x128
};
