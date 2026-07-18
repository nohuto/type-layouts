struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _BOOTDISK_INFORMATION_EX// Size=0x40 (Id=2005)
{
    long long BootPartitionOffset;// Offset=0x0 Size=0x8
    long long SystemPartitionOffset;// Offset=0x8 Size=0x8
    unsigned long BootDeviceSignature;// Offset=0x10 Size=0x4
    unsigned long SystemDeviceSignature;// Offset=0x14 Size=0x4
    struct _GUID BootDeviceGuid;// Offset=0x18 Size=0x10
    struct _GUID SystemDeviceGuid;// Offset=0x28 Size=0x10
    unsigned char BootDeviceIsGpt;// Offset=0x38 Size=0x1
    unsigned char SystemDeviceIsGpt;// Offset=0x39 Size=0x1
};
