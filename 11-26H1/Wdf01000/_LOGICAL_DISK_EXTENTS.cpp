struct _LOGICAL_DISK_EXTENTS// Size=0x70 (Id=1616)
{
    unsigned long long StartingOffset;// Offset=0x0 Size=0x8
    unsigned long long PartitionSize;// Offset=0x8 Size=0x8
    unsigned long DiskNumber;// Offset=0x10 Size=0x4
    unsigned long Size;// Offset=0x14 Size=0x4
    unsigned long DriveType;// Offset=0x18 Size=0x4
    wchar_t DriveLetterString[4];// Offset=0x1c Size=0x8
    unsigned long Pad;// Offset=0x24 Size=0x4
    unsigned long PartitionNumber;// Offset=0x28 Size=0x4
    unsigned long SectorsPerCluster;// Offset=0x2c Size=0x4
    unsigned long BytesPerSector;// Offset=0x30 Size=0x4
    long long NumberOfFreeClusters;// Offset=0x38 Size=0x8
    long long TotalNumberOfClusters;// Offset=0x40 Size=0x8
    wchar_t FileSystemType[16];// Offset=0x48 Size=0x20
    unsigned long VolumeExt;// Offset=0x68 Size=0x4
};
