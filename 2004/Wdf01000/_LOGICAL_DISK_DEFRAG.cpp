struct _GUID// Size=0x10 (Id=78)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LOGICAL_DISK_DEFRAG// Size=0xe0 (Id=2455)
{
    unsigned long long AlignmentClusters;// Offset=0x0 Size=0x8
    unsigned long long AvgFreeSpaceSize;// Offset=0x8 Size=0x8
    unsigned long long ClustersPerSlab;// Offset=0x10 Size=0x8
    unsigned long long FragmentedDirectoryExtents;// Offset=0x18 Size=0x8
    unsigned long long FragmentedExtents;// Offset=0x20 Size=0x8
    unsigned long long FreeSpaceCount;// Offset=0x28 Size=0x8
    unsigned long long LargestFreeSpaceSize;// Offset=0x30 Size=0x8
    unsigned long long LastRunActualPurgeClusters;// Offset=0x38 Size=0x8
    unsigned long long LastRunClustersTrimmed;// Offset=0x40 Size=0x8
    unsigned long long LastRunFullDefragTime;// Offset=0x48 Size=0x8
    unsigned long long LastRunTime;// Offset=0x50 Size=0x8
    unsigned long long MFTSize;// Offset=0x58 Size=0x8
    unsigned long long TotalClusters;// Offset=0x60 Size=0x8
    unsigned long long TotalUsedClusters;// Offset=0x68 Size=0x8
    unsigned long AvgFragmentsPerFile;// Offset=0x70 Size=0x4
    unsigned long BytesPerCluster;// Offset=0x74 Size=0x4
    unsigned long DirectoryCount;// Offset=0x78 Size=0x4
    unsigned long FragmentedDirectories;// Offset=0x7c Size=0x4
    unsigned long FragmentedFiles;// Offset=0x80 Size=0x4
    unsigned long FragmentedSpace;// Offset=0x84 Size=0x4
    unsigned long HardwareIssue;// Offset=0x88 Size=0x4
    unsigned long InUseMFTRecords;// Offset=0x8c Size=0x4
    unsigned long InUseSlabs;// Offset=0x90 Size=0x4
    unsigned long LastRunActualPurgeSlabs;// Offset=0x94 Size=0x4
    unsigned long LastRunInitialBackedSlabs;// Offset=0x98 Size=0x4
    unsigned long LastRunPercentFragmentation;// Offset=0x9c Size=0x4
    unsigned long LastRunPinnedSlabs;// Offset=0xa0 Size=0x4
    unsigned long LastRunPotentialPurgeSlabs;// Offset=0xa4 Size=0x4
    unsigned long LastRunSpaceInefficientSlabs;// Offset=0xa8 Size=0x4
    unsigned long LastRunTrimmedSlabs;// Offset=0xac Size=0x4
    unsigned long LastRunUnknownEvictFailSlabs;// Offset=0xb0 Size=0x4
    unsigned long LastRunVolsnapPinnedSlabs;// Offset=0xb4 Size=0x4
    unsigned long MFTFragmentCount;// Offset=0xb8 Size=0x4
    unsigned long MovableFiles;// Offset=0xbc Size=0x4
    unsigned long TotalMFTRecords;// Offset=0xc0 Size=0x4
    unsigned long TotalSlabs;// Offset=0xc4 Size=0x4
    unsigned long UnmovableFiles;// Offset=0xc8 Size=0x4
    struct _GUID VolumeId;// Offset=0xcc Size=0x10
    wchar_t VolumePathNames[1];// Offset=0xdc Size=0x2
};
