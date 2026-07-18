struct _CLFS_NODE_ID// Size=0x8 (Id=1848)
{
    unsigned long cType;// Offset=0x0 Size=0x4
    unsigned long cbNode;// Offset=0x4 Size=0x4
};

struct _CLS_SCAN_CONTEXT// Size=0x38 (Id=1761)
{
    struct _CLFS_NODE_ID cidNode;// Offset=0x0 Size=0x8
    struct _FILE_OBJECT * plfoLog;// Offset=0x8 Size=0x8
    unsigned long cIndex;// Offset=0x10 Size=0x4
    unsigned long cContainers;// Offset=0x18 Size=0x4
    unsigned long cContainersReturned;// Offset=0x20 Size=0x4
    unsigned char eScanMode;// Offset=0x28 Size=0x1
    struct _CLS_CONTAINER_INFORMATION * pinfoContainer;// Offset=0x30 Size=0x8
};
