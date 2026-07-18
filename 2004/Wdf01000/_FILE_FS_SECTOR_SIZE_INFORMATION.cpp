struct _FILE_FS_SECTOR_SIZE_INFORMATION// Size=0x1c (Id=2954)
{
    unsigned long LogicalBytesPerSector;// Offset=0x0 Size=0x4
    unsigned long PhysicalBytesPerSectorForAtomicity;// Offset=0x4 Size=0x4
    unsigned long PhysicalBytesPerSectorForPerformance;// Offset=0x8 Size=0x4
    unsigned long FileSystemEffectivePhysicalBytesPerSectorForAtomicity;// Offset=0xc Size=0x4
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long ByteOffsetForSectorAlignment;// Offset=0x14 Size=0x4
    unsigned long ByteOffsetForPartitionAlignment;// Offset=0x18 Size=0x4
};
