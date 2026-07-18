struct _CONFIGURATION_INFORMATION// Size=0x28 (Id=2563)
{
    unsigned long DiskCount;// Offset=0x0 Size=0x4
    unsigned long FloppyCount;// Offset=0x4 Size=0x4
    unsigned long CdRomCount;// Offset=0x8 Size=0x4
    unsigned long TapeCount;// Offset=0xc Size=0x4
    unsigned long ScsiPortCount;// Offset=0x10 Size=0x4
    unsigned long SerialCount;// Offset=0x14 Size=0x4
    unsigned long ParallelCount;// Offset=0x18 Size=0x4
    unsigned char AtDiskPrimaryAddressClaimed;// Offset=0x1c Size=0x1
    unsigned char AtDiskSecondaryAddressClaimed;// Offset=0x1d Size=0x1
    unsigned long Version;// Offset=0x20 Size=0x4
    unsigned long MediumChangerCount;// Offset=0x24 Size=0x4
};
