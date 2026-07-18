struct _CLS_CONTAINER_INFORMATION// Size=0x240 (Id=2040)
{
    unsigned long FileAttributes;// Offset=0x0 Size=0x4
    unsigned long long CreationTime;// Offset=0x8 Size=0x8
    unsigned long long LastAccessTime;// Offset=0x10 Size=0x8
    unsigned long long LastWriteTime;// Offset=0x18 Size=0x8
    long long ContainerSize;// Offset=0x20 Size=0x8
    unsigned long FileNameActualLength;// Offset=0x28 Size=0x4
    unsigned long FileNameLength;// Offset=0x2c Size=0x4
    wchar_t FileName[256];// Offset=0x30 Size=0x200
    unsigned int State;// Offset=0x230 Size=0x4
    unsigned long PhysicalContainerId;// Offset=0x234 Size=0x4
    unsigned long LogicalContainerId;// Offset=0x238 Size=0x4
};

struct _CLS_ARCHIVE_DESCRIPTOR// Size=0x250 (Id=2185)
{
    unsigned long long coffLow;// Offset=0x0 Size=0x8
    unsigned long long coffHigh;// Offset=0x8 Size=0x8
    struct _CLS_CONTAINER_INFORMATION infoContainer;// Offset=0x10 Size=0x240
};
