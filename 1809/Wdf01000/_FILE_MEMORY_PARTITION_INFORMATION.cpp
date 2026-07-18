struct _FILE_MEMORY_PARTITION_INFORMATION// Size=0x10 (Id=4326)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long OwnerPartitionHandle;// Offset=0x0 Size=0x8
        union <unnamed-type-Flags>// Size=0x4 (Id=9233)
        {
            unsigned char NoCrossPartitionAccess;// Offset=0x0 Size=0x1
            unsigned char Spare[3];// Offset=0x1 Size=0x3
            unsigned long AllFlags;// Offset=0x0 Size=0x4
        };
        union _FILE_MEMORY_PARTITION_INFORMATION::<unnamed-type-Flags> Flags;// Offset=0x8 Size=0x4
    };
};
