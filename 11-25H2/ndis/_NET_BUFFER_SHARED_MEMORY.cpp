struct _NET_BUFFER_SHARED_MEMORY// Size=0x20 (Id=1507)
{
    struct _NET_BUFFER_SHARED_MEMORY * NextSharedMemorySegment;// Offset=0x0 Size=0x8
    unsigned long SharedMemoryFlags;// Offset=0x8 Size=0x4
    void * SharedMemoryHandle;// Offset=0x10 Size=0x8
    unsigned long SharedMemoryOffset;// Offset=0x18 Size=0x4
    unsigned long SharedMemoryLength;// Offset=0x1c Size=0x4
};
