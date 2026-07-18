struct NVME_ICE_ENABLE_NVME_DEVICE// Size=0x10 (Id=1314)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned short NamespaceCount;// Offset=0x8 Size=0x2
    unsigned short NamespacesArrayOffset;// Offset=0xa Size=0x2
    unsigned short QueueCount;// Offset=0xc Size=0x2
    unsigned short QueuesArrayOffset;// Offset=0xe Size=0x2
};
