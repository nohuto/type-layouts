struct _NVME_HOST_MEMORY_BUFFER// Size=0x18 (Id=927)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    unsigned long HmbDescrListSize;// Offset=0x4 Size=0x4
    struct NVME_HOST_MEMORY_BUFFER_DESCRIPTOR_ENTRY HmbDescrList[1];// Offset=0x8 Size=0x10
};
