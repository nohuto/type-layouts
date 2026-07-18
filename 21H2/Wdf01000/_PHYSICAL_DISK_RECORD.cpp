struct _PHYSICAL_DISK_RECORD// Size=0x238 (Id=2461)
{
    unsigned long DiskNumber;// Offset=0x0 Size=0x4
    unsigned long BytesPerSector;// Offset=0x4 Size=0x4
    unsigned long SectorsPerTrack;// Offset=0x8 Size=0x4
    unsigned long TracksPerCylinder;// Offset=0xc Size=0x4
    unsigned long long Cylinders;// Offset=0x10 Size=0x8
    unsigned long SCSIPortNumber;// Offset=0x18 Size=0x4
    unsigned long SCSIPathId;// Offset=0x1c Size=0x4
    unsigned long SCSITargetId;// Offset=0x20 Size=0x4
    unsigned long SCSILun;// Offset=0x24 Size=0x4
    wchar_t Manufacturer[256];// Offset=0x28 Size=0x200
    unsigned long PartitionCount;// Offset=0x228 Size=0x4
    unsigned char WriteCacheEnabled;// Offset=0x22c Size=0x1
    wchar_t BootDriveLetter[3];// Offset=0x22e Size=0x6
};
